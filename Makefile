DEBUG = 0
FRONTEND_SUPPORTS_RGB565 = 1

ifneq ($(V),1)
   Q := @
endif

CORE_DIR := .

SPACE :=
SPACE := $(SPACE) $(SPACE)
BACKSLASH :=
BACKSLASH := \$(BACKSLASH)
filter_out1 = $(filter-out $(firstword $1),$1)
filter_out2 = $(call filter_out1,$(call filter_out1,$1))
unixpath = $(subst \,/,$1)
unixcygpath = /$(subst :,,$(call unixpath,$1))

ifeq ($(platform),)
platform = unix
ifeq ($(shell uname -s),)
   platform = win
else ifneq ($(findstring Darwin,$(shell uname -s)),)
   platform = osx
   arch = intel
ifeq ($(shell uname -p),powerpc)
   arch = ppc
endif
else ifneq ($(findstring MINGW,$(shell uname -s)),)
   platform = win
endif
else ifneq (,$(findstring armv,$(platform)))
	ifeq (,$(findstring classic_,$(platform)))
		override platform += unix
endif
else ifneq (,$(findstring rpi,$(platform)))
   override platform += unix
endif

# If you have a system with 1GB RAM or more - cache the whole 
# CD for CD-based systems in order to prevent file access delays/hiccups
CACHE_CD = 0

HAVE_HES = 0
NEED_BPP = 16
NEED_TREMOR = 1
NEED_BLIP = 1
NEED_CD = 1
NEED_CRC32 = 1
WANT_NEW_API = 1
CORE_DEFINE := -DWANT_STEREO_SOUND
HAVE_CHD = 1
HAVE_CDROM = 0

TARGET_NAME := mednafen_supergrafx

arch = intel
ifeq ($(shell uname -p),powerpc)
arch = ppc
endif

# Unix
ifneq (,$(findstring unix,$(platform)))
   TARGET := $(TARGET_NAME)_libretro.so
   fpic := -fPIC
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   ifneq (,$(findstring Haiku,$(shell uname -s)))
   LDFLAGS += -lroot
   CXXFLAGS += -fpermissive
   else
   LDFLAGS += -lrt
   endif

   ifneq ($(findstring Linux,$(shell uname -s)),)
     HAVE_CDROM = 1
   endif

   # Raspberry Pi
   ifneq (,$(findstring rpi,$(platform)))
      FLAGS += -fomit-frame-pointer -ffast-math
      ifneq (,$(findstring rpi1,$(platform)))
         FLAGS += -DARM -marm -march=armv6j -mfpu=vfp -mfloat-abi=hard
      else ifneq (,$(findstring rpi2,$(platform)))
         FLAGS += -DARM -marm -mcpu=cortex-a7 -mfpu=neon-vfpv4 -mfloat-abi=hard
      else ifneq (,$(findstring rpi3,$(platform)))
         FLAGS += -DARM -marm -mcpu=cortex-a53 -mfpu=neon-fp-armv8 -mfloat-abi=hard
      endif
   endif
   
# Classic Platforms ####################
# Platform affix = classic_<ISA>_<µARCH>
# Help at https://modmyclassic.com/comp
	
# (armv7 a7, hard point, neon based) ### 
# NESC, SNESC, C64 mini 
else ifeq ($(platform), classic_armv7_a7)
	TARGET := $(TARGET_NAME)_libretro.so
	fpic := -fPIC
	SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
	FLAGS += -DARM -Ofast \
	-flto=4 -fwhole-program -fuse-linker-plugin \
	-fdata-sections -ffunction-sections -Wl,--gc-sections \
	-fno-stack-protector -fno-ident -fomit-frame-pointer \
	-falign-functions=1 -falign-jumps=1 -falign-loops=1 \
	-fno-unwind-tables -fno-asynchronous-unwind-tables -fno-unroll-loops \
	-fmerge-all-constants -fno-math-errno \
	-marm -mtune=cortex-a7 -mfpu=neon-vfpv4 -mfloat-abi=hard
	HAVE_NEON = 1
	ARCH = arm
  LDFLAGS += -marm -mtune=cortex-a7 -mfpu=neon-vfpv4
  LDFLAGS += -lrt
	ifeq ($(shell echo `$(CC) -dumpversion` "< 4.9" | bc -l), 1)
	  CFLAGS += -march=armv7-a
	else
	  CFLAGS += -march=armv7ve
	  # If gcc is 5.0 or later
	  ifeq ($(shell echo `$(CC) -dumpversion` ">= 5" | bc -l), 1)
	    LDFLAGS += -static-libgcc -static-libstdc++
	  endif
	endif
#######################################

# OS X
else ifeq ($(platform), osx)
   TARGET := $(TARGET_NAME)_libretro.dylib
   fpic := -fPIC
   SHARED := -dynamiclib
ifeq ($(arch),ppc)
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   OLD_GCC := 1
endif
   OSXVER = `sw_vers -productVersion | cut -d. -f 2`
   OSX_LT_MAVERICKS = `(( $(OSXVER) <= 9)) && echo "YES"`
ifeq ($(OSX_LT_MAVERICKS),"YES")
   fpic += -mmacosx-version-min=10.1
else
	fpic += -stdlib=libc++
endif

# iOS
else ifneq (,$(findstring ios,$(platform)))

   TARGET := $(TARGET_NAME)_libretro_ios.dylib
   fpic := -fPIC
   SHARED := -dynamiclib

ifeq ($(IOSSDK),)
   IOSSDK := $(shell xcodebuild -version -sdk iphoneos Path)
endif
   ifeq ($(platform), ios-arm64)
     CC = cc -arch arm64 -isysroot $(IOSSDK)
     CXX = c++ -arch arm64 -isysroot $(IOSSDK)
   else
     CC = cc -arch armv7 -isysroot $(IOSSDK)
     CXX = c++ -arch armv7 -isysroot $(IOSSDK)
   endif
IPHONEMINVER :=
ifeq ($(platform),$(filter $(platform),ios9 ios-arm64))
	IPHONEMINVER = -miphoneos-version-min=8.0
else
	IPHONEMINVER = -miphoneos-version-min=5.0
endif
   LDFLAGS += $(IPHONEMINVER)
   FLAGS += $(IPHONEMINVER) -DHAVE_UNISTD_H
   CC += $(IPHONEMINVER)
   CXX += $(IPHONEMINVER)

# tvOS
else ifeq ($(platform), tvos-arm64)
   TARGET := $(TARGET_NAME)_libretro_tvos.dylib
   fpic := -fPIC
   SHARED := -dynamiclib
   FLAGS += -DHAVE_UNISTD_H

ifeq ($(IOSSDK),)
   IOSSDK := $(shell xcodebuild -version -sdk appletvos Path)
endif

# QNX
else ifeq ($(platform), qnx)
   TARGET := $(TARGET_NAME)_libretro_qnx.so
   fpic := -fPIC
   SHARED := -lcpp -lm -shared -Wl,--no-undefined -Wl,--version-script=link.T
   CC = qcc -Vgcc_ntoarmv7le
   CXX = QCC -Vgcc_ntoarmv7le_cpp
   AR = QCC -Vgcc_ntoarmv7le
   FLAGS += -D__BLACKBERRY_QNX__ -marm -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp

# PS3
else ifneq (,$(filter $(platform), ps3 sncps3 psl1ght))
   TARGET := $(TARGET_NAME)_libretro_ps3.a
   STATIC_LINKING = 1
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN

   # sncps3
   ifneq (,$(findstring sncps3,$(platform)))
      CC = $(CELL_SDK)/host-win32/sn/bin/ps3ppusnc.exe
      CXX = $(CC)
      AR = $(CELL_SDK)/host-win32/sn/bin/ps3snarl.exe
      FLAGS += -DARCH_POWERPC_ALTIVEC
      CXXFLAGS += -Xc+=exceptions
      OLD_GCC := 1
      NO_GCC := 1

   # PS3
   else ifneq (,$(findstring ps3,$(platform)))
      CC = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-gcc.exe
      CXX = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-g++.exe
      AR = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-ar.exe
      FLAGS += -DARCH_POWERPC_ALTIVEC
      OLD_GCC := 1

   # Lightweight PS3 Homebrew SDK
   else ifneq (,$(findstring psl1ght,$(platform)))
      TARGET := $(TARGET_NAME)_libretro_$(platform).a
      CC = $(PS3DEV)/ppu/bin/ppu-gcc$(EXE_EXT)
      CXX = $(PS3DEV)/ppu/bin/ppu-g++$(EXE_EXT)
      AR = $(PS3DEV)/ppu/bin/ppu-ar$(EXE_EXT)
   endif

# PSP
else ifeq ($(platform), psp1)
   TARGET := $(TARGET_NAME)_libretro_psp1.a
   CC = psp-gcc$(EXE_EXT)
   CXX = psp-g++$(EXE_EXT)
   AR = psp-ar$(EXE_EXT)
   FLAGS += -DPSP -G0
   STATIC_LINKING = 1
   EXTRA_INCLUDES := -I$(shell psp-config --pspsdk-path)/include

# Vita
else ifeq ($(platform), vita)
   TARGET := $(TARGET_NAME)_libretro_vita.a
   CC = arm-vita-eabi-gcc$(EXE_EXT)
   CXX = arm-vita-eabi-g++$(EXE_EXT)
   AR = arm-vita-eabi-ar$(EXE_EXT)
   FLAGS += -DVITA -march=armv7-a -mfpu=neon -mfloat-abi=hard -mlittle-endian -ffast-math
   STATIC_LINKING = 1
   EXTRA_INCLUDES := -I"$(VITASDK)/arm-vita-eabi/include"

# Xbox 360
else ifeq ($(platform), xenon)
   TARGET := $(TARGET_NAME)_libretro_xenon360.a
   CC = xenon-gcc$(EXE_EXT)
   CXX = xenon-g++$(EXE_EXT)
   AR = xenon-ar$(EXE_EXT)
   ENDIANNESS_DEFINES += -D__LIBXENON__ -m32 -D__ppc__ -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   STATIC_LINKING = 1

# Nintendo Switch (libnx)
else ifeq ($(platform), libnx)
include $(DEVKITPRO)/libnx/switch_rules
    EXT=a
    TARGET := $(TARGET_NAME)_libretro_$(platform).$(EXT)
    DEFINES := -DSWITCH=1 -U__linux__ -U__linux -DRARCH_INTERNAL
    CFLAGS  :=  $(DEFINES) -g -O3 -fPIE -I$(LIBNX)/include/ -ffunction-sections -fdata-sections -ftls-model=local-exec -Wl,--allow-multiple-definition -specs=$(LIBNX)/switch.specs
    CFLAGS += $(INCDIRS)
    CFLAGS  += $(INCLUDE)  -D__SWITCH__ -DHAVE_LIBNX
    CXXFLAGS := $(ASFLAGS) $(CFLAGS) -fexceptions -fno-rtti -std=gnu++11 
    CFLAGS += -std=gnu11
    STATIC_LINKING = 1

# Nintendo Game Cube / Wii / WiiU
else ifneq (,$(filter $(platform), ngc wii wiiu))
   TARGET := $(TARGET_NAME)_libretro_$(platform).a
   CC = $(DEVKITPPC)/bin/powerpc-eabi-gcc$(EXE_EXT)
   CXX = $(DEVKITPPC)/bin/powerpc-eabi-g++$(EXE_EXT)
   AR = $(DEVKITPPC)/bin/powerpc-eabi-ar$(EXE_EXT)
   ENDIANNESS_DEFINES += -DGEKKO -mcpu=750 -meabi -mhard-float -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   FLAGS += -U__INT32_TYPE__ -U __UINT32_TYPE__ -D__INT32_TYPE__=int
   EXTRA_INCLUDES := -I$(DEVKITPRO)/libogc/include
   STATIC_LINKING = 1

   # Nintendo WiiU
   ifneq (,$(findstring wiiu,$(platform)))
      ENDIANNESS_DEFINES += -DWIIU -DHW_RVL

   # Nintendo Wii
   else ifneq (,$(findstring wii,$(platform)))
      ENDIANNESS_DEFINES += -DHW_RVL -mrvl

   # Nintendo Game Cube
   else ifneq (,$(findstring ngc,$(platform)))
      ENDIANNESS_DEFINES += -DHW_DOL -mrvl
   endif

# Emscripten
else ifeq ($(platform), emscripten)
   TARGET := $(TARGET_NAME)_libretro_$(platform).bc
   STATIC_LINKING = 1

# else ifneq (,$(findstring armv,$(platform)))
#    TARGET := $(TARGET_NAME)_libretro.so
#    fpic := -fPIC
#    SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
#    CC = gcc
#    IS_X86 = 0
# ifneq (,$(findstring cortexa8,$(platform)))
#    FLAGS += -marm -mcpu=cortex-a8
#    ASFLAGS += -mcpu=cortex-a8
# else ifneq (,$(findstring cortexa9,$(platform)))
#    FLAGS += -marm -mcpu=cortex-a9
#    ASFLAGS += -mcpu=cortex-a9
# endif
#    FLAGS += -marm
# ifneq (,$(findstring neon,$(platform)))
#    FLAGS += -mfpu=neon
#    ASFLAGS += -mfpu=neon
#    HAVE_NEON = 1
# endif
# ifneq (,$(findstring softfloat,$(platform)))
#    FLAGS += -mfloat-abi=softfp
# else ifneq (,$(findstring hardfloat,$(platform)))
#    FLAGS += -mfloat-abi=hard
# endif
#    FLAGS += -DARM

# Windows MSVC 2010 x64
else ifeq ($(platform), windows_msvc2010_x64)
	CC  = cl.exe
	CXX = cl.exe

      NO_GCC := 1
PATH := $(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../../VC/bin/amd64"):$(PATH)
PATH := $(PATH):$(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../IDE")
LIB := $(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../../VC/lib/amd64")
INCLUDE := $(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../../VC/include")

WindowsSdkDir := $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.0A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')lib/x64
WindowsSdkDir ?= $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.1A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')lib/x64

WindowsSdkDirInc := $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.0A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')Include
WindowsSdkDirInc ?= $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.1A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')Include

HAVE_CDROM = 1
INCFLAGS_PLATFORM = -I"$(WindowsSdkDirInc)"
export INCLUDE := $(INCLUDE)
export LIB := $(LIB);$(WindowsSdkDir)
TARGET := $(TARGET_NAME)_libretro.dll
PSS_STYLE :=2
LDFLAGS += -DLL
WINDOWS_VERSION=1
# Windows MSVC 2010 x86
else ifeq ($(platform), windows_msvc2010_x86)
	CC  = cl.exe
	CXX = cl.exe

      NO_GCC := 1
PATH := $(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../../VC/bin"):$(PATH)
PATH := $(PATH):$(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../IDE")
LIB := $(shell IFS=$$'\n'; cygpath -w "$(VS100COMNTOOLS)../../VC/lib")
INCLUDE := $(shell IFS=$$'\n'; cygpath "$(VS100COMNTOOLS)../../VC/include")

WindowsSdkDir := $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.0A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')lib
WindowsSdkDir ?= $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.1A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')lib

WindowsSdkDirInc := $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.0A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')Include
WindowsSdkDirInc ?= $(shell reg query "HKLM\SOFTWARE\Microsoft\Microsoft SDKs\Windows\v7.1A" -v "InstallationFolder" | grep -o '[A-Z]:\\.*')Include

HAVE_CDROM = 1
INCFLAGS_PLATFORM = -I"$(WindowsSdkDirInc)"
export INCLUDE := $(INCLUDE)
export LIB := $(LIB);$(WindowsSdkDir)
TARGET := $(TARGET_NAME)_libretro.dll
PSS_STYLE :=2
LDFLAGS += -DLL
WINDOWS_VERSION=1

# Windows MSVC 2005 x86
else ifeq ($(platform), windows_msvc2005_x86)
	CC  = cl.exe
	CXX = cl.exe

PATH := $(shell IFS=$$'\n'; cygpath "$(VS80COMNTOOLS)../../VC/bin"):$(PATH)
PATH := $(PATH):$(shell IFS=$$'\n'; cygpath "$(VS80COMNTOOLS)../IDE")
INCLUDE := $(shell IFS=$$'\n'; cygpath "$(VS80COMNTOOLS)../../VC/include")
LIB := $(shell IFS=$$'\n'; cygpath -w "$(VS80COMNTOOLS)../../VC/lib")
BIN := $(shell IFS=$$'\n'; cygpath "$(VS80COMNTOOLS)../../VC/bin")

WindowsSdkDir := $(INETSDK)
HAVE_CDROM = 1

export INCLUDE := $(INCLUDE);$(INETSDK)/Include;libretro-common/include/compat/msvc
export LIB := $(LIB);$(WindowsSdkDir);$(INETSDK)/Lib
TARGET := $(TARGET_NAME)_libretro.dll
PSS_STYLE :=2
LDFLAGS += -DLL
CFLAGS += -D_CRT_SECURE_NO_DEPRECATE
LIBS =
WINDOWS_VERSION=1

# Windows MSVC 2003 x86
else ifeq ($(platform), windows_msvc2003_x86)
	CC  = cl.exe
	CXX = cl.exe

PATH := $(shell IFS=$$'\n'; cygpath "$(VS71COMNTOOLS)../../Vc7/bin"):$(PATH)
PATH := $(PATH):$(shell IFS=$$'\n'; cygpath "$(VS71COMNTOOLS)../IDE")
INCLUDE := $(shell IFS=$$'\n'; cygpath "$(VS71COMNTOOLS)../../Vc7/include")
LIB := $(shell IFS=$$'\n'; cygpath -w "$(VS71COMNTOOLS)../../Vc7/lib")
BIN := $(shell IFS=$$'\n'; cygpath "$(VS71COMNTOOLS)../../Vc7/bin")

WindowsSdkDir := $(INETSDK)
HAVE_CDROM = 1

export INCLUDE := $(INCLUDE);$(INETSDK)/Include;libretro-common/include/compat/msvc
export LIB := $(LIB);$(WindowsSdkDir);$(INETSDK)/Lib
TARGET := $(TARGET_NAME)_libretro.dll
PSS_STYLE :=2
LDFLAGS += -DLL
CFLAGS += -D_CRT_SECURE_NO_DEPRECATE
WINDOWS_VERSION=1

# Windows
else
   HAVE_CDROM = 1
   TARGET := $(TARGET_NAME)_libretro.dll
   CC ?= gcc
   CXX ?= g++
   IS_X86 = 1
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   LDFLAGS += -static-libgcc -static-libstdc++ -lwinmm
WINDOWS_VERSION=1
endif

include Makefile.common

ifneq (,$(findstring msvc,$(platform)))
WARNINGS :=
else
WARNINGS := -Wall \
	-Wno-sign-compare \
	-Wno-unused-variable \
	-Wno-unused-function \
	-Wno-uninitialized \
	$(NEW_GCC_WARNING_FLAGS) \
	-Wno-strict-aliasing
EXTRA_GCC_FLAGS := -funroll-loops
endif

GIT_VERSION := " $(shell git rev-parse --short HEAD || echo unknown)"
ifneq ($(GIT_VERSION)," unknown")
	CXXFLAGS += -DGIT_VERSION=\"$(GIT_VERSION)\"
endif

ifeq ($(NO_GCC),1)
	EXTRA_GCC_FLAGS :=
	WARNINGS :=
endif

OBJECTS := $(SOURCES_CXX:.cpp=.o) $(SOURCES_C:.c=.o)

all: $(TARGET)

ifeq ($(DEBUG), 1)
   FLAGS += -O0 -g
else
   FLAGS += -O2 -DNDEBUG $(EXTRA_GCC_FLAGS)
endif

LDFLAGS += $(fpic) $(SHARED)
FLAGS += $(fpic) $(NEW_GCC_FLAGS) $(INCFLAGS) $(INCFLAGS_PLATFORM)

FLAGS += $(ENDIANNESS_DEFINES) -DSIZEOF_DOUBLE=8 $(WARNINGS) -DMEDNAFEN_VERSION=\"1.23.0\" -DPACKAGE=\"mednafen\" -DMEDNAFEN_VERSION_NUMERIC=1230 -DPSS_STYLE=1 -DMPC_FIXED_POINT $(CORE_DEFINE) -DSTDC_HEADERS -D__STDC_LIMIT_MACROS -D__LIBRETRO__ -D_LOW_ACCURACY_ $(EXTRA_INCLUDES) $(SOUND_DEFINE)

ifneq (,$(findstring msvc,$(platform)))
FLAGS += -DINLINE="_inline"
else
FLAGS += -DINLINE="inline"
endif

ifeq ($(HAVE_CDROM), 1)
   FLAGS += -DHAVE_CDROM
ifeq ($(CDROM_DEBUG), 1)
   FLAGS += -DCDROM_DEBUG
endif
endif

CXXFLAGS += $(FLAGS)
CFLAGS += $(FLAGS)

OBJOUT   = -o
LINKOUT  = -o 

ifneq (,$(findstring msvc,$(platform)))
	OBJOUT = -Fo
	LINKOUT = -out:
ifeq ($(STATIC_LINKING),1)
	LD ?= lib.exe
	STATIC_LINKING=0

	ifeq ($(DEBUG), 1)
		CFLAGS += -MTd
		CXXFLAGS += -MTd
	else
		CFLAGS += -MT
		CXXFLAGS += -MT
	endif
else
	LD = link.exe

	ifeq ($(DEBUG), 1)
		CFLAGS += -MDd
		CXXFLAGS += -MDd
	else
		CFLAGS += -MD
		CXXFLAGS += -MD
	endif
endif
else
	LD = $(CXX)
endif

$(TARGET): $(OBJECTS)
ifeq ($(platform), emscripten)
	$(CXX) $(CXXFLAGS) $(OBJOUT)$@ $^
else ifeq ($(STATIC_LINKING), 1)
	$(AR) rcs $@ $(OBJECTS)
else
	$(Q)$(LD) $(LINKOUT)$@ $^ $(LDFLAGS) $(LIBS)
	@$(if $(Q), $(shell echo echo LD $@),)
endif

%.o: %.cpp
	$(Q)$(CXX) -c $(OBJOUT)$@ $< $(CPPFLAGS) $(CXXFLAGS)
	@$(if $(Q), $(shell echo echo CXX $<),)

%.o: %.c
	$(Q)$(CC) -c $(OBJOUT)$@ $< $(CPPFLAGS) $(CFLAGS)
	@$(if $(Q), $(shell echo echo CC $<),)

clean:
	$(Q)rm -f $(OBJECTS)
	@$(if $(Q), $(shell echo echo rm -f *.o),)
	rm -f $(TARGET)

.PHONY: clean
