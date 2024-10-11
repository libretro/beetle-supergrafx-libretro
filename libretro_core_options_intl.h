#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR "فيديو"
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR "الإدخال"
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_HACKS_LABEL_AR NULL
#define CATEGORY_HACKS_INFO_0_AR NULL
#define CATEGORY_CD_LABEL_AR NULL
#define CATEGORY_CD_INFO_0_AR NULL
#define SGX_PALETTE_LABEL_AR NULL
#define SGX_PALETTE_INFO_0_AR NULL
#define OPTION_VAL_RGB_AR NULL
#define OPTION_VAL_COMPOSITE_AR NULL
#define SGX_ASPECT_RATIO_LABEL_AR "نسبة الجانب"
#define SGX_ASPECT_RATIO_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_6_5_AR NULL
#define OPTION_VAL_4_3_AR NULL
#define SGX_HOVERSCAN_LABEL_AR NULL
#define SGX_HOVERSCAN_INFO_0_AR NULL
#define OPTION_VAL_352_AR NULL
#define SGX_INITIAL_SCANLINE_LABEL_AR NULL
#define SGX_INITIAL_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_3_AR NULL
#define SGX_LAST_SCANLINE_LABEL_AR NULL
#define SGX_LAST_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_242_AR NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_AR NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_AR NULL
#define OPTION_VAL_0_25_AR NULL
#define OPTION_VAL_0_50_AR NULL
#define OPTION_VAL_0_75_AR NULL
#define OPTION_VAL_1_00_AR NULL
#define OPTION_VAL_1_25_AR NULL
#define OPTION_VAL_1_50_AR NULL
#define OPTION_VAL_1_75_AR NULL
#define OPTION_VAL_2_00_AR NULL
#define OPTION_VAL_2_25_AR NULL
#define OPTION_VAL_2_50_AR NULL
#define OPTION_VAL_2_75_AR NULL
#define OPTION_VAL_3_00_AR NULL
#define OPTION_VAL_3_25_AR NULL
#define OPTION_VAL_3_50_AR NULL
#define OPTION_VAL_3_75_AR NULL
#define OPTION_VAL_4_00_AR NULL
#define OPTION_VAL_4_25_AR NULL
#define OPTION_VAL_4_50_AR NULL
#define OPTION_VAL_4_75_AR NULL
#define OPTION_VAL_5_00_AR NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_AR NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_AR NULL
#define SGX_DISABLE_SOFTRESET_LABEL_AR NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_AR NULL
#define SGX_MULTITAP_LABEL_AR NULL
#define SGX_MULTITAP_INFO_0_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR NULL
#define OPTION_VAL_2_BUTTONS_AR NULL
#define OPTION_VAL_6_BUTTONS_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR NULL
#define SGX_TURBO_TOGGLE_LABEL_AR NULL
#define SGX_TURBO_TOGGLE_INFO_0_AR NULL
#define OPTION_VAL_SWITCH_AR NULL
#define OPTION_VAL_DEDICATED_AR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_AR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_AR NULL
#define SGX_TURBO_DELAY_LABEL_AR NULL
#define SGX_TURBO_DELAY_INFO_0_AR NULL
#define SGX_CDIMAGECACHE_LABEL_AR NULL
#define SGX_CDIMAGECACHE_INFO_0_AR NULL
#define SGX_CDBIOS_LABEL_AR NULL
#define SGX_CDBIOS_INFO_0_AR NULL
#define OPTION_VAL_GAMES_EXPRESS_AR NULL
#define OPTION_VAL_SYSTEM_CARD_1_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_AR NULL
#define SGX_DETECT_GEXPRESS_LABEL_AR NULL
#define SGX_DETECT_GEXPRESS_INFO_0_AR NULL
#define SGX_CDSPEED_LABEL_AR NULL
#define SGX_CDSPEED_LABEL_CAT_AR NULL
#define SGX_CDSPEED_INFO_0_AR NULL
#define SGX_ADPCMVOLUME_LABEL_AR NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_AR NULL
#define SGX_ADPCMVOLUME_INFO_0_AR NULL
#define SGX_ADPCMVOLUME_INFO_1_AR NULL
#define SGX_CDDAVOLUME_LABEL_AR NULL
#define SGX_CDDAVOLUME_LABEL_CAT_AR NULL
#define SGX_CDPSGVOLUME_LABEL_AR NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_AR NULL
#define SGX_FORCESGX_LABEL_AR NULL
#define SGX_FORCESGX_INFO_0_AR NULL
#define SGX_NOSPRITELIMIT_LABEL_AR NULL
#define SGX_NOSPRITELIMIT_INFO_0_AR NULL
#define SGX_OCMULTIPLIER_LABEL_AR NULL
#define SGX_OCMULTIPLIER_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AR,
      CATEGORY_HACKS_INFO_0_AR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AR,
      CATEGORY_CD_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_AR,
      NULL,
      SGX_PALETTE_INFO_0_AR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AR },
         { "Composite", OPTION_VAL_COMPOSITE_AR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_AR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "6:5", OPTION_VAL_6_5_AR },
         { "4:3", OPTION_VAL_4_3_AR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_AR,
      NULL,
      SGX_HOVERSCAN_INFO_0_AR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_AR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_AR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_AR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_AR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_AR },
         { "0.50", OPTION_VAL_0_50_AR },
         { "0.75", OPTION_VAL_0_75_AR },
         { "1.00", OPTION_VAL_1_00_AR },
         { "1.25", OPTION_VAL_1_25_AR },
         { "1.50", OPTION_VAL_1_50_AR },
         { "1.75", OPTION_VAL_1_75_AR },
         { "2.00", OPTION_VAL_2_00_AR },
         { "2.25", OPTION_VAL_2_25_AR },
         { "2.50", OPTION_VAL_2_50_AR },
         { "2.75", OPTION_VAL_2_75_AR },
         { "3.00", OPTION_VAL_3_00_AR },
         { "3.25", OPTION_VAL_3_25_AR },
         { "3.50", OPTION_VAL_3_50_AR },
         { "3.75", OPTION_VAL_3_75_AR },
         { "4.00", OPTION_VAL_4_00_AR },
         { "4.25", OPTION_VAL_4_25_AR },
         { "4.50", OPTION_VAL_4_50_AR },
         { "4.75", OPTION_VAL_4_75_AR },
         { "5.00", OPTION_VAL_5_00_AR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_AR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_AR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_AR,
      NULL,
      SGX_MULTITAP_INFO_0_AR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_AR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_AR },
         { "dedicated", OPTION_VAL_DEDICATED_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_AR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_AR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_AR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_AR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_AR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_AR,
      NULL,
      SGX_CDBIOS_INFO_0_AR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_AR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_AR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_AR,
      SGX_CDSPEED_LABEL_CAT_AR,
      SGX_CDSPEED_INFO_0_AR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_AR,
      SGX_ADPCMVOLUME_LABEL_CAT_AR,
      SGX_ADPCMVOLUME_INFO_0_AR,
      SGX_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_AR,
      SGX_CDDAVOLUME_LABEL_CAT_AR,
      SGX_ADPCMVOLUME_INFO_0_AR,
      SGX_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_AR,
      SGX_CDPSGVOLUME_LABEL_CAT_AR,
      SGX_ADPCMVOLUME_INFO_0_AR,
      SGX_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_AR,
      NULL,
      SGX_FORCESGX_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_AR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_AR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST "Entrada"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_HACKS_LABEL_AST "Hacks de la emulación"
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CD_LABEL_AST NULL
#define CATEGORY_CD_INFO_0_AST NULL
#define SGX_PALETTE_LABEL_AST NULL
#define SGX_PALETTE_INFO_0_AST "El videu compuestu tenta de recrear la salida orixinal de la consola y pue amosar más detalles en dalgunos xuegos."
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define SGX_ASPECT_RATIO_LABEL_AST "Proporción d'aspeutu"
#define SGX_ASPECT_RATIO_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_6_5_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define SGX_HOVERSCAN_LABEL_AST NULL
#define SGX_HOVERSCAN_INFO_0_AST NULL
#define OPTION_VAL_352_AST "352 (por defeutu)"
#define SGX_INITIAL_SCANLINE_LABEL_AST NULL
#define SGX_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_3_AST "3 (por defeutu)"
#define SGX_LAST_SCANLINE_LABEL_AST NULL
#define SGX_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_242_AST "242 (por defeutu)"
#define SGX_MOUSE_SENSITIVITY_LABEL_AST "Sensibilidá del mur"
#define SGX_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_0_25_AST "0,25"
#define OPTION_VAL_0_50_AST "0,50"
#define OPTION_VAL_0_75_AST "0,75"
#define OPTION_VAL_1_00_AST "1,00"
#define OPTION_VAL_1_25_AST "1,25"
#define OPTION_VAL_1_50_AST "1,50"
#define OPTION_VAL_1_75_AST "1,75"
#define OPTION_VAL_2_00_AST "2,00"
#define OPTION_VAL_2_25_AST "2,25"
#define OPTION_VAL_2_50_AST "2,50"
#define OPTION_VAL_2_75_AST "2,75"
#define OPTION_VAL_3_00_AST "3,00"
#define OPTION_VAL_3_25_AST "3,25"
#define OPTION_VAL_3_50_AST "3,50"
#define OPTION_VAL_3_75_AST "3,75"
#define OPTION_VAL_4_00_AST "4,00"
#define OPTION_VAL_4_25_AST "4,25"
#define OPTION_VAL_4_50_AST "4,50"
#define OPTION_VAL_4_75_AST "4,75"
#define OPTION_VAL_5_00_AST "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_AST "Permitir les direiciones opuestes"
#define SGX_UP_DOWN_ALLOWED_INFO_0_AST NULL
#define SGX_DISABLE_SOFTRESET_LABEL_AST NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_AST NULL
#define SGX_MULTITAP_LABEL_AST NULL
#define SGX_MULTITAP_INFO_0_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST NULL
#define OPTION_VAL_2_BUTTONS_AST NULL
#define OPTION_VAL_6_BUTTONS_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST NULL
#define SGX_TURBO_TOGGLE_LABEL_AST NULL
#define SGX_TURBO_TOGGLE_INFO_0_AST NULL
#define OPTION_VAL_SWITCH_AST NULL
#define OPTION_VAL_DEDICATED_AST NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_AST NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_AST NULL
#define SGX_TURBO_DELAY_LABEL_AST NULL
#define SGX_TURBO_DELAY_INFO_0_AST NULL
#define SGX_CDIMAGECACHE_LABEL_AST NULL
#define SGX_CDIMAGECACHE_INFO_0_AST NULL
#define SGX_CDBIOS_LABEL_AST NULL
#define SGX_CDBIOS_INFO_0_AST NULL
#define OPTION_VAL_GAMES_EXPRESS_AST NULL
#define OPTION_VAL_SYSTEM_CARD_1_AST "Tarxeta del sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_AST "Tarxeta del sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_AST "Tarxeta del sistema 3"
#define SGX_DETECT_GEXPRESS_LABEL_AST NULL
#define SGX_DETECT_GEXPRESS_INFO_0_AST NULL
#define SGX_CDSPEED_LABEL_AST NULL
#define SGX_CDSPEED_LABEL_CAT_AST NULL
#define SGX_CDSPEED_INFO_0_AST NULL
#define SGX_ADPCMVOLUME_LABEL_AST NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_AST NULL
#define SGX_ADPCMVOLUME_INFO_0_AST NULL
#define SGX_ADPCMVOLUME_INFO_1_AST NULL
#define SGX_CDDAVOLUME_LABEL_AST NULL
#define SGX_CDDAVOLUME_LABEL_CAT_AST NULL
#define SGX_CDPSGVOLUME_LABEL_AST NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_AST NULL
#define SGX_FORCESGX_LABEL_AST "Forciar la emulación de SuperGrafx (ye obligatorio reaniciar)"
#define SGX_FORCESGX_INFO_0_AST NULL
#define SGX_NOSPRITELIMIT_LABEL_AST NULL
#define SGX_NOSPRITELIMIT_INFO_0_AST NULL
#define SGX_OCMULTIPLIER_LABEL_AST NULL
#define SGX_OCMULTIPLIER_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AST,
      CATEGORY_HACKS_INFO_0_AST
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AST,
      CATEGORY_CD_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_AST,
      NULL,
      SGX_PALETTE_INFO_0_AST,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AST },
         { "Composite", OPTION_VAL_COMPOSITE_AST },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_AST,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "6:5", OPTION_VAL_6_5_AST },
         { "4:3", OPTION_VAL_4_3_AST },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_AST,
      NULL,
      SGX_HOVERSCAN_INFO_0_AST,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_AST },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_AST,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_AST,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AST },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_AST,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_AST },
         { "0.50", OPTION_VAL_0_50_AST },
         { "0.75", OPTION_VAL_0_75_AST },
         { "1.00", OPTION_VAL_1_00_AST },
         { "1.25", OPTION_VAL_1_25_AST },
         { "1.50", OPTION_VAL_1_50_AST },
         { "1.75", OPTION_VAL_1_75_AST },
         { "2.00", OPTION_VAL_2_00_AST },
         { "2.25", OPTION_VAL_2_25_AST },
         { "2.50", OPTION_VAL_2_50_AST },
         { "2.75", OPTION_VAL_2_75_AST },
         { "3.00", OPTION_VAL_3_00_AST },
         { "3.25", OPTION_VAL_3_25_AST },
         { "3.50", OPTION_VAL_3_50_AST },
         { "3.75", OPTION_VAL_3_75_AST },
         { "4.00", OPTION_VAL_4_00_AST },
         { "4.25", OPTION_VAL_4_25_AST },
         { "4.50", OPTION_VAL_4_50_AST },
         { "4.75", OPTION_VAL_4_75_AST },
         { "5.00", OPTION_VAL_5_00_AST },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_AST,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_AST,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_AST,
      NULL,
      SGX_MULTITAP_INFO_0_AST,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_AST,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_AST },
         { "dedicated", OPTION_VAL_DEDICATED_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_AST,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_AST,
      NULL,
      SGX_TURBO_DELAY_INFO_0_AST,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_AST,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_AST,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_AST,
      NULL,
      SGX_CDBIOS_INFO_0_AST,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AST },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AST },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AST },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AST },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_AST,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_AST,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_AST,
      SGX_CDSPEED_LABEL_CAT_AST,
      SGX_CDSPEED_INFO_0_AST,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_AST,
      SGX_ADPCMVOLUME_LABEL_CAT_AST,
      SGX_ADPCMVOLUME_INFO_0_AST,
      SGX_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_AST,
      SGX_CDDAVOLUME_LABEL_CAT_AST,
      SGX_ADPCMVOLUME_INFO_0_AST,
      SGX_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_AST,
      SGX_CDPSGVOLUME_LABEL_CAT_AST,
      SGX_ADPCMVOLUME_INFO_0_AST,
      SGX_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_AST,
      NULL,
      SGX_FORCESGX_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_AST,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_AST,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_VIDEO_LABEL_BE "Відэа"
#define CATEGORY_VIDEO_INFO_0_BE "Настройкі кадравання, пропуску кадраў і іншых параметраў выявы."
#define CATEGORY_INPUT_LABEL_BE "Увод"
#define CATEGORY_INPUT_INFO_0_BE "Налады ўводу для светлавога пісталета, мышы і NegCon."
#define CATEGORY_HACKS_LABEL_BE "Хакі эмуляцыі"
#define CATEGORY_HACKS_INFO_0_BE "Налада разгону працэсара і параметраў дакладнасці эмуляцыі, якія ўплываюць на прадукцыйнасць і сумяшчальнасць."
#define CATEGORY_CD_LABEL_BE NULL
#define CATEGORY_CD_INFO_0_BE "Настройкі, звязаныя з запускам гульняў на CD."
#define SGX_PALETTE_LABEL_BE "Колеравая палітра"
#define SGX_PALETTE_INFO_0_BE "Кампазітны рэжым імітуе арыгінальны малюнак з кансолі і павялічвае дэталізацыю для некаторых гульняў."
#define OPTION_VAL_RGB_BE NULL
#define OPTION_VAL_COMPOSITE_BE "Кампазітны"
#define SGX_ASPECT_RATIO_LABEL_BE "Суадносіны бакоў"
#define SGX_ASPECT_RATIO_INFO_0_BE "Выбар пераважных суадносін бакоў кантэнту. Для гульняў з частым пераключэннем паміж рэжымамі 256 і 352 і вкл. аўтавыбарам суадносін бакоў змена памераў і з'яўленне чорных палос можна мінімізаваць, усталяваўшы для шырыні па гарызанталі значэнне 342, т. к. яно знаходзіцца ў суадносінах бакоў рэжыму шырыні 256 (ці блізка да яго, што правяраецца ў гульні Asuka 100%, якая выкарыстоўвае змену рэжымаў)."
#define OPTION_VAL_AUTO_BE "Аўта"
#define OPTION_VAL_6_5_BE NULL
#define OPTION_VAL_4_3_BE NULL
#define SGX_HOVERSCAN_LABEL_BE "Гарызантальная Разгортка (толькі для рэжыму шырыні 352)"
#define SGX_HOVERSCAN_INFO_0_BE "Устаноўка максімальнай шырыні малюнка. Памяншэнне значэння абразае правы край выявы (для гульняў з шырынёй у 352 пікселя)."
#define OPTION_VAL_352_BE "352 % (прадвызначана)"
#define SGX_INITIAL_SCANLINE_LABEL_BE "Першы радок разгорткі"
#define SGX_INITIAL_SCANLINE_INFO_0_BE "Радок разгорткі, які адлюстроўваецца першым. Павышэнне значэння абразае верхні край выявы."
#define OPTION_VAL_3_BE "3 % (прадвызначана)"
#define SGX_LAST_SCANLINE_LABEL_BE "Апошні радок разгорткі"
#define SGX_LAST_SCANLINE_INFO_0_BE "Радок разгорткі, які адлюстроўваецца апошнім. Памяншэнне значэння абразае ніжні край карцінкі."
#define OPTION_VAL_242_BE "242 % (прадвызначана)"
#define SGX_MOUSE_SENSITIVITY_LABEL_BE "Чуласць Мышы"
#define SGX_MOUSE_SENSITIVITY_INFO_0_BE "Вышэйшыя значэнні павялічваюць хуткасць перасоўвання курсора мышы."
#define OPTION_VAL_0_25_BE NULL
#define OPTION_VAL_0_50_BE NULL
#define OPTION_VAL_0_75_BE NULL
#define OPTION_VAL_1_00_BE NULL
#define OPTION_VAL_1_25_BE NULL
#define OPTION_VAL_1_50_BE NULL
#define OPTION_VAL_1_75_BE NULL
#define OPTION_VAL_2_00_BE NULL
#define OPTION_VAL_2_25_BE NULL
#define OPTION_VAL_2_50_BE NULL
#define OPTION_VAL_2_75_BE NULL
#define OPTION_VAL_3_00_BE NULL
#define OPTION_VAL_3_25_BE NULL
#define OPTION_VAL_3_50_BE NULL
#define OPTION_VAL_3_75_BE NULL
#define OPTION_VAL_4_00_BE NULL
#define OPTION_VAL_4_25_BE NULL
#define OPTION_VAL_4_50_BE NULL
#define OPTION_VAL_4_75_BE NULL
#define OPTION_VAL_5_00_BE NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_BE "Дазволіць супрацьлеглыя напрамкі"
#define SGX_UP_DOWN_ALLOWED_INFO_0_BE "Пры ўключэнні дазваляе націскаць / хутка мяняць / адначасова заціскаць напрамкі налева і направа (ці ўверх і ўніз). Можа выклікаць глітчы, злучаныя з перасоўваннем."
#define SGX_DISABLE_SOFTRESET_LABEL_BE "Адключыць мяккі скід (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_BE "Адначасовы націск RUN і SELECT замест скіду будзе часова адключаць абедзве кнопкі."
#define SGX_MULTITAP_LABEL_BE "Multitap на 5 кантролераў"
#define SGX_MULTITAP_INFO_0_BE "Уключае эмуляцыю multitap да 5 гульцоў. Адключэнне наладкі патрабуецца толькі ў асобных выпадках (напр. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE "Тып джойсціка Гульца 1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE "Выбар 2- ці 6-ці кнопкавага кантролера па змаўчанні для парта 1. Дадзеная опцыя ўжываецца толькі пры запуску ядра. Для пераключэння на ляту выкарыстоўвайце кнопку 'Змяніць рэжым'. УВАГА: у несумяшчальных гульнях 6-кнопкавы геймпад можа выклікаць багі кіравання."
#define OPTION_VAL_2_BUTTONS_BE "2-кнопкавы"
#define OPTION_VAL_6_BUTTONS_BE "6-кнопкавы"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE "Тып джойсціка Гульца 2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE "Выбар 2- ці 6-ці кнопкавага кантролера па змаўчанні для парта 2. Дадзеная опцыя ўжываецца толькі пры запуску ядра. Для пераключэння на ляту выкарыстоўвайце кнопку 'Змяніць рэжым'. УВАГА: у несумяшчальных гульнях 6-кнопкавы геймпад можа выклікаць багі кіравання."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE "Тып джойсціка Гульца 3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE "Выбар 2- ці 6-ці кнопкавага кантролера па змаўчанні для парта 3. Дадзеная опцыя ўжываецца толькі пры запуску ядра. Для пераключэння на ляту выкарыстоўвайце кнопку 'Змяніць рэжым'. УВАГА: у несумяшчальных гульнях 6-кнопкавы геймпад можа выклікаць багі кіравання."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE "Тып джойсціка Гульца 4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE "Выбар 2- ці 6-ці кнопкавага кантролера па змаўчанні для парта 4. Дадзеная опцыя ўжываецца толькі пры запуску ядра. Для пераключэння на ляту выкарыстоўвайце кнопку 'Змяніць рэжым'. УВАГА: у несумяшчальных гульнях 6-кнопкавы геймпад можа выклікаць багі кіравання."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE "Тып джойсціка Гульца 5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE "Выбар 2- ці 6-ці кнопкавага кантролера па змаўчанні для парта 5. Дадзеная опцыя ўжываецца толькі пры запуску ядра. Для пераключэння на ляту выкарыстоўвайце кнопку 'Змяніць рэжым'. УВАГА: у несумяшчальных гульнях 6-кнопкавы геймпад можа выклікаць багі кіравання."
#define SGX_TURBO_TOGGLE_LABEL_BE "Рэжым турба-кнопак"
#define SGX_TURBO_TOGGLE_INFO_0_BE "Уключэнне турба-кнопак. Актыватары (кнопкі III і IV) могуць працаваць як пераключальнікі або як вылучаныя кнопкі, якія (уключаюцца пры ўтрыманні)."
#define OPTION_VAL_SWITCH_BE "Пераключальнікі"
#define OPTION_VAL_DEDICATED_BE "Вылучаныя"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_BE "Альтэрнатыўнае ўключэнне турба"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_BE "Прызначае кнопкі RetroPad'а L3/R3 у якасці гарачых клавіш для ўключэння турба замест кнопак III і IV. Працуе толькі пры адсутнасці прывязак да кнопак L3/R3. Дазваляе пазбегнуць перапрызначэння кнопак III і IV у рэжыме 6-кнопкавага кантролера."
#define SGX_TURBO_DELAY_LABEL_BE "Затрымка турба"
#define SGX_TURBO_DELAY_INFO_0_BE "Наладжвае прамежак паміж паўторамі націскаў (у кадрах)."
#define SGX_CDIMAGECACHE_LABEL_BE "Кэшаваць выяву CD (патрабуецца перазапуск)"
#define SGX_CDIMAGECACHE_INFO_0_BE "Пры запуску выява дыска цалкам загружаецца ў памяць. Паскарае загрузку, але павялічвае час запуску."
#define SGX_CDBIOS_LABEL_BE "BIOS CD (патрабуецца перазапуск)"
#define SGX_CDBIOS_INFO_0_BE "Большасць гульняў запускаюцца з 'System Card 3'. 'Games Express' патрабуецца для некаторых неліцэнзаваных гульняў."
#define OPTION_VAL_GAMES_EXPRESS_BE NULL
#define OPTION_VAL_SYSTEM_CARD_1_BE NULL
#define OPTION_VAL_SYSTEM_CARD_2_BE NULL
#define OPTION_VAL_SYSTEM_CARD_3_BE NULL
#define SGX_DETECT_GEXPRESS_LABEL_BE "Вызначаць дыскі Games Express (патрабуецца перазапуск)"
#define SGX_DETECT_GEXPRESS_INFO_0_BE "Аўтаматычная загрузка BIOS'а Games Express пры запуску гульняў Games Express, незалежна ад значэння налады BIOS CD."
#define SGX_CDSPEED_LABEL_BE "(CD) Хуткасць CD"
#define SGX_CDSPEED_LABEL_CAT_BE "Хуткасць CD"
#define SGX_CDSPEED_INFO_0_BE "Вышэйшыя значэнні паскараюць загрузку, але могуць выклікаць праблемы ў асобных гульнях."
#define SGX_ADPCMVOLUME_LABEL_BE "(CD) Гучнасць ADPCM %"
#define SGX_ADPCMVOLUME_LABEL_CAT_BE "Гучнасць ADPCM %"
#define SGX_ADPCMVOLUME_INFO_0_BE "Толькі для CD-гульняў. Занадта высокія значэнні могуць прыводзіць да скажэнняў гуку."
#define SGX_ADPCMVOLUME_INFO_1_BE "Занадта высокія значэнні могуць прыводзіць да скажэнняў гуку."
#define SGX_CDDAVOLUME_LABEL_BE "(CD) Гучнасць CDDA %"
#define SGX_CDDAVOLUME_LABEL_CAT_BE "Гучнасць CDDA %"
#define SGX_CDPSGVOLUME_LABEL_BE "(CD) Гучнасць PSG %"
#define SGX_CDPSGVOLUME_LABEL_CAT_BE "CD Гучнасць PSG %"
#define SGX_FORCESGX_LABEL_BE "Прымусовы рэжым SuperGrafx (патрабуецца перазапуск)"
#define SGX_FORCESGX_INFO_0_BE "Выкарыстоўваецца пры запуску homebrew і для выключэння гульняў, якія не падтрымліваюць рэжым SuperGrafx (напрыклад Space Harrier). Не рэкамендуецца ўключаць без неабходнасці. Гульні SuperGrafx (такія як Dai-Makaimura, Aldyns) запускаюцца ў дадзеным рэжыме аўтаматычна, незалежна ад становішча наладкі."
#define SGX_NOSPRITELIMIT_LABEL_BE "Без абмежавання спрайтаў"
#define SGX_NOSPRITELIMIT_INFO_0_BE "Здымае апаратнае абмежаванне ў 16 спрайтаў на лініі разгорткі. УВАГА: у некаторых гульнях можа выклікаць графічныя багі."
#define SGX_OCMULTIPLIER_LABEL_BE "Множнік разгону CPU (патрабуецца перазапуск)"
#define SGX_OCMULTIPLIER_INFO_0_BE "Вышэйшыя значэнні памяншаюць запаволенні ў гульнях. УВАГА: можа прыводзіць да багам і вылетам."

struct retro_core_option_v2_category option_cats_be[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_BE,
      CATEGORY_VIDEO_INFO_0_BE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_BE,
      CATEGORY_INPUT_INFO_0_BE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_BE,
      CATEGORY_HACKS_INFO_0_BE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_BE,
      CATEGORY_CD_INFO_0_BE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_BE,
      NULL,
      SGX_PALETTE_INFO_0_BE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_BE },
         { "Composite", OPTION_VAL_COMPOSITE_BE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_BE,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_BE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_BE },
         { "6:5", OPTION_VAL_6_5_BE },
         { "4:3", OPTION_VAL_4_3_BE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_BE,
      NULL,
      SGX_HOVERSCAN_INFO_0_BE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_BE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_BE,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_BE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_BE,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_BE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_BE,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_BE },
         { "0.50", OPTION_VAL_0_50_BE },
         { "0.75", OPTION_VAL_0_75_BE },
         { "1.00", OPTION_VAL_1_00_BE },
         { "1.25", OPTION_VAL_1_25_BE },
         { "1.50", OPTION_VAL_1_50_BE },
         { "1.75", OPTION_VAL_1_75_BE },
         { "2.00", OPTION_VAL_2_00_BE },
         { "2.25", OPTION_VAL_2_25_BE },
         { "2.50", OPTION_VAL_2_50_BE },
         { "2.75", OPTION_VAL_2_75_BE },
         { "3.00", OPTION_VAL_3_00_BE },
         { "3.25", OPTION_VAL_3_25_BE },
         { "3.50", OPTION_VAL_3_50_BE },
         { "3.75", OPTION_VAL_3_75_BE },
         { "4.00", OPTION_VAL_4_00_BE },
         { "4.25", OPTION_VAL_4_25_BE },
         { "4.50", OPTION_VAL_4_50_BE },
         { "4.75", OPTION_VAL_4_75_BE },
         { "5.00", OPTION_VAL_5_00_BE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_BE,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_BE,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_BE,
      NULL,
      SGX_MULTITAP_INFO_0_BE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_BE,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_BE },
         { "dedicated", OPTION_VAL_DEDICATED_BE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_BE,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_BE,
      NULL,
      SGX_TURBO_DELAY_INFO_0_BE,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_BE,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_BE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_BE,
      NULL,
      SGX_CDBIOS_INFO_0_BE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_BE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_BE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_BE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_BE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_BE,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_BE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_BE,
      SGX_CDSPEED_LABEL_CAT_BE,
      SGX_CDSPEED_INFO_0_BE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_BE,
      SGX_ADPCMVOLUME_LABEL_CAT_BE,
      SGX_ADPCMVOLUME_INFO_0_BE,
      SGX_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_BE,
      SGX_CDDAVOLUME_LABEL_CAT_BE,
      SGX_ADPCMVOLUME_INFO_0_BE,
      SGX_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_BE,
      SGX_CDPSGVOLUME_LABEL_CAT_BE,
      SGX_ADPCMVOLUME_INFO_0_BE,
      SGX_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_BE,
      NULL,
      SGX_FORCESGX_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_BE,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_BE,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_BG */

#define CATEGORY_VIDEO_LABEL_BG NULL
#define CATEGORY_VIDEO_INFO_0_BG NULL
#define CATEGORY_INPUT_LABEL_BG NULL
#define CATEGORY_INPUT_INFO_0_BG NULL
#define CATEGORY_HACKS_LABEL_BG NULL
#define CATEGORY_HACKS_INFO_0_BG NULL
#define CATEGORY_CD_LABEL_BG NULL
#define CATEGORY_CD_INFO_0_BG NULL
#define SGX_PALETTE_LABEL_BG NULL
#define SGX_PALETTE_INFO_0_BG NULL
#define OPTION_VAL_RGB_BG NULL
#define OPTION_VAL_COMPOSITE_BG NULL
#define SGX_ASPECT_RATIO_LABEL_BG NULL
#define SGX_ASPECT_RATIO_INFO_0_BG NULL
#define OPTION_VAL_AUTO_BG NULL
#define OPTION_VAL_6_5_BG NULL
#define OPTION_VAL_4_3_BG NULL
#define SGX_HOVERSCAN_LABEL_BG NULL
#define SGX_HOVERSCAN_INFO_0_BG NULL
#define OPTION_VAL_352_BG NULL
#define SGX_INITIAL_SCANLINE_LABEL_BG NULL
#define SGX_INITIAL_SCANLINE_INFO_0_BG NULL
#define OPTION_VAL_3_BG NULL
#define SGX_LAST_SCANLINE_LABEL_BG NULL
#define SGX_LAST_SCANLINE_INFO_0_BG NULL
#define OPTION_VAL_242_BG NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_BG NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_BG NULL
#define OPTION_VAL_0_25_BG NULL
#define OPTION_VAL_0_50_BG NULL
#define OPTION_VAL_0_75_BG NULL
#define OPTION_VAL_1_00_BG NULL
#define OPTION_VAL_1_25_BG NULL
#define OPTION_VAL_1_50_BG NULL
#define OPTION_VAL_1_75_BG NULL
#define OPTION_VAL_2_00_BG NULL
#define OPTION_VAL_2_25_BG NULL
#define OPTION_VAL_2_50_BG NULL
#define OPTION_VAL_2_75_BG NULL
#define OPTION_VAL_3_00_BG NULL
#define OPTION_VAL_3_25_BG NULL
#define OPTION_VAL_3_50_BG NULL
#define OPTION_VAL_3_75_BG NULL
#define OPTION_VAL_4_00_BG NULL
#define OPTION_VAL_4_25_BG NULL
#define OPTION_VAL_4_50_BG NULL
#define OPTION_VAL_4_75_BG NULL
#define OPTION_VAL_5_00_BG NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_BG NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_BG NULL
#define SGX_DISABLE_SOFTRESET_LABEL_BG NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_BG NULL
#define SGX_MULTITAP_LABEL_BG NULL
#define SGX_MULTITAP_INFO_0_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BG NULL
#define OPTION_VAL_2_BUTTONS_BG NULL
#define OPTION_VAL_6_BUTTONS_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_BG NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BG NULL
#define SGX_TURBO_TOGGLE_LABEL_BG NULL
#define SGX_TURBO_TOGGLE_INFO_0_BG NULL
#define OPTION_VAL_SWITCH_BG NULL
#define OPTION_VAL_DEDICATED_BG NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_BG NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_BG NULL
#define SGX_TURBO_DELAY_LABEL_BG NULL
#define SGX_TURBO_DELAY_INFO_0_BG NULL
#define SGX_CDIMAGECACHE_LABEL_BG NULL
#define SGX_CDIMAGECACHE_INFO_0_BG NULL
#define SGX_CDBIOS_LABEL_BG NULL
#define SGX_CDBIOS_INFO_0_BG NULL
#define OPTION_VAL_GAMES_EXPRESS_BG NULL
#define OPTION_VAL_SYSTEM_CARD_1_BG NULL
#define OPTION_VAL_SYSTEM_CARD_2_BG NULL
#define OPTION_VAL_SYSTEM_CARD_3_BG NULL
#define SGX_DETECT_GEXPRESS_LABEL_BG NULL
#define SGX_DETECT_GEXPRESS_INFO_0_BG NULL
#define SGX_CDSPEED_LABEL_BG NULL
#define SGX_CDSPEED_LABEL_CAT_BG NULL
#define SGX_CDSPEED_INFO_0_BG NULL
#define SGX_ADPCMVOLUME_LABEL_BG NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_BG NULL
#define SGX_ADPCMVOLUME_INFO_0_BG NULL
#define SGX_ADPCMVOLUME_INFO_1_BG NULL
#define SGX_CDDAVOLUME_LABEL_BG NULL
#define SGX_CDDAVOLUME_LABEL_CAT_BG NULL
#define SGX_CDPSGVOLUME_LABEL_BG NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_BG NULL
#define SGX_FORCESGX_LABEL_BG NULL
#define SGX_FORCESGX_INFO_0_BG NULL
#define SGX_NOSPRITELIMIT_LABEL_BG NULL
#define SGX_NOSPRITELIMIT_INFO_0_BG NULL
#define SGX_OCMULTIPLIER_LABEL_BG NULL
#define SGX_OCMULTIPLIER_INFO_0_BG NULL

struct retro_core_option_v2_category option_cats_bg[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_BG,
      CATEGORY_VIDEO_INFO_0_BG
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_BG,
      CATEGORY_INPUT_INFO_0_BG
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_BG,
      CATEGORY_HACKS_INFO_0_BG
   },
   {
      "cd",
      CATEGORY_CD_LABEL_BG,
      CATEGORY_CD_INFO_0_BG
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_bg[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_BG,
      NULL,
      SGX_PALETTE_INFO_0_BG,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_BG },
         { "Composite", OPTION_VAL_COMPOSITE_BG },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_BG,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_BG,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_BG },
         { "6:5", OPTION_VAL_6_5_BG },
         { "4:3", OPTION_VAL_4_3_BG },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_BG,
      NULL,
      SGX_HOVERSCAN_INFO_0_BG,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_BG },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_BG,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_BG,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_BG },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_BG,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_BG,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_BG },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_BG,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_BG },
         { "0.50", OPTION_VAL_0_50_BG },
         { "0.75", OPTION_VAL_0_75_BG },
         { "1.00", OPTION_VAL_1_00_BG },
         { "1.25", OPTION_VAL_1_25_BG },
         { "1.50", OPTION_VAL_1_50_BG },
         { "1.75", OPTION_VAL_1_75_BG },
         { "2.00", OPTION_VAL_2_00_BG },
         { "2.25", OPTION_VAL_2_25_BG },
         { "2.50", OPTION_VAL_2_50_BG },
         { "2.75", OPTION_VAL_2_75_BG },
         { "3.00", OPTION_VAL_3_00_BG },
         { "3.25", OPTION_VAL_3_25_BG },
         { "3.50", OPTION_VAL_3_50_BG },
         { "3.75", OPTION_VAL_3_75_BG },
         { "4.00", OPTION_VAL_4_00_BG },
         { "4.25", OPTION_VAL_4_25_BG },
         { "4.50", OPTION_VAL_4_50_BG },
         { "4.75", OPTION_VAL_4_75_BG },
         { "5.00", OPTION_VAL_5_00_BG },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_BG,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_BG,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_BG,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_BG,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_BG,
      NULL,
      SGX_MULTITAP_INFO_0_BG,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_BG,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BG,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BG },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BG },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_BG,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BG,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BG },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BG },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_BG,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BG,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BG },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BG },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_BG,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BG,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BG },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BG },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_BG,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BG,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BG },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BG },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_BG,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_BG,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_BG },
         { "dedicated", OPTION_VAL_DEDICATED_BG },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_BG,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_BG,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_BG,
      NULL,
      SGX_TURBO_DELAY_INFO_0_BG,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_BG,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_BG,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_BG,
      NULL,
      SGX_CDBIOS_INFO_0_BG,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_BG },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_BG },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_BG },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_BG },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_BG,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_BG,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_BG,
      SGX_CDSPEED_LABEL_CAT_BG,
      SGX_CDSPEED_INFO_0_BG,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_BG,
      SGX_ADPCMVOLUME_LABEL_CAT_BG,
      SGX_ADPCMVOLUME_INFO_0_BG,
      SGX_ADPCMVOLUME_INFO_1_BG,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_BG,
      SGX_CDDAVOLUME_LABEL_CAT_BG,
      SGX_ADPCMVOLUME_INFO_0_BG,
      SGX_ADPCMVOLUME_INFO_1_BG,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_BG,
      SGX_CDPSGVOLUME_LABEL_CAT_BG,
      SGX_ADPCMVOLUME_INFO_0_BG,
      SGX_ADPCMVOLUME_INFO_1_BG,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_BG,
      NULL,
      SGX_FORCESGX_INFO_0_BG,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_BG,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_BG,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_BG,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_BG,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_bg = {
   option_cats_bg,
   option_defs_bg
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA "Dispositius de joc"
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_HACKS_LABEL_CA NULL
#define CATEGORY_HACKS_INFO_0_CA NULL
#define CATEGORY_CD_LABEL_CA NULL
#define CATEGORY_CD_INFO_0_CA NULL
#define SGX_PALETTE_LABEL_CA NULL
#define SGX_PALETTE_INFO_0_CA NULL
#define OPTION_VAL_RGB_CA NULL
#define OPTION_VAL_COMPOSITE_CA NULL
#define SGX_ASPECT_RATIO_LABEL_CA "Relació d'aspecte"
#define SGX_ASPECT_RATIO_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA "Automàtic"
#define OPTION_VAL_6_5_CA NULL
#define OPTION_VAL_4_3_CA NULL
#define SGX_HOVERSCAN_LABEL_CA NULL
#define SGX_HOVERSCAN_INFO_0_CA NULL
#define OPTION_VAL_352_CA NULL
#define SGX_INITIAL_SCANLINE_LABEL_CA NULL
#define SGX_INITIAL_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_3_CA NULL
#define SGX_LAST_SCANLINE_LABEL_CA NULL
#define SGX_LAST_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_242_CA NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_CA NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_CA NULL
#define OPTION_VAL_0_25_CA "0,25"
#define OPTION_VAL_0_50_CA "0,50"
#define OPTION_VAL_0_75_CA "0,75"
#define OPTION_VAL_1_00_CA "1,00"
#define OPTION_VAL_1_25_CA "1,25"
#define OPTION_VAL_1_50_CA "1,50"
#define OPTION_VAL_1_75_CA "1,75"
#define OPTION_VAL_2_00_CA "2,00"
#define OPTION_VAL_2_25_CA "2,25"
#define OPTION_VAL_2_50_CA "2,50"
#define OPTION_VAL_2_75_CA "2,75"
#define OPTION_VAL_3_00_CA "3,00"
#define OPTION_VAL_3_25_CA "3,25"
#define OPTION_VAL_3_50_CA "3,50"
#define OPTION_VAL_3_75_CA "3,75"
#define OPTION_VAL_4_00_CA "4,00"
#define OPTION_VAL_4_25_CA "4,25"
#define OPTION_VAL_4_50_CA "4,50"
#define OPTION_VAL_4_75_CA "4,75"
#define OPTION_VAL_5_00_CA "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_CA NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CA NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CA NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CA NULL
#define SGX_MULTITAP_LABEL_CA NULL
#define SGX_MULTITAP_INFO_0_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA NULL
#define OPTION_VAL_2_BUTTONS_CA NULL
#define OPTION_VAL_6_BUTTONS_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA NULL
#define SGX_TURBO_TOGGLE_LABEL_CA NULL
#define SGX_TURBO_TOGGLE_INFO_0_CA NULL
#define OPTION_VAL_SWITCH_CA NULL
#define OPTION_VAL_DEDICATED_CA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CA NULL
#define SGX_TURBO_DELAY_LABEL_CA NULL
#define SGX_TURBO_DELAY_INFO_0_CA NULL
#define SGX_CDIMAGECACHE_LABEL_CA NULL
#define SGX_CDIMAGECACHE_INFO_0_CA NULL
#define SGX_CDBIOS_LABEL_CA NULL
#define SGX_CDBIOS_INFO_0_CA NULL
#define OPTION_VAL_GAMES_EXPRESS_CA NULL
#define OPTION_VAL_SYSTEM_CARD_1_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_CA NULL
#define SGX_DETECT_GEXPRESS_LABEL_CA NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CA NULL
#define SGX_CDSPEED_LABEL_CA NULL
#define SGX_CDSPEED_LABEL_CAT_CA NULL
#define SGX_CDSPEED_INFO_0_CA NULL
#define SGX_ADPCMVOLUME_LABEL_CA NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_CA NULL
#define SGX_ADPCMVOLUME_INFO_0_CA NULL
#define SGX_ADPCMVOLUME_INFO_1_CA NULL
#define SGX_CDDAVOLUME_LABEL_CA NULL
#define SGX_CDDAVOLUME_LABEL_CAT_CA NULL
#define SGX_CDPSGVOLUME_LABEL_CA NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_CA NULL
#define SGX_FORCESGX_LABEL_CA NULL
#define SGX_FORCESGX_INFO_0_CA NULL
#define SGX_NOSPRITELIMIT_LABEL_CA NULL
#define SGX_NOSPRITELIMIT_INFO_0_CA NULL
#define SGX_OCMULTIPLIER_LABEL_CA NULL
#define SGX_OCMULTIPLIER_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CA,
      CATEGORY_HACKS_INFO_0_CA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CA,
      CATEGORY_CD_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_CA,
      NULL,
      SGX_PALETTE_INFO_0_CA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CA },
         { "Composite", OPTION_VAL_COMPOSITE_CA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_CA,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "6:5", OPTION_VAL_6_5_CA },
         { "4:3", OPTION_VAL_4_3_CA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_CA,
      NULL,
      SGX_HOVERSCAN_INFO_0_CA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_CA,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_CA,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_CA,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CA },
         { "0.50", OPTION_VAL_0_50_CA },
         { "0.75", OPTION_VAL_0_75_CA },
         { "1.00", OPTION_VAL_1_00_CA },
         { "1.25", OPTION_VAL_1_25_CA },
         { "1.50", OPTION_VAL_1_50_CA },
         { "1.75", OPTION_VAL_1_75_CA },
         { "2.00", OPTION_VAL_2_00_CA },
         { "2.25", OPTION_VAL_2_25_CA },
         { "2.50", OPTION_VAL_2_50_CA },
         { "2.75", OPTION_VAL_2_75_CA },
         { "3.00", OPTION_VAL_3_00_CA },
         { "3.25", OPTION_VAL_3_25_CA },
         { "3.50", OPTION_VAL_3_50_CA },
         { "3.75", OPTION_VAL_3_75_CA },
         { "4.00", OPTION_VAL_4_00_CA },
         { "4.25", OPTION_VAL_4_25_CA },
         { "4.50", OPTION_VAL_4_50_CA },
         { "4.75", OPTION_VAL_4_75_CA },
         { "5.00", OPTION_VAL_5_00_CA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_CA,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_CA,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_CA,
      NULL,
      SGX_MULTITAP_INFO_0_CA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_CA,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_CA },
         { "dedicated", OPTION_VAL_DEDICATED_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_CA,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_CA,
      NULL,
      SGX_TURBO_DELAY_INFO_0_CA,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_CA,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_CA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_CA,
      NULL,
      SGX_CDBIOS_INFO_0_CA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_CA,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_CA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_CA,
      SGX_CDSPEED_LABEL_CAT_CA,
      SGX_CDSPEED_INFO_0_CA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_CA,
      SGX_ADPCMVOLUME_LABEL_CAT_CA,
      SGX_ADPCMVOLUME_INFO_0_CA,
      SGX_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_CA,
      SGX_CDDAVOLUME_LABEL_CAT_CA,
      SGX_ADPCMVOLUME_INFO_0_CA,
      SGX_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_CA,
      SGX_CDPSGVOLUME_LABEL_CAT_CA,
      SGX_ADPCMVOLUME_INFO_0_CA,
      SGX_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_CA,
      NULL,
      SGX_FORCESGX_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_CA,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_CA,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS "设置显示裁剪、跳帧和其他显示"
#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS "设置光枪、鼠标和Neg手柄"
#define CATEGORY_HACKS_LABEL_CHS "模拟修改"
#define CATEGORY_HACKS_INFO_0_CHS "配置处理器超时和模拟精确参数，影响低级性能和兼容性。"
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS "配置与 CD 游戏相关的设置。"
#define SGX_PALETTE_LABEL_CHS "色板"
#define SGX_PALETTE_INFO_0_CHS "使用复合设计模式尝试复现原始的控制台显示，在部分游戏中可以显示更多细节"
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS "合成"
#define SGX_ASPECT_RATIO_LABEL_CHS "纵横比"
#define SGX_ASPECT_RATIO_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_6_5_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define SGX_HOVERSCAN_LABEL_CHS "水平过扫描 (仅在352宽度模式下生效)"
#define SGX_HOVERSCAN_INFO_0_CHS "选择要显示的最大图像宽度，超出设定值的图像将从右侧被裁减 (针对宽度为352px的游戏)"
#define OPTION_VAL_352_CHS "352 (默认)"
#define SGX_INITIAL_SCANLINE_LABEL_CHS "初始扫描线"
#define SGX_INITIAL_SCANLINE_INFO_0_CHS "扫描线渲染的上界，超出设定值的部分将从图像顶部被裁剪"
#define OPTION_VAL_3_CHS "3 (默认)"
#define SGX_LAST_SCANLINE_LABEL_CHS "终末扫描线"
#define SGX_LAST_SCANLINE_INFO_0_CHS "扫描线渲染的下界，超出设定值的部分将从图像底部被裁剪。"
#define OPTION_VAL_242_CHS "242 (默认)"
#define SGX_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
#define SGX_MOUSE_SENSITIVITY_INFO_0_CHS "更高的值将使鼠标光标移动更快。"
#define OPTION_VAL_0_25_CHS NULL
#define OPTION_VAL_0_50_CHS NULL
#define OPTION_VAL_0_75_CHS NULL
#define OPTION_VAL_1_00_CHS NULL
#define OPTION_VAL_1_25_CHS NULL
#define OPTION_VAL_1_50_CHS NULL
#define OPTION_VAL_1_75_CHS NULL
#define OPTION_VAL_2_00_CHS NULL
#define OPTION_VAL_2_25_CHS NULL
#define OPTION_VAL_2_50_CHS NULL
#define OPTION_VAL_2_75_CHS NULL
#define OPTION_VAL_3_00_CHS NULL
#define OPTION_VAL_3_25_CHS NULL
#define OPTION_VAL_3_50_CHS NULL
#define OPTION_VAL_3_75_CHS NULL
#define OPTION_VAL_4_00_CHS NULL
#define OPTION_VAL_4_25_CHS NULL
#define OPTION_VAL_4_50_CHS NULL
#define OPTION_VAL_4_75_CHS NULL
#define OPTION_VAL_5_00_CHS NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_CHS "允许相反方向的输入"
#define SGX_UP_DOWN_ALLOWED_INFO_0_CHS "启用此功能将允许同时按下/快速交替/按住左右(或上下)两个方向。这可能会导致基于移动的故障。"
#define SGX_DISABLE_SOFTRESET_LABEL_CHS "禁用软重置 (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_CHS "当同时按下 RUN 和 SELECT 两个按键时，暂时禁用两个按键而不是触发软重置。"
#define SGX_MULTITAP_LABEL_CHS NULL
#define SGX_MULTITAP_INFO_0_CHS NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS "P1 默认手柄类型"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS "选择端口 1 手柄默认为 2 键或 6 键。 此选项仅在核心启动时应用，如果您想要在内容运行时切换，请使用“模式切换”按钮。 注意：6 键手柄在不兼容的游戏中可能会有一些意想不到的行为。"
#define OPTION_VAL_2_BUTTONS_CHS "2 键"
#define OPTION_VAL_6_BUTTONS_CHS "6 键"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS "P2 默认手柄类型"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS "选择端口 2 手柄默认为 2 或 6 按钮。此选项仅在核心启动时应用，如果您想在内容运行时切换，请使用 \"模式切换 \"按钮。注意：在不兼容的游戏中，6 按钮手柄可能会有奇怪的行为。"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS "P3 默认手柄类型"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS "选择端口 3 手柄默认为 2 键还是 6 键。此选项仅在核心启动时应用，如果您想要在内容运行时切换，请使用“模式切换”按钮。 注意：6 键手柄在不兼容的游戏中可能会有一些意想不到的行为。"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS "P4 默认手柄类型"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS "选择端口 4 手柄默认为 2 键还是 6 键。此选项仅在核心启动时应用，如果您想要在内容运行时切换，请使用“模式切换”按钮。 注意：6 键手柄在不兼容的游戏中可能会有一些意想不到的行为。"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS "P5 默认手柄类型"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS "选择端口 5 手柄默认为 2 键还是 6 键。此选项仅在核心启动时应用，如果您想要在内容运行时切换，请使用“模式切换”按钮。 注意：6 键手柄在不兼容的游戏中可能会有一些意想不到的行为。"
#define SGX_TURBO_TOGGLE_LABEL_CHS "Turbo 热键模式"
#define SGX_TURBO_TOGGLE_INFO_0_CHS NULL
#define OPTION_VAL_SWITCH_CHS "切换"
#define OPTION_VAL_DEDICATED_CHS NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHS "备用连发热键"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHS NULL
#define SGX_TURBO_DELAY_LABEL_CHS NULL
#define SGX_TURBO_DELAY_INFO_0_CHS NULL
#define SGX_CDIMAGECACHE_LABEL_CHS "启用CD光盘缓存（重启以生效）"
#define SGX_CDIMAGECACHE_INFO_0_CHS "在启动时将完整的镜像加载到内存中，以增加启动时间为代价，或许能减少游戏中的加载时间。"
#define SGX_CDBIOS_LABEL_CHS "设置CD的BIOS（重启以生效）"
#define SGX_CDBIOS_INFO_0_CHS "大部分的游戏可以在BIOS“System Card 3”上运行，但是一些未经授权的游戏需要“Games Express”。"
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define SGX_DETECT_GEXPRESS_LABEL_CHS NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CHS NULL
#define SGX_CDSPEED_LABEL_CHS "(CD) CD 加载速度"
#define SGX_CDSPEED_LABEL_CAT_CHS "CD 加载速度"
#define SGX_CDSPEED_INFO_0_CHS "较高的数值可以加快加载速度，但会使一些游戏出现问题。"
#define SGX_ADPCMVOLUME_LABEL_CHS "(CD) ADPCM 音量百分比"
#define SGX_ADPCMVOLUME_LABEL_CAT_CHS "ADPCM 音量百分比"
#define SGX_ADPCMVOLUME_INFO_0_CHS "仅 CD 游戏生效。将此音量控制设置得太高可能会导致采样削波。"
#define SGX_ADPCMVOLUME_INFO_1_CHS "将此音量控制设置得太高可能会导致采样削波。"
#define SGX_CDDAVOLUME_LABEL_CHS "(CD) CDDA 音量百分比"
#define SGX_CDDAVOLUME_LABEL_CAT_CHS "CDDA 音量百分比"
#define SGX_CDPSGVOLUME_LABEL_CHS "(CD) PSG 音量百分比"
#define SGX_CDPSGVOLUME_LABEL_CAT_CHS "PSG 音量百分比"
#define SGX_FORCESGX_LABEL_CHS NULL
#define SGX_FORCESGX_INFO_0_CHS "这有助于运行自制游戏或隔离无法在 SuperGrafx 模式下运行的游戏（如太空哈利）。保存状态与每种模式都不兼容。如无必要，最好关闭此选项。已知的 SuperGrafx 游戏（如大魔界村、霹雳风云）会自动切换到 SuperGrafx 模式，与此选项无关。"
#define SGX_NOSPRITELIMIT_LABEL_CHS "无 Sprite 限制"
#define SGX_NOSPRITELIMIT_INFO_0_CHS "移除每条扫描线16个符号的硬件限制。警告！可能会导致某些游戏的显示问题。"
#define SGX_OCMULTIPLIER_LABEL_CHS "CPU 超频倍率（重启以生效）"
#define SGX_OCMULTIPLIER_INFO_0_CHS "更高的值可以减少游戏中的降速。注意！可能导致故障和崩溃。"

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHS,
      CATEGORY_HACKS_INFO_0_CHS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHS,
      CATEGORY_CD_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_CHS,
      NULL,
      SGX_PALETTE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHS },
         { "Composite", OPTION_VAL_COMPOSITE_CHS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_CHS,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "6:5", OPTION_VAL_6_5_CHS },
         { "4:3", OPTION_VAL_4_3_CHS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_CHS,
      NULL,
      SGX_HOVERSCAN_INFO_0_CHS,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CHS },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_CHS,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_CHS,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHS },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_CHS,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CHS },
         { "0.50", OPTION_VAL_0_50_CHS },
         { "0.75", OPTION_VAL_0_75_CHS },
         { "1.00", OPTION_VAL_1_00_CHS },
         { "1.25", OPTION_VAL_1_25_CHS },
         { "1.50", OPTION_VAL_1_50_CHS },
         { "1.75", OPTION_VAL_1_75_CHS },
         { "2.00", OPTION_VAL_2_00_CHS },
         { "2.25", OPTION_VAL_2_25_CHS },
         { "2.50", OPTION_VAL_2_50_CHS },
         { "2.75", OPTION_VAL_2_75_CHS },
         { "3.00", OPTION_VAL_3_00_CHS },
         { "3.25", OPTION_VAL_3_25_CHS },
         { "3.50", OPTION_VAL_3_50_CHS },
         { "3.75", OPTION_VAL_3_75_CHS },
         { "4.00", OPTION_VAL_4_00_CHS },
         { "4.25", OPTION_VAL_4_25_CHS },
         { "4.50", OPTION_VAL_4_50_CHS },
         { "4.75", OPTION_VAL_4_75_CHS },
         { "5.00", OPTION_VAL_5_00_CHS },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_CHS,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_CHS,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_CHS,
      NULL,
      SGX_MULTITAP_INFO_0_CHS,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_CHS,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_CHS },
         { "dedicated", OPTION_VAL_DEDICATED_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHS,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_CHS,
      NULL,
      SGX_TURBO_DELAY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_CHS,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_CHS,
      NULL,
      SGX_CDBIOS_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHS },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_CHS,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_CHS,
      SGX_CDSPEED_LABEL_CAT_CHS,
      SGX_CDSPEED_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_CHS,
      SGX_ADPCMVOLUME_LABEL_CAT_CHS,
      SGX_ADPCMVOLUME_INFO_0_CHS,
      SGX_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_CHS,
      SGX_CDDAVOLUME_LABEL_CAT_CHS,
      SGX_ADPCMVOLUME_INFO_0_CHS,
      SGX_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_CHS,
      SGX_CDPSGVOLUME_LABEL_CAT_CHS,
      SGX_ADPCMVOLUME_INFO_0_CHS,
      SGX_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_CHS,
      NULL,
      SGX_FORCESGX_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_CHS,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT "顯示"
#define CATEGORY_VIDEO_INFO_0_CHT "變更畫面裁剪、跳幀和影像輸出相關的設定。"
#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT "變更輸入裝置相關的設定。"
#define CATEGORY_HACKS_LABEL_CHT "進階"
#define CATEGORY_HACKS_INFO_0_CHT "變更模擬器進階破解的設定。"
#define CATEGORY_CD_LABEL_CHT "光碟機"
#define CATEGORY_CD_INFO_0_CHT "變更光碟機相關的設定。"
#define SGX_PALETTE_LABEL_CHT "影像配色"
#define SGX_PALETTE_INFO_0_CHT "設定<合成>時嘗試重建原色影像輸出, 可在部分遊戲中顯示更多細節。"
#define OPTION_VAL_RGB_CHT "原色"
#define OPTION_VAL_COMPOSITE_CHT "合成"
#define SGX_ASPECT_RATIO_LABEL_CHT "寬高比"
#define SGX_ASPECT_RATIO_INFO_0_CHT "設定畫面的寬高比。\n設定為<自動>時, 建議將「水平過度掃描」設定為<342>模式, 減少調整大小和額外增加的黑線。\n可執行「飛鳥120%(Asuka120%)」測試, 此遊戲在256和352顯示模式之間切換。"
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_6_5_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define SGX_HOVERSCAN_LABEL_CHT "水平過度掃描 (僅限寬度352模式)"
#define SGX_HOVERSCAN_INFO_0_CHT "設定影像顯示的最大寬度, 過低的值將裁剪影像右側(寬度352像素的遊戲)。"
#define OPTION_VAL_352_CHT "352 (預設)"
#define SGX_INITIAL_SCANLINE_LABEL_CHT "初始掃描線"
#define SGX_INITIAL_SCANLINE_INFO_0_CHT "設定最初渲染的掃描線, 過高的值將裁剪影像頂部。"
#define OPTION_VAL_3_CHT "3 (預設)"
#define SGX_LAST_SCANLINE_LABEL_CHT "最後掃描線"
#define SGX_LAST_SCANLINE_INFO_0_CHT "設定最後渲染的掃描線, 過低的值將裁剪影像底部。"
#define OPTION_VAL_242_CHT "242 (預設)"
#define SGX_MOUSE_SENSITIVITY_LABEL_CHT "滑鼠靈敏度"
#define SGX_MOUSE_SENSITIVITY_INFO_0_CHT "數值越高游標移動速度越快。"
#define OPTION_VAL_0_25_CHT NULL
#define OPTION_VAL_0_50_CHT NULL
#define OPTION_VAL_0_75_CHT NULL
#define OPTION_VAL_1_00_CHT NULL
#define OPTION_VAL_1_25_CHT NULL
#define OPTION_VAL_1_50_CHT NULL
#define OPTION_VAL_1_75_CHT NULL
#define OPTION_VAL_2_00_CHT NULL
#define OPTION_VAL_2_25_CHT NULL
#define OPTION_VAL_2_50_CHT NULL
#define OPTION_VAL_2_75_CHT NULL
#define OPTION_VAL_3_00_CHT NULL
#define OPTION_VAL_3_25_CHT NULL
#define OPTION_VAL_3_50_CHT NULL
#define OPTION_VAL_3_75_CHT NULL
#define OPTION_VAL_4_00_CHT NULL
#define OPTION_VAL_4_25_CHT NULL
#define OPTION_VAL_4_50_CHT NULL
#define OPTION_VAL_4_75_CHT NULL
#define OPTION_VAL_5_00_CHT NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_CHT "允許反向操作"
#define SGX_UP_DOWN_ALLOWED_INFO_0_CHT "允許控制器反方向快速操作, 可同時按左右或上下的方向, 可能導致遊戲的移動架構出錯。"
#define SGX_DISABLE_SOFTRESET_LABEL_CHT "禁用軟體重開 (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_CHT "禁用按[RUN鍵+SELECT鍵]重新開始遊戲, 此選項僅禁用核心登錄的組合鍵。"
#define SGX_MULTITAP_LABEL_CHT "五手把轉接器"
#define SGX_MULTITAP_INFO_0_CHT "使用五手把轉接插座可對應五位玩家, 部分遊戲執行時需要關閉此選項, 例如「超兄貴(Cho Aniki)」。"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT NULL
#define OPTION_VAL_2_BUTTONS_CHT NULL
#define OPTION_VAL_6_BUTTONS_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT NULL
#define SGX_TURBO_TOGGLE_LABEL_CHT "連發模式"
#define SGX_TURBO_TOGGLE_INFO_0_CHT "設定[III/IV鍵]連發模式(開關/專用), 設定<開關>時提供給[I/II鍵]使用。"
#define OPTION_VAL_SWITCH_CHT "開關"
#define OPTION_VAL_DEDICATED_CHT "專用"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHT "備用連發按鍵"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHT "開啟時[L3/R3鍵]作為連發的開關, 僅限「連發模式」設定為<開關>模式, 並且[L3/R3鍵]未設定按鍵時生效, 用於切換為主機的6鍵控制器。"
#define SGX_TURBO_DELAY_LABEL_CHT "連發間隔"
#define SGX_TURBO_DELAY_INFO_0_CHT "設定連發的間隔時間(幀數)。"
#define SGX_CDIMAGECACHE_LABEL_CHT "映像檔快取 (需要重新啟動)"
#define SGX_CDIMAGECACHE_INFO_0_CHT "將光碟映像檔完整載入到記憶體, 增加啟動時間並減少讀取的時間。"
#define SGX_CDBIOS_LABEL_CHT "光碟系統卡 (需要重新啟動)"
#define SGX_CDBIOS_INFO_0_CHT "設定<系統卡3>時支援較多的授權遊戲, 未授權的遊戲需要<遊戲特快卡>來執行。"
#define OPTION_VAL_GAMES_EXPRESS_CHT "遊戲特快卡"
#define OPTION_VAL_SYSTEM_CARD_1_CHT "系統卡 1 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_2_CHT "系統卡 2 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_3_CHT "系統卡 3 (日本版)"
#define SGX_DETECT_GEXPRESS_LABEL_CHT "偵測未授權遊戲 (需要重新啟動)"
#define SGX_DETECT_GEXPRESS_INFO_0_CHT "載入未授權的遊戲時自動使用遊戲特快卡(BIOS)。"
#define SGX_CDSPEED_LABEL_CHT "(光碟機) 讀取速度"
#define SGX_CDSPEED_LABEL_CAT_CHT "讀取速度"
#define SGX_CDSPEED_INFO_0_CHT "高倍速可加快讀取的時間, 但可能導致遊戲出現問題。"
#define SGX_ADPCMVOLUME_LABEL_CHT "(光碟機) ADPCM 音量 %"
#define SGX_ADPCMVOLUME_LABEL_CAT_CHT "ADPCM 音量 %"
#define SGX_ADPCMVOLUME_INFO_0_CHT "僅限實體或虛擬光碟機載入的遊戲, 音量設定過高可能會導致取樣削波。"
#define SGX_ADPCMVOLUME_INFO_1_CHT "音量設定過高可能會導致取樣削波。"
#define SGX_CDDAVOLUME_LABEL_CHT "(光碟機) CDDA 音量 %"
#define SGX_CDDAVOLUME_LABEL_CAT_CHT "CDDA 音量 %"
#define SGX_CDPSGVOLUME_LABEL_CHT "(光碟機) PSG 音量 %"
#define SGX_CDPSGVOLUME_LABEL_CAT_CHT "PSG 音量 %"
#define SGX_FORCESGX_LABEL_CHT "強制SuperGrafx系統 (需要重新啟動)"
#define SGX_FORCESGX_INFO_0_CHT "用於自製遊戲使用SuperGrafx系統執行, 非需要時建議關閉此選項, 避免發生系統不相容的情況。"
#define SGX_NOSPRITELIMIT_LABEL_CHT "沒有物件限制"
#define SGX_NOSPRITELIMIT_INFO_0_CHT "移除每條掃描線16個物件的硬體限制。\n警告: 可能導致某些遊戲出現圖形故障。"
#define SGX_OCMULTIPLIER_LABEL_CHT "CPU超頻倍頻 (需要重新啟動)"
#define SGX_OCMULTIPLIER_INFO_0_CHT "較高的值可降低游戲中的延遲。\n警告: 可能導致故障崩潰。"

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHT,
      CATEGORY_HACKS_INFO_0_CHT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHT,
      CATEGORY_CD_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_CHT,
      NULL,
      SGX_PALETTE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHT },
         { "Composite", OPTION_VAL_COMPOSITE_CHT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_CHT,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "6:5", OPTION_VAL_6_5_CHT },
         { "4:3", OPTION_VAL_4_3_CHT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_CHT,
      NULL,
      SGX_HOVERSCAN_INFO_0_CHT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CHT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_CHT,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_CHT,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_CHT,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CHT },
         { "0.50", OPTION_VAL_0_50_CHT },
         { "0.75", OPTION_VAL_0_75_CHT },
         { "1.00", OPTION_VAL_1_00_CHT },
         { "1.25", OPTION_VAL_1_25_CHT },
         { "1.50", OPTION_VAL_1_50_CHT },
         { "1.75", OPTION_VAL_1_75_CHT },
         { "2.00", OPTION_VAL_2_00_CHT },
         { "2.25", OPTION_VAL_2_25_CHT },
         { "2.50", OPTION_VAL_2_50_CHT },
         { "2.75", OPTION_VAL_2_75_CHT },
         { "3.00", OPTION_VAL_3_00_CHT },
         { "3.25", OPTION_VAL_3_25_CHT },
         { "3.50", OPTION_VAL_3_50_CHT },
         { "3.75", OPTION_VAL_3_75_CHT },
         { "4.00", OPTION_VAL_4_00_CHT },
         { "4.25", OPTION_VAL_4_25_CHT },
         { "4.50", OPTION_VAL_4_50_CHT },
         { "4.75", OPTION_VAL_4_75_CHT },
         { "5.00", OPTION_VAL_5_00_CHT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_CHT,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_CHT,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_CHT,
      NULL,
      SGX_MULTITAP_INFO_0_CHT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_CHT,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_CHT },
         { "dedicated", OPTION_VAL_DEDICATED_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHT,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_CHT,
      NULL,
      SGX_TURBO_DELAY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_CHT,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_CHT,
      NULL,
      SGX_CDBIOS_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_CHT,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_CHT,
      SGX_CDSPEED_LABEL_CAT_CHT,
      SGX_CDSPEED_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_CHT,
      SGX_ADPCMVOLUME_LABEL_CAT_CHT,
      SGX_ADPCMVOLUME_INFO_0_CHT,
      SGX_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_CHT,
      SGX_CDDAVOLUME_LABEL_CAT_CHT,
      SGX_ADPCMVOLUME_INFO_0_CHT,
      SGX_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_CHT,
      SGX_CDPSGVOLUME_LABEL_CAT_CHT,
      SGX_ADPCMVOLUME_INFO_0_CHT,
      SGX_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_CHT,
      NULL,
      SGX_FORCESGX_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_CHT,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS "Konfigurace ořezu zobrazení, přeskočení snímku a dalších parametrů výstupu obrazu."
#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS "Konfigurace světelné pistole, myši a vstupu NegCon."
#define CATEGORY_HACKS_LABEL_CS "Emulace Hacků"
#define CATEGORY_HACKS_INFO_0_CS "Konfigurace parametrů přetaktování procesoru a přesnosti emulace ovlivňujících výkon a kompatibilitu na nízké úrovni."
#define CATEGORY_CD_LABEL_CS NULL
#define CATEGORY_CD_INFO_0_CS "Konfigurace nastavení týkajících se her na CD."
#define SGX_PALETTE_LABEL_CS "Paleta Barev"
#define SGX_PALETTE_INFO_0_CS "Kompozitně se snaží obnovit původní výstup z konzole a v některých hrách může zobrazit více detailů."
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS "Kompozitní"
#define SGX_ASPECT_RATIO_LABEL_CS "Poměr Stran"
#define SGX_ASPECT_RATIO_INFO_0_CS "Zvolte preferovaný poměr stran obsahu. Při používání her, které neustále přepínají mezi režimy 256 a 352 a používají automatický poměr stran, je nejlepší nastavit horizontální šířku na 342, aby se minimalizovala změna velikosti a černé čáry navíc, protože tato šířka je v poměru k režimu šířky 256 (nebo něco podobného, stačí vyzkoušet s Asuka 100%, což je jedna z her, které přepínají mezi těmito režimy)."
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_6_5_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define SGX_HOVERSCAN_LABEL_CS "Horizontální Overscan (Pouze Režim Šířky 352)"
#define SGX_HOVERSCAN_INFO_0_CS "Zvolte maximální šířku obrázku, který se má zobrazit. Nižší hodnoty oříznou pravou stranu obrázku (pro hry o šířce 352 px)."
#define OPTION_VAL_352_CS "352 (výchozí)"
#define SGX_INITIAL_SCANLINE_LABEL_CS "Počáteční skenovací linie"
#define SGX_INITIAL_SCANLINE_INFO_0_CS "První vykreslená skenovací linie. Vyšší hodnoty oříznou horní část obrázku."
#define OPTION_VAL_3_CS "3 (výchozí)"
#define SGX_LAST_SCANLINE_LABEL_CS "Poslední skenovací linie"
#define SGX_LAST_SCANLINE_INFO_0_CS "Poslední vykreslená skenovací linie. Nižší hodnoty oříznou spodní část obrázku."
#define OPTION_VAL_242_CS "242 (výchozí)"
#define SGX_MOUSE_SENSITIVITY_LABEL_CS "Citlivost Myši"
#define SGX_MOUSE_SENSITIVITY_INFO_0_CS "Při vyšších hodnotách se kurzor myši pohybuje rychleji."
#define OPTION_VAL_0_25_CS NULL
#define OPTION_VAL_0_50_CS NULL
#define OPTION_VAL_0_75_CS NULL
#define OPTION_VAL_1_00_CS NULL
#define OPTION_VAL_1_25_CS NULL
#define OPTION_VAL_1_50_CS NULL
#define OPTION_VAL_1_75_CS NULL
#define OPTION_VAL_2_00_CS NULL
#define OPTION_VAL_2_25_CS NULL
#define OPTION_VAL_2_50_CS NULL
#define OPTION_VAL_2_75_CS NULL
#define OPTION_VAL_3_00_CS NULL
#define OPTION_VAL_3_25_CS NULL
#define OPTION_VAL_3_50_CS NULL
#define OPTION_VAL_3_75_CS NULL
#define OPTION_VAL_4_00_CS NULL
#define OPTION_VAL_4_25_CS NULL
#define OPTION_VAL_4_50_CS NULL
#define OPTION_VAL_4_75_CS NULL
#define OPTION_VAL_5_00_CS "2.50"
#define SGX_UP_DOWN_ALLOWED_LABEL_CS NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CS "Povolení této funkce umožní stisknout / rychle střídat / držet současně levý i pravý směr (nebo nahoru a dolů). To může způsobit závady založené na pohybu."
#define SGX_DISABLE_SOFTRESET_LABEL_CS "Zakázat Měkký Reset (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_CS "Při současném stisknutí tlačítek RUN a SELECT se místo resetování dočasně vypnou obě tlačítka."
#define SGX_MULTITAP_LABEL_CS "Multitap 5-portový Ovladač"
#define SGX_MULTITAP_INFO_0_CS "Umožňuje emulaci až 5 hráčů ve více lidech. Vypnutí této funkce je nutné pouze v některých případech (např. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS "P1 Výchozí typ joypadu"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS "Zvolte, zda má mít joypad port 1 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define OPTION_VAL_2_BUTTONS_CS "2 Tlačítka"
#define OPTION_VAL_6_BUTTONS_CS "6 Tlačítek"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS "P2 Výchozí typ joypadu"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS "Vyberte, zda má mít joypad port 2 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS "P3 Výchozí typ joypadu"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS "Zvolte, zda má mít joypad port 3 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS "P4 Výchozí typ joypadu"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS "Zvolte, zda má mít joypad port 4 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS "P5 Výchozí typ joypadu"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS "Zvolte, zda má mít joypad port 5 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define SGX_TURBO_TOGGLE_LABEL_CS "Režim Turbo Hotkey"
#define SGX_TURBO_TOGGLE_INFO_0_CS "Povolení turbo tlačítek. Klávesové zkratky (tlačítka III a IV) se mohou chovat jako přepínače nebo jako vyhrazená turbo tlačítka (pro použití je třeba je podržet)."
#define OPTION_VAL_SWITCH_CS "Přepínač"
#define OPTION_VAL_DEDICATED_CS "Věnováno"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CS "Alternativní Hotkey Turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CS "Přiřazení tlačítek L3/R3 zařízení RetroPad jako turbo klávesových zkratek namísto tlačítek III a IV. Funguje pouze v režimu 'Přepínač' a pouze pokud není tlačítkům L3/R3 nic přiřazeno. Pomocí této funkce se můžete vyhnout přemapování tlačítek III a IV při přepnutí do režimu šestitlačítkového ovladače."
#define SGX_TURBO_DELAY_LABEL_CS "Zpoždění Turba"
#define SGX_TURBO_DELAY_INFO_0_CS "Nastavení doby mezi nástupem turba (ve snímcích)."
#define SGX_CDIMAGECACHE_LABEL_CS "Vyrovnávací paměť obrazu CD (nutný restart)"
#define SGX_CDIMAGECACHE_INFO_0_CS "Načíst kompletní obraz do paměti při spuštění. Může potenciálně zkrátit dobu načítání za cenu prodloužení doby spouštění."
#define SGX_CDBIOS_LABEL_CS "CD BIOS (nutný restart)"
#define SGX_CDBIOS_INFO_0_CS "Většinu her lze spustit na 'Systémová Karta 3'. Pro některé nelicencované hry je zapotřebí 'Games Express'."
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS "Systémová Karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_CS "Systémová Karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_CS "Systémová Karta 3"
#define SGX_DETECT_GEXPRESS_LABEL_CS "Detekovat Express CD Hry (Vyžadován Restart)"
#define SGX_DETECT_GEXPRESS_INFO_0_CS "Automatické načítání systému Hry Express BIOS bez ohledu na nastavení systému CD BIOS při načítání her na CD Hry Express."
#define SGX_CDSPEED_LABEL_CS "(CD) Rychlost CD"
#define SGX_CDSPEED_LABEL_CAT_CS "Rychlost CD"
#define SGX_CDSPEED_INFO_0_CS "Vyšší hodnoty umožňují rychlejší načítání, ale u několika her mohou způsobit problémy."
#define SGX_ADPCMVOLUME_LABEL_CS "(CD) ADPCM Hlasitost %"
#define SGX_ADPCMVOLUME_LABEL_CAT_CS "ADPCM Hlasitost %"
#define SGX_ADPCMVOLUME_INFO_0_CS "Pouze hra na CD. Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define SGX_ADPCMVOLUME_INFO_1_CS "Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define SGX_CDDAVOLUME_LABEL_CS "(CD) CDDA Hlasitost %"
#define SGX_CDDAVOLUME_LABEL_CAT_CS "CDDA Hlasitost %"
#define SGX_CDPSGVOLUME_LABEL_CS "(CD) PSG Hlasitost %"
#define SGX_CDPSGVOLUME_LABEL_CAT_CS "CD PSG Hlasitost %"
#define SGX_FORCESGX_LABEL_CS "Vynucení Emulace SuperGrafx (Nutný Restart)"
#define SGX_FORCESGX_INFO_0_CS "To je užitečné pro spouštění homebrew her nebo pro izolaci her, které nelze spustit v režimu SuperGrafx (například Space Harrier). Stavy uložení nejsou kompatibilní s jednotlivými režimy. Pokud to není nutné, je lepší tuto volbu nechat vypnutou. Známé hry pro SuperGrafx (například Dai-Makaimura, Aldyns) se automaticky přepnou do režimu SuperGrafx bez ohledu na tuto volbu."
#define SGX_NOSPRITELIMIT_LABEL_CS "Žádný Limit Spritu"
#define SGX_NOSPRITELIMIT_INFO_0_CS "Odstranění hardwarového limitu 16 bodů na řádek. UPOZORNĚNÍ: V některých hrách může způsobovat grafické závady."
#define SGX_OCMULTIPLIER_LABEL_CS "Násobitel Přetaktování CPU (Nutný Restart)"
#define SGX_OCMULTIPLIER_INFO_0_CS "Vyšší hodnoty mohou snížit zpomalení ve hrách. VAROVÁNÍ: Může způsobit závady a pády."

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CS,
      CATEGORY_HACKS_INFO_0_CS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CS,
      CATEGORY_CD_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_CS,
      NULL,
      SGX_PALETTE_INFO_0_CS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CS },
         { "Composite", OPTION_VAL_COMPOSITE_CS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_CS,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "6:5", OPTION_VAL_6_5_CS },
         { "4:3", OPTION_VAL_4_3_CS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_CS,
      NULL,
      SGX_HOVERSCAN_INFO_0_CS,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CS },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_CS,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_CS,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CS },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_CS,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CS },
         { "0.50", OPTION_VAL_0_50_CS },
         { "0.75", OPTION_VAL_0_75_CS },
         { "1.00", OPTION_VAL_1_00_CS },
         { "1.25", OPTION_VAL_1_25_CS },
         { "1.50", OPTION_VAL_1_50_CS },
         { "1.75", OPTION_VAL_1_75_CS },
         { "2.00", OPTION_VAL_2_00_CS },
         { "2.25", OPTION_VAL_2_25_CS },
         { "2.50", OPTION_VAL_2_50_CS },
         { "2.75", OPTION_VAL_2_75_CS },
         { "3.00", OPTION_VAL_3_00_CS },
         { "3.25", OPTION_VAL_3_25_CS },
         { "3.50", OPTION_VAL_3_50_CS },
         { "3.75", OPTION_VAL_3_75_CS },
         { "4.00", OPTION_VAL_4_00_CS },
         { "4.25", OPTION_VAL_4_25_CS },
         { "4.50", OPTION_VAL_4_50_CS },
         { "4.75", OPTION_VAL_4_75_CS },
         { "5.00", OPTION_VAL_5_00_CS },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_CS,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_CS,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_CS,
      NULL,
      SGX_MULTITAP_INFO_0_CS,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_CS,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_CS },
         { "dedicated", OPTION_VAL_DEDICATED_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_CS,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_CS,
      NULL,
      SGX_TURBO_DELAY_INFO_0_CS,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_CS,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_CS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_CS,
      NULL,
      SGX_CDBIOS_INFO_0_CS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CS },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_CS,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_CS,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_CS,
      SGX_CDSPEED_LABEL_CAT_CS,
      SGX_CDSPEED_INFO_0_CS,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_CS,
      SGX_ADPCMVOLUME_LABEL_CAT_CS,
      SGX_ADPCMVOLUME_INFO_0_CS,
      SGX_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_CS,
      SGX_CDDAVOLUME_LABEL_CAT_CS,
      SGX_ADPCMVOLUME_INFO_0_CS,
      SGX_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_CS,
      SGX_CDPSGVOLUME_LABEL_CAT_CS,
      SGX_ADPCMVOLUME_INFO_0_CS,
      SGX_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_CS,
      NULL,
      SGX_FORCESGX_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_CS,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_CS,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY "Mewnbwn"
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_HACKS_LABEL_CY NULL
#define CATEGORY_HACKS_INFO_0_CY NULL
#define CATEGORY_CD_LABEL_CY NULL
#define CATEGORY_CD_INFO_0_CY NULL
#define SGX_PALETTE_LABEL_CY NULL
#define SGX_PALETTE_INFO_0_CY NULL
#define OPTION_VAL_RGB_CY NULL
#define OPTION_VAL_COMPOSITE_CY NULL
#define SGX_ASPECT_RATIO_LABEL_CY NULL
#define SGX_ASPECT_RATIO_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_6_5_CY NULL
#define OPTION_VAL_4_3_CY NULL
#define SGX_HOVERSCAN_LABEL_CY NULL
#define SGX_HOVERSCAN_INFO_0_CY NULL
#define OPTION_VAL_352_CY NULL
#define SGX_INITIAL_SCANLINE_LABEL_CY NULL
#define SGX_INITIAL_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_3_CY NULL
#define SGX_LAST_SCANLINE_LABEL_CY NULL
#define SGX_LAST_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_242_CY NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_CY NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_CY NULL
#define OPTION_VAL_0_25_CY NULL
#define OPTION_VAL_0_50_CY NULL
#define OPTION_VAL_0_75_CY NULL
#define OPTION_VAL_1_00_CY NULL
#define OPTION_VAL_1_25_CY NULL
#define OPTION_VAL_1_50_CY NULL
#define OPTION_VAL_1_75_CY NULL
#define OPTION_VAL_2_00_CY NULL
#define OPTION_VAL_2_25_CY NULL
#define OPTION_VAL_2_50_CY NULL
#define OPTION_VAL_2_75_CY NULL
#define OPTION_VAL_3_00_CY NULL
#define OPTION_VAL_3_25_CY NULL
#define OPTION_VAL_3_50_CY NULL
#define OPTION_VAL_3_75_CY NULL
#define OPTION_VAL_4_00_CY NULL
#define OPTION_VAL_4_25_CY NULL
#define OPTION_VAL_4_50_CY NULL
#define OPTION_VAL_4_75_CY NULL
#define OPTION_VAL_5_00_CY NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_CY NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CY NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CY NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CY NULL
#define SGX_MULTITAP_LABEL_CY NULL
#define SGX_MULTITAP_INFO_0_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY NULL
#define OPTION_VAL_2_BUTTONS_CY NULL
#define OPTION_VAL_6_BUTTONS_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY NULL
#define SGX_TURBO_TOGGLE_LABEL_CY NULL
#define SGX_TURBO_TOGGLE_INFO_0_CY NULL
#define OPTION_VAL_SWITCH_CY NULL
#define OPTION_VAL_DEDICATED_CY NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CY NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CY NULL
#define SGX_TURBO_DELAY_LABEL_CY NULL
#define SGX_TURBO_DELAY_INFO_0_CY NULL
#define SGX_CDIMAGECACHE_LABEL_CY NULL
#define SGX_CDIMAGECACHE_INFO_0_CY NULL
#define SGX_CDBIOS_LABEL_CY NULL
#define SGX_CDBIOS_INFO_0_CY NULL
#define OPTION_VAL_GAMES_EXPRESS_CY NULL
#define OPTION_VAL_SYSTEM_CARD_1_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_CY NULL
#define SGX_DETECT_GEXPRESS_LABEL_CY NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CY NULL
#define SGX_CDSPEED_LABEL_CY NULL
#define SGX_CDSPEED_LABEL_CAT_CY NULL
#define SGX_CDSPEED_INFO_0_CY NULL
#define SGX_ADPCMVOLUME_LABEL_CY NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_CY NULL
#define SGX_ADPCMVOLUME_INFO_0_CY NULL
#define SGX_ADPCMVOLUME_INFO_1_CY NULL
#define SGX_CDDAVOLUME_LABEL_CY NULL
#define SGX_CDDAVOLUME_LABEL_CAT_CY NULL
#define SGX_CDPSGVOLUME_LABEL_CY NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_CY NULL
#define SGX_FORCESGX_LABEL_CY NULL
#define SGX_FORCESGX_INFO_0_CY NULL
#define SGX_NOSPRITELIMIT_LABEL_CY NULL
#define SGX_NOSPRITELIMIT_INFO_0_CY NULL
#define SGX_OCMULTIPLIER_LABEL_CY NULL
#define SGX_OCMULTIPLIER_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CY,
      CATEGORY_HACKS_INFO_0_CY
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CY,
      CATEGORY_CD_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_CY,
      NULL,
      SGX_PALETTE_INFO_0_CY,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CY },
         { "Composite", OPTION_VAL_COMPOSITE_CY },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_CY,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "6:5", OPTION_VAL_6_5_CY },
         { "4:3", OPTION_VAL_4_3_CY },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_CY,
      NULL,
      SGX_HOVERSCAN_INFO_0_CY,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CY },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_CY,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_CY,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CY },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_CY,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CY },
         { "0.50", OPTION_VAL_0_50_CY },
         { "0.75", OPTION_VAL_0_75_CY },
         { "1.00", OPTION_VAL_1_00_CY },
         { "1.25", OPTION_VAL_1_25_CY },
         { "1.50", OPTION_VAL_1_50_CY },
         { "1.75", OPTION_VAL_1_75_CY },
         { "2.00", OPTION_VAL_2_00_CY },
         { "2.25", OPTION_VAL_2_25_CY },
         { "2.50", OPTION_VAL_2_50_CY },
         { "2.75", OPTION_VAL_2_75_CY },
         { "3.00", OPTION_VAL_3_00_CY },
         { "3.25", OPTION_VAL_3_25_CY },
         { "3.50", OPTION_VAL_3_50_CY },
         { "3.75", OPTION_VAL_3_75_CY },
         { "4.00", OPTION_VAL_4_00_CY },
         { "4.25", OPTION_VAL_4_25_CY },
         { "4.50", OPTION_VAL_4_50_CY },
         { "4.75", OPTION_VAL_4_75_CY },
         { "5.00", OPTION_VAL_5_00_CY },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_CY,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_CY,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_CY,
      NULL,
      SGX_MULTITAP_INFO_0_CY,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_CY,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_CY },
         { "dedicated", OPTION_VAL_DEDICATED_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_CY,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_CY,
      NULL,
      SGX_TURBO_DELAY_INFO_0_CY,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_CY,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_CY,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_CY,
      NULL,
      SGX_CDBIOS_INFO_0_CY,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CY },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CY },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CY },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CY },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_CY,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_CY,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_CY,
      SGX_CDSPEED_LABEL_CAT_CY,
      SGX_CDSPEED_INFO_0_CY,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_CY,
      SGX_ADPCMVOLUME_LABEL_CAT_CY,
      SGX_ADPCMVOLUME_INFO_0_CY,
      SGX_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_CY,
      SGX_CDDAVOLUME_LABEL_CAT_CY,
      SGX_ADPCMVOLUME_INFO_0_CY,
      SGX_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_CY,
      SGX_CDPSGVOLUME_LABEL_CAT_CY,
      SGX_ADPCMVOLUME_INFO_0_CY,
      SGX_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_CY,
      NULL,
      SGX_FORCESGX_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_CY,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_CY,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_HACKS_LABEL_DA NULL
#define CATEGORY_HACKS_INFO_0_DA NULL
#define CATEGORY_CD_LABEL_DA NULL
#define CATEGORY_CD_INFO_0_DA NULL
#define SGX_PALETTE_LABEL_DA NULL
#define SGX_PALETTE_INFO_0_DA NULL
#define OPTION_VAL_RGB_DA NULL
#define OPTION_VAL_COMPOSITE_DA NULL
#define SGX_ASPECT_RATIO_LABEL_DA NULL
#define SGX_ASPECT_RATIO_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_6_5_DA NULL
#define OPTION_VAL_4_3_DA NULL
#define SGX_HOVERSCAN_LABEL_DA NULL
#define SGX_HOVERSCAN_INFO_0_DA NULL
#define OPTION_VAL_352_DA NULL
#define SGX_INITIAL_SCANLINE_LABEL_DA NULL
#define SGX_INITIAL_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_3_DA NULL
#define SGX_LAST_SCANLINE_LABEL_DA NULL
#define SGX_LAST_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_242_DA NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_DA NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_DA NULL
#define OPTION_VAL_0_25_DA NULL
#define OPTION_VAL_0_50_DA NULL
#define OPTION_VAL_0_75_DA NULL
#define OPTION_VAL_1_00_DA NULL
#define OPTION_VAL_1_25_DA NULL
#define OPTION_VAL_1_50_DA NULL
#define OPTION_VAL_1_75_DA NULL
#define OPTION_VAL_2_00_DA NULL
#define OPTION_VAL_2_25_DA NULL
#define OPTION_VAL_2_50_DA NULL
#define OPTION_VAL_2_75_DA NULL
#define OPTION_VAL_3_00_DA NULL
#define OPTION_VAL_3_25_DA NULL
#define OPTION_VAL_3_50_DA NULL
#define OPTION_VAL_3_75_DA NULL
#define OPTION_VAL_4_00_DA NULL
#define OPTION_VAL_4_25_DA NULL
#define OPTION_VAL_4_50_DA NULL
#define OPTION_VAL_4_75_DA NULL
#define OPTION_VAL_5_00_DA NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_DA NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_DA NULL
#define SGX_DISABLE_SOFTRESET_LABEL_DA NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_DA NULL
#define SGX_MULTITAP_LABEL_DA NULL
#define SGX_MULTITAP_INFO_0_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA NULL
#define OPTION_VAL_2_BUTTONS_DA NULL
#define OPTION_VAL_6_BUTTONS_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA NULL
#define SGX_TURBO_TOGGLE_LABEL_DA NULL
#define SGX_TURBO_TOGGLE_INFO_0_DA NULL
#define OPTION_VAL_SWITCH_DA NULL
#define OPTION_VAL_DEDICATED_DA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_DA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_DA NULL
#define SGX_TURBO_DELAY_LABEL_DA NULL
#define SGX_TURBO_DELAY_INFO_0_DA NULL
#define SGX_CDIMAGECACHE_LABEL_DA NULL
#define SGX_CDIMAGECACHE_INFO_0_DA NULL
#define SGX_CDBIOS_LABEL_DA NULL
#define SGX_CDBIOS_INFO_0_DA NULL
#define OPTION_VAL_GAMES_EXPRESS_DA NULL
#define OPTION_VAL_SYSTEM_CARD_1_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_DA NULL
#define SGX_DETECT_GEXPRESS_LABEL_DA NULL
#define SGX_DETECT_GEXPRESS_INFO_0_DA NULL
#define SGX_CDSPEED_LABEL_DA NULL
#define SGX_CDSPEED_LABEL_CAT_DA NULL
#define SGX_CDSPEED_INFO_0_DA NULL
#define SGX_ADPCMVOLUME_LABEL_DA NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_DA NULL
#define SGX_ADPCMVOLUME_INFO_0_DA NULL
#define SGX_ADPCMVOLUME_INFO_1_DA NULL
#define SGX_CDDAVOLUME_LABEL_DA NULL
#define SGX_CDDAVOLUME_LABEL_CAT_DA NULL
#define SGX_CDPSGVOLUME_LABEL_DA NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_DA NULL
#define SGX_FORCESGX_LABEL_DA NULL
#define SGX_FORCESGX_INFO_0_DA NULL
#define SGX_NOSPRITELIMIT_LABEL_DA NULL
#define SGX_NOSPRITELIMIT_INFO_0_DA NULL
#define SGX_OCMULTIPLIER_LABEL_DA NULL
#define SGX_OCMULTIPLIER_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DA,
      CATEGORY_HACKS_INFO_0_DA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DA,
      CATEGORY_CD_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_DA,
      NULL,
      SGX_PALETTE_INFO_0_DA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DA },
         { "Composite", OPTION_VAL_COMPOSITE_DA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_DA,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "6:5", OPTION_VAL_6_5_DA },
         { "4:3", OPTION_VAL_4_3_DA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_DA,
      NULL,
      SGX_HOVERSCAN_INFO_0_DA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_DA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_DA,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_DA,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_DA,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_DA },
         { "0.50", OPTION_VAL_0_50_DA },
         { "0.75", OPTION_VAL_0_75_DA },
         { "1.00", OPTION_VAL_1_00_DA },
         { "1.25", OPTION_VAL_1_25_DA },
         { "1.50", OPTION_VAL_1_50_DA },
         { "1.75", OPTION_VAL_1_75_DA },
         { "2.00", OPTION_VAL_2_00_DA },
         { "2.25", OPTION_VAL_2_25_DA },
         { "2.50", OPTION_VAL_2_50_DA },
         { "2.75", OPTION_VAL_2_75_DA },
         { "3.00", OPTION_VAL_3_00_DA },
         { "3.25", OPTION_VAL_3_25_DA },
         { "3.50", OPTION_VAL_3_50_DA },
         { "3.75", OPTION_VAL_3_75_DA },
         { "4.00", OPTION_VAL_4_00_DA },
         { "4.25", OPTION_VAL_4_25_DA },
         { "4.50", OPTION_VAL_4_50_DA },
         { "4.75", OPTION_VAL_4_75_DA },
         { "5.00", OPTION_VAL_5_00_DA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_DA,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_DA,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_DA,
      NULL,
      SGX_MULTITAP_INFO_0_DA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_DA,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_DA },
         { "dedicated", OPTION_VAL_DEDICATED_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_DA,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_DA,
      NULL,
      SGX_TURBO_DELAY_INFO_0_DA,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_DA,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_DA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_DA,
      NULL,
      SGX_CDBIOS_INFO_0_DA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_DA,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_DA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_DA,
      SGX_CDSPEED_LABEL_CAT_DA,
      SGX_CDSPEED_INFO_0_DA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_DA,
      SGX_ADPCMVOLUME_LABEL_CAT_DA,
      SGX_ADPCMVOLUME_INFO_0_DA,
      SGX_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_DA,
      SGX_CDDAVOLUME_LABEL_CAT_DA,
      SGX_ADPCMVOLUME_INFO_0_DA,
      SGX_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_DA,
      SGX_CDPSGVOLUME_LABEL_CAT_DA,
      SGX_ADPCMVOLUME_INFO_0_DA,
      SGX_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_DA,
      NULL,
      SGX_FORCESGX_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_DA,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_DA,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "Bildausschnitt, Frameskipping und andere Parameter für die Bildausgabe anpassen."
#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE "Lightgun-, Maus- und NegCon-Eingabe anpassen."
#define CATEGORY_HACKS_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACKS_INFO_0_DE "Parameter für Prozessorübertaktung und Emulationsgenauigkeit, die sich auf die Low-Level-Leistung und Kompatibilität auswirken, anpassen."
#define CATEGORY_CD_LABEL_DE NULL
#define CATEGORY_CD_INFO_0_DE "Einstellungen für CD-Spiele konfigurieren."
#define SGX_PALETTE_LABEL_DE "Farbpalette"
#define SGX_PALETTE_INFO_0_DE "\"Composite\" versucht, die Originalausgabe der Konsole nachzubilden und kann in einigen Spielen mehr Details darstellen."
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define SGX_ASPECT_RATIO_LABEL_DE "Bildseitenverhältnis"
#define SGX_ASPECT_RATIO_INFO_0_DE "Wählt das bevorzugte Seitenverhältnis für Inhalte aus. Bei Spielen, die ständig zwischen 256 und 352 Modus wechseln und automatisches Seitenverhältnis verwenden, ist es am besten, die horizontale Breite auf 342 zu setzen, um die Größe und die zusätzlichen schwarzen Linien zu minimieren, da diese Breite im Verhältnis zum 256 Breitenmodus steht (oder etwas ähnliches, testen mit Asuka 100%, das ist eines der Spiele, die zwischen diesen Modi wechselt)."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_6_5_DE NULL
#define OPTION_VAL_4_3_DE NULL
#define SGX_HOVERSCAN_LABEL_DE "Horizontaler Overscan (nur 352 Breitenmodus)"
#define SGX_HOVERSCAN_INFO_0_DE "Die maximale Bildbreite, die angezeigt werden soll. Bei niedrigeren Werten wird die rechte Seite des Bildes abgeschnitten (bei Spielen mit 352 px Bildbreite)."
#define OPTION_VAL_352_DE "352 (Standard)"
#define SGX_INITIAL_SCANLINE_LABEL_DE "Erste Scanline"
#define SGX_INITIAL_SCANLINE_INFO_0_DE "Erste gerenderte Scanline. Höhere Werte schneiden den oberen Teil des Bildes ab."
#define OPTION_VAL_3_DE "3 (Standard)"
#define SGX_LAST_SCANLINE_LABEL_DE "Letzte Scanline"
#define SGX_LAST_SCANLINE_INFO_0_DE "Letzte gerenderte Scanline. Niedrigere Werte schneiden den unteren Teil des Bildes ab."
#define OPTION_VAL_242_DE "242 (Standard)"
#define SGX_MOUSE_SENSITIVITY_LABEL_DE "Mausempfindlichkeit"
#define SGX_MOUSE_SENSITIVITY_INFO_0_DE "Höhere Werte erhöhen die Geschwindigkeit des Mauszeigers."
#define OPTION_VAL_0_25_DE "0,25"
#define OPTION_VAL_0_50_DE "0,50"
#define OPTION_VAL_0_75_DE "0,75"
#define OPTION_VAL_1_00_DE "1,00"
#define OPTION_VAL_1_25_DE "1,25"
#define OPTION_VAL_1_50_DE "1,50"
#define OPTION_VAL_1_75_DE "1,75"
#define OPTION_VAL_2_00_DE "2,00"
#define OPTION_VAL_2_25_DE "2,25"
#define OPTION_VAL_2_50_DE "2,50"
#define OPTION_VAL_2_75_DE "2,75"
#define OPTION_VAL_3_00_DE "3,00"
#define OPTION_VAL_3_25_DE "3,25"
#define OPTION_VAL_3_50_DE "3,50"
#define OPTION_VAL_3_75_DE "3,75"
#define OPTION_VAL_4_00_DE "4,00"
#define OPTION_VAL_4_25_DE "4,25"
#define OPTION_VAL_4_50_DE "4,50"
#define OPTION_VAL_4_75_DE "4,75"
#define OPTION_VAL_5_00_DE "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_DE "Entgegengesetzte Richtungen zulassen"
#define SGX_UP_DOWN_ALLOWED_INFO_0_DE "Wenn diese Funktion aktiviert ist, kann gleichzeitig die linke und die rechte (oder die obere und die untere) Richtungstaste bzw. schnell abwechselnd gedrückt oder gehalten werden. Dies kann zu bewegungsbasierten Fehlern führen."
#define SGX_DISABLE_SOFTRESET_LABEL_DE "Neustart-Kombination (RUN+SELECT) deaktivieren"
#define SGX_DISABLE_SOFTRESET_INFO_0_DE "Wenn RUN und SELECT gleichzeitig gedrückt werden, werden beide Tasten vorübergehend deaktiviert, anstatt den Inhalt neu zu starten."
#define SGX_MULTITAP_LABEL_DE "Multitap -5-Port-Controller"
#define SGX_MULTITAP_INFO_0_DE "Multitap-Emulation für bis zu 5 Spieler aktivieren. Die Deaktivierung ist nur in einigen Fällen erforderlich (z. B. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE "P1 Standard-Joypad-Typ"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE "Hier wählen, ob Joypad von Port 1 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define OPTION_VAL_2_BUTTONS_DE "2 Tasten"
#define OPTION_VAL_6_BUTTONS_DE "6 Tasten"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE "P2 Standard-Joypad-Typ"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE "Hier wählen, ob Joypad von Port 2 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE "P3 Standard-Joypad-Typ"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE "Hier wählen, ob Joypad von Port 3 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE "P4 Standard-Joypad-Typ"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE "Hier wählen, ob Joypad von Port 4 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE "P5 Standard-Joypad-Typ"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE "Hier wählen, ob Joypad von Port 5 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define SGX_TURBO_TOGGLE_LABEL_DE "Turbo-Hotkey-Modus"
#define SGX_TURBO_TOGGLE_INFO_0_DE "Turbotasten aktivieren. Hotkeys (Tasten III und IV) können entweder als Umschalter oder als dedizierte Turbotasten (zum Verwenden gedrückt halten) fungieren."
#define OPTION_VAL_SWITCH_DE "Umschalten"
#define OPTION_VAL_DEDICATED_DE "Dediziert"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_DE "Alternative Turbo-Hotkeys"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_DE "RetroPads L3/R3-Tasten als Turbo-Hotkeys anstelle der Tasten III und IV zuweisen. Funktioniert nur im „Toggle“-Modus und nur, solange den L3/R3-Tasten nichts zugewiesen ist. Damit die Belegung der Tasten III und IV vermieden werden, wenn in den 6-Tasten-Controller-Modus gewechselt wird."
#define SGX_TURBO_DELAY_LABEL_DE "Turbo-Verzögerung"
#define SGX_TURBO_DELAY_INFO_0_DE "Die Zeit zwischen den Turbo-Signalen (in Frames) einstellen."
#define SGX_CDIMAGECACHE_LABEL_DE "CD-Abbild-Cache (Neustart erforderlich)"
#define SGX_CDIMAGECACHE_INFO_0_DE "Das komplette Abbild beim Start in den Arbeitsspeicher laden. Kann die Ladezeiten auf Kosten einer längeren Startzeit verkürzen."
#define SGX_CDBIOS_LABEL_DE "CD-BIOS (Neustart erforderlich)"
#define SGX_CDBIOS_INFO_0_DE "Die meisten Spiele können auf \"System Card 3\" laufen. \"Games Express\" wird für einige nicht lizenzierte Spiele benötigt."
#define OPTION_VAL_GAMES_EXPRESS_DE NULL
#define OPTION_VAL_SYSTEM_CARD_1_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_DE NULL
#define SGX_DETECT_GEXPRESS_LABEL_DE "Games-Express-CD erkennen (Neustart erforderlich)"
#define SGX_DETECT_GEXPRESS_INFO_0_DE "Automatisches Laden des Games-Express-BIOS unabhängig von der CD-BIOS-Einstellung beim Laden von Games-Express-CD-Spielen."
#define SGX_CDSPEED_LABEL_DE "(CD) CD-Geschwindigkeit"
#define SGX_CDSPEED_LABEL_CAT_DE "CD-Geschwindigkeit"
#define SGX_CDSPEED_INFO_0_DE "Höhere Werte ermöglichen schnellere Ladezeiten, können aber Probleme mit einigen Spielen verursachen."
#define SGX_ADPCMVOLUME_LABEL_DE "(CD) ADPCM-Lautstärke %"
#define SGX_ADPCMVOLUME_LABEL_CAT_DE "ADPCM Lautstärke %"
#define SGX_ADPCMVOLUME_INFO_0_DE "Nur für CD-Spiele. Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define SGX_ADPCMVOLUME_INFO_1_DE "Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define SGX_CDDAVOLUME_LABEL_DE "(CD) CDDA-Lautstärke %"
#define SGX_CDDAVOLUME_LABEL_CAT_DE "CDDA-Lautstärke %"
#define SGX_CDPSGVOLUME_LABEL_DE "(CD) PSG-Lautstärke %"
#define SGX_CDPSGVOLUME_LABEL_CAT_DE "CD-PSG-Lautstärke %"
#define SGX_FORCESGX_LABEL_DE "SuperGrafx-Emulation erzwingen (Neustart erforderlich)"
#define SGX_FORCESGX_INFO_0_DE "Dies ist hilfreich, um Homebrew Spiele auszuführen oder um Spiele zu isolieren, die nicht im SuperGrafx Modus laufen (wie Space Harrier). Savestates sind nicht mit jedem Modus kompatibel. Es ist besser, diese Option auszuschalten, wenn sie nicht benötigt wird. Bekannte SuperGrafx-Spiele (wie Dai-Makaimura, Aldyns) wechseln automatisch zu SuperGrafx, unabhängig von dieser Option."
#define SGX_NOSPRITELIMIT_LABEL_DE "Kein Sprite-Limit"
#define SGX_NOSPRITELIMIT_INFO_0_DE "Die Hardware-Beschränkung von 16 Sprites pro Scanline entfernen. WARNUNG: Kann bei einigen Spielen zu Grafikfehlern führen."
#define SGX_OCMULTIPLIER_LABEL_DE "CPU-Übertaktungsmultiplikator (Neustart erforderlich)"
#define SGX_OCMULTIPLIER_INFO_0_DE "Höhere Werte können Slowdowns in Spielen reduzieren. WARNUNG: Kann Grafikfehler und Abstürze verursachen."

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DE,
      CATEGORY_HACKS_INFO_0_DE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DE,
      CATEGORY_CD_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_DE,
      NULL,
      SGX_PALETTE_INFO_0_DE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DE },
         { "Composite", OPTION_VAL_COMPOSITE_DE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_DE,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "6:5", OPTION_VAL_6_5_DE },
         { "4:3", OPTION_VAL_4_3_DE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_DE,
      NULL,
      SGX_HOVERSCAN_INFO_0_DE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_DE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_DE,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_DE,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_DE,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_DE },
         { "0.50", OPTION_VAL_0_50_DE },
         { "0.75", OPTION_VAL_0_75_DE },
         { "1.00", OPTION_VAL_1_00_DE },
         { "1.25", OPTION_VAL_1_25_DE },
         { "1.50", OPTION_VAL_1_50_DE },
         { "1.75", OPTION_VAL_1_75_DE },
         { "2.00", OPTION_VAL_2_00_DE },
         { "2.25", OPTION_VAL_2_25_DE },
         { "2.50", OPTION_VAL_2_50_DE },
         { "2.75", OPTION_VAL_2_75_DE },
         { "3.00", OPTION_VAL_3_00_DE },
         { "3.25", OPTION_VAL_3_25_DE },
         { "3.50", OPTION_VAL_3_50_DE },
         { "3.75", OPTION_VAL_3_75_DE },
         { "4.00", OPTION_VAL_4_00_DE },
         { "4.25", OPTION_VAL_4_25_DE },
         { "4.50", OPTION_VAL_4_50_DE },
         { "4.75", OPTION_VAL_4_75_DE },
         { "5.00", OPTION_VAL_5_00_DE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_DE,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_DE,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_DE,
      NULL,
      SGX_MULTITAP_INFO_0_DE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_DE,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_DE },
         { "dedicated", OPTION_VAL_DEDICATED_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_DE,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_DE,
      NULL,
      SGX_TURBO_DELAY_INFO_0_DE,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_DE,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_DE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_DE,
      NULL,
      SGX_CDBIOS_INFO_0_DE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_DE,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_DE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_DE,
      SGX_CDSPEED_LABEL_CAT_DE,
      SGX_CDSPEED_INFO_0_DE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_DE,
      SGX_ADPCMVOLUME_LABEL_CAT_DE,
      SGX_ADPCMVOLUME_INFO_0_DE,
      SGX_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_DE,
      SGX_CDDAVOLUME_LABEL_CAT_DE,
      SGX_ADPCMVOLUME_INFO_0_DE,
      SGX_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_DE,
      SGX_CDPSGVOLUME_LABEL_CAT_DE,
      SGX_ADPCMVOLUME_INFO_0_DE,
      SGX_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_DE,
      NULL,
      SGX_FORCESGX_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_DE,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_DE,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL "Οδηγός Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_INPUT_LABEL_EL "Οδηγός Εισαγωγής"
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_HACKS_LABEL_EL NULL
#define CATEGORY_HACKS_INFO_0_EL NULL
#define CATEGORY_CD_LABEL_EL NULL
#define CATEGORY_CD_INFO_0_EL NULL
#define SGX_PALETTE_LABEL_EL "Παλέτα Χρωμάτων"
#define SGX_PALETTE_INFO_0_EL NULL
#define OPTION_VAL_RGB_EL NULL
#define OPTION_VAL_COMPOSITE_EL NULL
#define SGX_ASPECT_RATIO_LABEL_EL "Αναλογία Οθόνης"
#define SGX_ASPECT_RATIO_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_6_5_EL NULL
#define OPTION_VAL_4_3_EL NULL
#define SGX_HOVERSCAN_LABEL_EL NULL
#define SGX_HOVERSCAN_INFO_0_EL NULL
#define OPTION_VAL_352_EL "352 (Προεπιλογή)"
#define SGX_INITIAL_SCANLINE_LABEL_EL NULL
#define SGX_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_3_EL "3 (Προεπιλογή)"
#define SGX_LAST_SCANLINE_LABEL_EL NULL
#define SGX_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_242_EL "242 (Προεπιλογή)"
#define SGX_MOUSE_SENSITIVITY_LABEL_EL "Ευαισθησία Ποντικιού"
#define SGX_MOUSE_SENSITIVITY_INFO_0_EL NULL
#define OPTION_VAL_0_25_EL NULL
#define OPTION_VAL_0_50_EL NULL
#define OPTION_VAL_0_75_EL NULL
#define OPTION_VAL_1_00_EL NULL
#define OPTION_VAL_1_25_EL NULL
#define OPTION_VAL_1_50_EL NULL
#define OPTION_VAL_1_75_EL NULL
#define OPTION_VAL_2_00_EL NULL
#define OPTION_VAL_2_25_EL NULL
#define OPTION_VAL_2_50_EL NULL
#define OPTION_VAL_2_75_EL NULL
#define OPTION_VAL_3_00_EL NULL
#define OPTION_VAL_3_25_EL NULL
#define OPTION_VAL_3_50_EL NULL
#define OPTION_VAL_3_75_EL NULL
#define OPTION_VAL_4_00_EL NULL
#define OPTION_VAL_4_25_EL NULL
#define OPTION_VAL_4_50_EL NULL
#define OPTION_VAL_4_75_EL NULL
#define OPTION_VAL_5_00_EL NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_EL NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_EL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_EL NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_EL NULL
#define SGX_MULTITAP_LABEL_EL NULL
#define SGX_MULTITAP_INFO_0_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL NULL
#define OPTION_VAL_2_BUTTONS_EL NULL
#define OPTION_VAL_6_BUTTONS_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL NULL
#define SGX_TURBO_TOGGLE_LABEL_EL NULL
#define SGX_TURBO_TOGGLE_INFO_0_EL NULL
#define OPTION_VAL_SWITCH_EL NULL
#define OPTION_VAL_DEDICATED_EL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_EL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EL NULL
#define SGX_TURBO_DELAY_LABEL_EL "Καθυστέρηση Τούρμπο"
#define SGX_TURBO_DELAY_INFO_0_EL NULL
#define SGX_CDIMAGECACHE_LABEL_EL NULL
#define SGX_CDIMAGECACHE_INFO_0_EL NULL
#define SGX_CDBIOS_LABEL_EL NULL
#define SGX_CDBIOS_INFO_0_EL NULL
#define OPTION_VAL_GAMES_EXPRESS_EL NULL
#define OPTION_VAL_SYSTEM_CARD_1_EL "Κάρτα Συστήματος 1"
#define OPTION_VAL_SYSTEM_CARD_2_EL "Κάρτα Συστήματος 2"
#define OPTION_VAL_SYSTEM_CARD_3_EL "Κάρτα Συστήματος 3"
#define SGX_DETECT_GEXPRESS_LABEL_EL NULL
#define SGX_DETECT_GEXPRESS_INFO_0_EL NULL
#define SGX_CDSPEED_LABEL_EL NULL
#define SGX_CDSPEED_LABEL_CAT_EL NULL
#define SGX_CDSPEED_INFO_0_EL NULL
#define SGX_ADPCMVOLUME_LABEL_EL NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_EL NULL
#define SGX_ADPCMVOLUME_INFO_0_EL NULL
#define SGX_ADPCMVOLUME_INFO_1_EL NULL
#define SGX_CDDAVOLUME_LABEL_EL NULL
#define SGX_CDDAVOLUME_LABEL_CAT_EL NULL
#define SGX_CDPSGVOLUME_LABEL_EL NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_EL NULL
#define SGX_FORCESGX_LABEL_EL NULL
#define SGX_FORCESGX_INFO_0_EL NULL
#define SGX_NOSPRITELIMIT_LABEL_EL NULL
#define SGX_NOSPRITELIMIT_INFO_0_EL NULL
#define SGX_OCMULTIPLIER_LABEL_EL NULL
#define SGX_OCMULTIPLIER_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EL,
      CATEGORY_HACKS_INFO_0_EL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EL,
      CATEGORY_CD_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_EL,
      NULL,
      SGX_PALETTE_INFO_0_EL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EL },
         { "Composite", OPTION_VAL_COMPOSITE_EL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_EL,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "6:5", OPTION_VAL_6_5_EL },
         { "4:3", OPTION_VAL_4_3_EL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_EL,
      NULL,
      SGX_HOVERSCAN_INFO_0_EL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_EL,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_EL,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_EL,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EL },
         { "0.50", OPTION_VAL_0_50_EL },
         { "0.75", OPTION_VAL_0_75_EL },
         { "1.00", OPTION_VAL_1_00_EL },
         { "1.25", OPTION_VAL_1_25_EL },
         { "1.50", OPTION_VAL_1_50_EL },
         { "1.75", OPTION_VAL_1_75_EL },
         { "2.00", OPTION_VAL_2_00_EL },
         { "2.25", OPTION_VAL_2_25_EL },
         { "2.50", OPTION_VAL_2_50_EL },
         { "2.75", OPTION_VAL_2_75_EL },
         { "3.00", OPTION_VAL_3_00_EL },
         { "3.25", OPTION_VAL_3_25_EL },
         { "3.50", OPTION_VAL_3_50_EL },
         { "3.75", OPTION_VAL_3_75_EL },
         { "4.00", OPTION_VAL_4_00_EL },
         { "4.25", OPTION_VAL_4_25_EL },
         { "4.50", OPTION_VAL_4_50_EL },
         { "4.75", OPTION_VAL_4_75_EL },
         { "5.00", OPTION_VAL_5_00_EL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_EL,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_EL,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_EL,
      NULL,
      SGX_MULTITAP_INFO_0_EL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_EL,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_EL },
         { "dedicated", OPTION_VAL_DEDICATED_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_EL,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_EL,
      NULL,
      SGX_TURBO_DELAY_INFO_0_EL,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_EL,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_EL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_EL,
      NULL,
      SGX_CDBIOS_INFO_0_EL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_EL,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_EL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_EL,
      SGX_CDSPEED_LABEL_CAT_EL,
      SGX_CDSPEED_INFO_0_EL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_EL,
      SGX_ADPCMVOLUME_LABEL_CAT_EL,
      SGX_ADPCMVOLUME_INFO_0_EL,
      SGX_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_EL,
      SGX_CDDAVOLUME_LABEL_CAT_EL,
      SGX_ADPCMVOLUME_INFO_0_EL,
      SGX_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_EL,
      SGX_CDPSGVOLUME_LABEL_CAT_EL,
      SGX_ADPCMVOLUME_INFO_0_EL,
      SGX_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_EL,
      NULL,
      SGX_FORCESGX_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_EL,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_EL,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_VIDEO_LABEL_EN NULL
#define CATEGORY_VIDEO_INFO_0_EN NULL
#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define CATEGORY_HACKS_LABEL_EN NULL
#define CATEGORY_HACKS_INFO_0_EN "Configure processor over-clocking and emulation accuracy parameters affecting low-level performance and compatibility."
#define CATEGORY_CD_LABEL_EN NULL
#define CATEGORY_CD_INFO_0_EN NULL
#define SGX_PALETTE_LABEL_EN "Colour Palette"
#define SGX_PALETTE_INFO_0_EN NULL
#define OPTION_VAL_RGB_EN NULL
#define OPTION_VAL_COMPOSITE_EN NULL
#define SGX_ASPECT_RATIO_LABEL_EN NULL
#define SGX_ASPECT_RATIO_INFO_0_EN NULL
#define OPTION_VAL_AUTO_EN NULL
#define OPTION_VAL_6_5_EN NULL
#define OPTION_VAL_4_3_EN NULL
#define SGX_HOVERSCAN_LABEL_EN NULL
#define SGX_HOVERSCAN_INFO_0_EN "Choose the maximum image width to be displayed. Lower values will crop the right side of the image (for 352-pixel width games)."
#define OPTION_VAL_352_EN NULL
#define SGX_INITIAL_SCANLINE_LABEL_EN "Initial Scan-line"
#define SGX_INITIAL_SCANLINE_INFO_0_EN "First rendered scan-line. Higher values will crop the top of the image."
#define OPTION_VAL_3_EN NULL
#define SGX_LAST_SCANLINE_LABEL_EN "Last Scan-line"
#define SGX_LAST_SCANLINE_INFO_0_EN "Last rendered scan-line. Lower values will crop the bottom of the image."
#define OPTION_VAL_242_EN NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_EN NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_EN NULL
#define OPTION_VAL_0_25_EN NULL
#define OPTION_VAL_0_50_EN NULL
#define OPTION_VAL_0_75_EN NULL
#define OPTION_VAL_1_00_EN NULL
#define OPTION_VAL_1_25_EN NULL
#define OPTION_VAL_1_50_EN NULL
#define OPTION_VAL_1_75_EN NULL
#define OPTION_VAL_2_00_EN NULL
#define OPTION_VAL_2_25_EN NULL
#define OPTION_VAL_2_50_EN NULL
#define OPTION_VAL_2_75_EN NULL
#define OPTION_VAL_3_00_EN NULL
#define OPTION_VAL_3_25_EN NULL
#define OPTION_VAL_3_50_EN NULL
#define OPTION_VAL_3_75_EN NULL
#define OPTION_VAL_4_00_EN NULL
#define OPTION_VAL_4_25_EN NULL
#define OPTION_VAL_4_50_EN NULL
#define OPTION_VAL_4_75_EN NULL
#define OPTION_VAL_5_00_EN NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_EN NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_EN NULL
#define SGX_DISABLE_SOFTRESET_LABEL_EN NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_EN NULL
#define SGX_MULTITAP_LABEL_EN "Multi-tap 5-port Controller"
#define SGX_MULTITAP_INFO_0_EN "Enable up to 5-player multi-tap emulation. Disabling this is only needed in some cases (e.g. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN "Choose if port 1 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define OPTION_VAL_2_BUTTONS_EN NULL
#define OPTION_VAL_6_BUTTONS_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN "Choose if port 2 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN "Choose if port 3 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN "Choose if port 4 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN "Choose if port 5 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define SGX_TURBO_TOGGLE_LABEL_EN NULL
#define SGX_TURBO_TOGGLE_INFO_0_EN NULL
#define OPTION_VAL_SWITCH_EN NULL
#define OPTION_VAL_DEDICATED_EN NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_EN NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EN NULL
#define SGX_TURBO_DELAY_LABEL_EN NULL
#define SGX_TURBO_DELAY_INFO_0_EN NULL
#define SGX_CDIMAGECACHE_LABEL_EN NULL
#define SGX_CDIMAGECACHE_INFO_0_EN "Load the complete image into memory at start-up. Can potentially decrease loading times at the cost of an increased start-up time."
#define SGX_CDBIOS_LABEL_EN NULL
#define SGX_CDBIOS_INFO_0_EN NULL
#define OPTION_VAL_GAMES_EXPRESS_EN NULL
#define OPTION_VAL_SYSTEM_CARD_1_EN NULL
#define OPTION_VAL_SYSTEM_CARD_2_EN NULL
#define OPTION_VAL_SYSTEM_CARD_3_EN NULL
#define SGX_DETECT_GEXPRESS_LABEL_EN NULL
#define SGX_DETECT_GEXPRESS_INFO_0_EN NULL
#define SGX_CDSPEED_LABEL_EN NULL
#define SGX_CDSPEED_LABEL_CAT_EN NULL
#define SGX_CDSPEED_INFO_0_EN NULL
#define SGX_ADPCMVOLUME_LABEL_EN NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_EN NULL
#define SGX_ADPCMVOLUME_INFO_0_EN NULL
#define SGX_ADPCMVOLUME_INFO_1_EN NULL
#define SGX_CDDAVOLUME_LABEL_EN NULL
#define SGX_CDDAVOLUME_LABEL_CAT_EN NULL
#define SGX_CDPSGVOLUME_LABEL_EN NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_EN NULL
#define SGX_FORCESGX_LABEL_EN NULL
#define SGX_FORCESGX_INFO_0_EN "This is helpful to run home-brew games or to isolate games that will not run in SuperGrafx mode (like Space Harrier). Save states are not compatible with each mode. It's better to leave this option off unless needed. Known SuperGrafx games (like Dai-Makaimura, Aldyns) will automatically switch to SuperGrafx regardless of this option."
#define SGX_NOSPRITELIMIT_LABEL_EN NULL
#define SGX_NOSPRITELIMIT_INFO_0_EN "Remove 16-sprites-per-scan-line hardware limit. WARNING: May cause graphics glitching on some games."
#define SGX_OCMULTIPLIER_LABEL_EN "CPU Over-clock Multiplier (Restart Required)"
#define SGX_OCMULTIPLIER_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EN,
      CATEGORY_VIDEO_INFO_0_EN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EN,
      CATEGORY_HACKS_INFO_0_EN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EN,
      CATEGORY_CD_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_EN,
      NULL,
      SGX_PALETTE_INFO_0_EN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EN },
         { "Composite", OPTION_VAL_COMPOSITE_EN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_EN,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_EN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EN },
         { "6:5", OPTION_VAL_6_5_EN },
         { "4:3", OPTION_VAL_4_3_EN },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_EN,
      NULL,
      SGX_HOVERSCAN_INFO_0_EN,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EN },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_EN,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_EN,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EN },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_EN,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EN },
         { "0.50", OPTION_VAL_0_50_EN },
         { "0.75", OPTION_VAL_0_75_EN },
         { "1.00", OPTION_VAL_1_00_EN },
         { "1.25", OPTION_VAL_1_25_EN },
         { "1.50", OPTION_VAL_1_50_EN },
         { "1.75", OPTION_VAL_1_75_EN },
         { "2.00", OPTION_VAL_2_00_EN },
         { "2.25", OPTION_VAL_2_25_EN },
         { "2.50", OPTION_VAL_2_50_EN },
         { "2.75", OPTION_VAL_2_75_EN },
         { "3.00", OPTION_VAL_3_00_EN },
         { "3.25", OPTION_VAL_3_25_EN },
         { "3.50", OPTION_VAL_3_50_EN },
         { "3.75", OPTION_VAL_3_75_EN },
         { "4.00", OPTION_VAL_4_00_EN },
         { "4.25", OPTION_VAL_4_25_EN },
         { "4.50", OPTION_VAL_4_50_EN },
         { "4.75", OPTION_VAL_4_75_EN },
         { "5.00", OPTION_VAL_5_00_EN },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_EN,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_EN,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_EN,
      NULL,
      SGX_MULTITAP_INFO_0_EN,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_EN,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_EN },
         { "dedicated", OPTION_VAL_DEDICATED_EN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_EN,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_EN,
      NULL,
      SGX_TURBO_DELAY_INFO_0_EN,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_EN,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_EN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_EN,
      NULL,
      SGX_CDBIOS_INFO_0_EN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EN },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_EN,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_EN,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_EN,
      SGX_CDSPEED_LABEL_CAT_EN,
      SGX_CDSPEED_INFO_0_EN,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_EN,
      SGX_ADPCMVOLUME_LABEL_CAT_EN,
      SGX_ADPCMVOLUME_INFO_0_EN,
      SGX_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_EN,
      SGX_CDDAVOLUME_LABEL_CAT_EN,
      SGX_ADPCMVOLUME_INFO_0_EN,
      SGX_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_EN,
      SGX_CDPSGVOLUME_LABEL_CAT_EN,
      SGX_ADPCMVOLUME_INFO_0_EN,
      SGX_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_EN,
      NULL,
      SGX_FORCESGX_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_EN,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_EN,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO "Video Driver"
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO "Input Driver"
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_HACKS_LABEL_EO NULL
#define CATEGORY_HACKS_INFO_0_EO NULL
#define CATEGORY_CD_LABEL_EO NULL
#define CATEGORY_CD_INFO_0_EO NULL
#define SGX_PALETTE_LABEL_EO NULL
#define SGX_PALETTE_INFO_0_EO NULL
#define OPTION_VAL_RGB_EO NULL
#define OPTION_VAL_COMPOSITE_EO NULL
#define SGX_ASPECT_RATIO_LABEL_EO NULL
#define SGX_ASPECT_RATIO_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_6_5_EO NULL
#define OPTION_VAL_4_3_EO NULL
#define SGX_HOVERSCAN_LABEL_EO NULL
#define SGX_HOVERSCAN_INFO_0_EO NULL
#define OPTION_VAL_352_EO NULL
#define SGX_INITIAL_SCANLINE_LABEL_EO NULL
#define SGX_INITIAL_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_3_EO NULL
#define SGX_LAST_SCANLINE_LABEL_EO NULL
#define SGX_LAST_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_242_EO NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_EO NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_EO NULL
#define OPTION_VAL_0_25_EO NULL
#define OPTION_VAL_0_50_EO NULL
#define OPTION_VAL_0_75_EO NULL
#define OPTION_VAL_1_00_EO NULL
#define OPTION_VAL_1_25_EO NULL
#define OPTION_VAL_1_50_EO NULL
#define OPTION_VAL_1_75_EO NULL
#define OPTION_VAL_2_00_EO NULL
#define OPTION_VAL_2_25_EO NULL
#define OPTION_VAL_2_50_EO NULL
#define OPTION_VAL_2_75_EO NULL
#define OPTION_VAL_3_00_EO NULL
#define OPTION_VAL_3_25_EO NULL
#define OPTION_VAL_3_50_EO NULL
#define OPTION_VAL_3_75_EO NULL
#define OPTION_VAL_4_00_EO NULL
#define OPTION_VAL_4_25_EO NULL
#define OPTION_VAL_4_50_EO NULL
#define OPTION_VAL_4_75_EO NULL
#define OPTION_VAL_5_00_EO NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_EO NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_EO NULL
#define SGX_DISABLE_SOFTRESET_LABEL_EO NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_EO NULL
#define SGX_MULTITAP_LABEL_EO NULL
#define SGX_MULTITAP_INFO_0_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO NULL
#define OPTION_VAL_2_BUTTONS_EO NULL
#define OPTION_VAL_6_BUTTONS_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO NULL
#define SGX_TURBO_TOGGLE_LABEL_EO NULL
#define SGX_TURBO_TOGGLE_INFO_0_EO NULL
#define OPTION_VAL_SWITCH_EO NULL
#define OPTION_VAL_DEDICATED_EO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_EO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EO NULL
#define SGX_TURBO_DELAY_LABEL_EO NULL
#define SGX_TURBO_DELAY_INFO_0_EO NULL
#define SGX_CDIMAGECACHE_LABEL_EO NULL
#define SGX_CDIMAGECACHE_INFO_0_EO NULL
#define SGX_CDBIOS_LABEL_EO NULL
#define SGX_CDBIOS_INFO_0_EO NULL
#define OPTION_VAL_GAMES_EXPRESS_EO NULL
#define OPTION_VAL_SYSTEM_CARD_1_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_EO NULL
#define SGX_DETECT_GEXPRESS_LABEL_EO NULL
#define SGX_DETECT_GEXPRESS_INFO_0_EO NULL
#define SGX_CDSPEED_LABEL_EO NULL
#define SGX_CDSPEED_LABEL_CAT_EO NULL
#define SGX_CDSPEED_INFO_0_EO NULL
#define SGX_ADPCMVOLUME_LABEL_EO NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_EO NULL
#define SGX_ADPCMVOLUME_INFO_0_EO NULL
#define SGX_ADPCMVOLUME_INFO_1_EO NULL
#define SGX_CDDAVOLUME_LABEL_EO NULL
#define SGX_CDDAVOLUME_LABEL_CAT_EO NULL
#define SGX_CDPSGVOLUME_LABEL_EO NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_EO NULL
#define SGX_FORCESGX_LABEL_EO NULL
#define SGX_FORCESGX_INFO_0_EO NULL
#define SGX_NOSPRITELIMIT_LABEL_EO NULL
#define SGX_NOSPRITELIMIT_INFO_0_EO NULL
#define SGX_OCMULTIPLIER_LABEL_EO NULL
#define SGX_OCMULTIPLIER_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EO,
      CATEGORY_HACKS_INFO_0_EO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EO,
      CATEGORY_CD_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_EO,
      NULL,
      SGX_PALETTE_INFO_0_EO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EO },
         { "Composite", OPTION_VAL_COMPOSITE_EO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_EO,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "6:5", OPTION_VAL_6_5_EO },
         { "4:3", OPTION_VAL_4_3_EO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_EO,
      NULL,
      SGX_HOVERSCAN_INFO_0_EO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_EO,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_EO,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_EO,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EO },
         { "0.50", OPTION_VAL_0_50_EO },
         { "0.75", OPTION_VAL_0_75_EO },
         { "1.00", OPTION_VAL_1_00_EO },
         { "1.25", OPTION_VAL_1_25_EO },
         { "1.50", OPTION_VAL_1_50_EO },
         { "1.75", OPTION_VAL_1_75_EO },
         { "2.00", OPTION_VAL_2_00_EO },
         { "2.25", OPTION_VAL_2_25_EO },
         { "2.50", OPTION_VAL_2_50_EO },
         { "2.75", OPTION_VAL_2_75_EO },
         { "3.00", OPTION_VAL_3_00_EO },
         { "3.25", OPTION_VAL_3_25_EO },
         { "3.50", OPTION_VAL_3_50_EO },
         { "3.75", OPTION_VAL_3_75_EO },
         { "4.00", OPTION_VAL_4_00_EO },
         { "4.25", OPTION_VAL_4_25_EO },
         { "4.50", OPTION_VAL_4_50_EO },
         { "4.75", OPTION_VAL_4_75_EO },
         { "5.00", OPTION_VAL_5_00_EO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_EO,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_EO,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_EO,
      NULL,
      SGX_MULTITAP_INFO_0_EO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_EO,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_EO },
         { "dedicated", OPTION_VAL_DEDICATED_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_EO,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_EO,
      NULL,
      SGX_TURBO_DELAY_INFO_0_EO,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_EO,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_EO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_EO,
      NULL,
      SGX_CDBIOS_INFO_0_EO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_EO,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_EO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_EO,
      SGX_CDSPEED_LABEL_CAT_EO,
      SGX_CDSPEED_INFO_0_EO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_EO,
      SGX_ADPCMVOLUME_LABEL_CAT_EO,
      SGX_ADPCMVOLUME_INFO_0_EO,
      SGX_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_EO,
      SGX_CDDAVOLUME_LABEL_CAT_EO,
      SGX_ADPCMVOLUME_INFO_0_EO,
      SGX_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_EO,
      SGX_CDPSGVOLUME_LABEL_CAT_EO,
      SGX_ADPCMVOLUME_INFO_0_EO,
      SGX_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_EO,
      NULL,
      SGX_FORCESGX_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_EO,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_EO,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Cambia las opciones de relación de aspecto, omisión de fotogramas y otros ajustes de la salida de imagen."
#define CATEGORY_INPUT_LABEL_ES "Entrada"
#define CATEGORY_INPUT_INFO_0_ES "Configura la entrada de las pistolas de luz, el ratón o el NegCon."
#define CATEGORY_HACKS_LABEL_ES "Arreglos de emulación"
#define CATEGORY_HACKS_INFO_0_ES "Cambia las opciones de velocidad del procesador y de precisión de la emulación que afectan al rendimiento a bajo nivel y a la compatibilidad."
#define CATEGORY_CD_LABEL_ES NULL
#define CATEGORY_CD_INFO_0_ES "Cambia los ajustes relacionados con los juegos de CD."
#define SGX_PALETTE_LABEL_ES "Paleta de colores"
#define SGX_PALETTE_INFO_0_ES "«Vídeo compuesto» intentará recrear la salida de vídeo original de la consola, mostrando más detalles en algunos juegos."
#define OPTION_VAL_RGB_ES NULL
#define OPTION_VAL_COMPOSITE_ES "Vídeo compuesto"
#define SGX_ASPECT_RATIO_LABEL_ES "Relación de aspecto"
#define SGX_ASPECT_RATIO_INFO_0_ES "Selecciona la relación de aspecto preferida para los contenidos. Al emplear juegos que cambien constantemente entre los modos de 256 y 352 líneas y la selección automática, lo mejor es configurar el ancho horizontal a 342 píxeles para mitigar los cambios de tamaño y las líneas negras de más, ya que este ancho comparte relación con el modo de 256 líneas (o algo parecido, lo mejor es probar con Asuka 100%, que es uno de los juegos que cambian entre modos)."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define OPTION_VAL_6_5_ES NULL
#define OPTION_VAL_4_3_ES NULL
#define SGX_HOVERSCAN_LABEL_ES "Sobrebarrido horizontal (solo para el modo de 352 px de ancho)"
#define SGX_HOVERSCAN_INFO_0_ES "Selecciona el ancho máximo de la imagen que se mostrará. Un valor bajo recortará la parte derecha (para los juegos con un ancho de 352 px)."
#define OPTION_VAL_352_ES "352 (por defecto)"
#define SGX_INITIAL_SCANLINE_LABEL_ES "Línea de barrido inicial"
#define SGX_INITIAL_SCANLINE_INFO_0_ES "Indica la primera línea de barrido que se renderizará. Un valor muy alto recortará la parte superior de la imagen."
#define OPTION_VAL_3_ES "3 (por defecto)"
#define SGX_LAST_SCANLINE_LABEL_ES "Línea de barrido final"
#define SGX_LAST_SCANLINE_INFO_0_ES "Indica la última línea de barrido que se renderizará. Un valor muy bajo recortará la parte inferior de la imagen."
#define OPTION_VAL_242_ES "242 (por defecto)"
#define SGX_MOUSE_SENSITIVITY_LABEL_ES "Sensibilidad del ratón"
#define SGX_MOUSE_SENSITIVITY_INFO_0_ES "Un valor más alto hará que el cursor del ratón se desplace más rápido."
#define OPTION_VAL_0_25_ES "0,25"
#define OPTION_VAL_0_50_ES "0,50"
#define OPTION_VAL_0_75_ES "0,75"
#define OPTION_VAL_1_00_ES "1,00"
#define OPTION_VAL_1_25_ES "1,25"
#define OPTION_VAL_1_50_ES "1,50"
#define OPTION_VAL_1_75_ES "1,75"
#define OPTION_VAL_2_00_ES "2,00"
#define OPTION_VAL_2_25_ES "2,25"
#define OPTION_VAL_2_50_ES "2,50"
#define OPTION_VAL_2_75_ES "2,75"
#define OPTION_VAL_3_00_ES "3,00"
#define OPTION_VAL_3_25_ES "3,25"
#define OPTION_VAL_3_50_ES "3,50"
#define OPTION_VAL_3_75_ES "3,75"
#define OPTION_VAL_4_00_ES "4,00"
#define OPTION_VAL_4_25_ES "4,25"
#define OPTION_VAL_4_50_ES "4,50"
#define OPTION_VAL_4_75_ES "4,75"
#define OPTION_VAL_5_00_ES "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_ES "Permitir direcciones opuestas"
#define SGX_UP_DOWN_ALLOWED_INFO_0_ES "Esta opción permitirá pulsar, alternar rápidamente o mantener las direcciones izquierda y derecha (o arriba y abajo) al mismo tiempo. Podría provocar fallos de movimiento."
#define SGX_DISABLE_SOFTRESET_LABEL_ES "Desactivar reinicio por software (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_ES "Cuando se pulsen a la vez los botones RUN y SELECT, esta opción desactivará los dos botones temporalmente en vez de provocar un reinicio del sistema."
#define SGX_MULTITAP_LABEL_ES "Multitap para cinco mandos"
#define SGX_MULTITAP_INFO_0_ES "Activa la emulación de un Multitap para hasta cinco jugadores. Solo es necesario desactivar esta opción en casos concretos (p. ej.: Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES "Tipo de mando predeterminado del J1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES "Indica si el mando del puerto 1 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define OPTION_VAL_2_BUTTONS_ES "Dos botones"
#define OPTION_VAL_6_BUTTONS_ES "Seis botones"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES "Tipo de mando predeterminado del J2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES "Indica si el mando del puerto 2 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES "Tipo de mando predeterminado del J3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES "Indica si el mando del puerto 3 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES "Tipo de mando predeterminado del J4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES "Indica si el mando del puerto 4 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES "Tipo de mando predeterminado del J5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES "Indica si el mando del puerto 5 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define SGX_TURBO_TOGGLE_LABEL_ES "Modo de las teclas rápidas del turbo"
#define SGX_TURBO_TOGGLE_INFO_0_ES "Activa los botones con turbo. Las teclas rápidas (los botones III y IV) pueden hacer de conmutadores o de botones de turbo dedicados (mantenlos pulsados para usarlos)."
#define OPTION_VAL_SWITCH_ES "Activación manual"
#define OPTION_VAL_DEDICATED_ES "Botones dedicados"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_ES "Teclas rápidas alternativas para el turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_ES "Asigna los botones L3/R3 del RetroPad como teclas rápidas de turbo en vez de usar los botones III y IV. Solo funciona en el modo «Alternar» y mientras no haya otra acción asignada a los botones L3/R3. Con esta opción no tendrás que reasignar los botones III y IV cuando cambies al modo de mando de 6 botones."
#define SGX_TURBO_DELAY_LABEL_ES "Retraso del turbo"
#define SGX_TURBO_DELAY_INFO_0_ES "Ajusta el tiempo que pasará entre cada pulsación del turbo (en fotogramas)."
#define SGX_CDIMAGECACHE_LABEL_ES "Cachear imagen de CD (es necesario reiniciar)"
#define SGX_CDIMAGECACHE_INFO_0_ES "Carga la imagen de CD entera en la memoria al arrancar. Podría reducir los tiempos de carga a costa de aumentar el tiempo de arranque."
#define SGX_CDBIOS_LABEL_ES "BIOS para CD (es necesario reiniciar)"
#define SGX_CDBIOS_INFO_0_ES "La mayoría de juegos pueden ejecutarse con «System Card 3». «Games Express» es necesario para varios juegos sin licencia."
#define OPTION_VAL_GAMES_EXPRESS_ES NULL
#define OPTION_VAL_SYSTEM_CARD_1_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_ES NULL
#define OPTION_VAL_SYSTEM_CARD_3_ES NULL
#define SGX_DETECT_GEXPRESS_LABEL_ES "Detectar los CD de Games Express (es necesario reiniciar)"
#define SGX_DETECT_GEXPRESS_INFO_0_ES "Carga automáticamente la BIOS de Games Express al cargar un CD de esta empresa, sin tener en cuenta el ajuste de la BIOS para CD."
#define SGX_CDSPEED_LABEL_ES "(CD) Velocidad del CD"
#define SGX_CDSPEED_LABEL_CAT_ES "Velocidad del CD"
#define SGX_CDSPEED_INFO_0_ES "Un valor alto acelerará los tiempos de carga, pero dará problemas con un par de juegos."
#define SGX_ADPCMVOLUME_LABEL_ES "(CD) Volumen de ADPCM (%)"
#define SGX_ADPCMVOLUME_LABEL_CAT_ES "Volumen de ADPCM (%)"
#define SGX_ADPCMVOLUME_INFO_0_ES "Solo para juegos en CD. Un volumen muy elevado podría saturar las muestras de audio."
#define SGX_ADPCMVOLUME_INFO_1_ES "Un volumen muy elevado podría saturar las muestras de audio."
#define SGX_CDDAVOLUME_LABEL_ES "(CD) Volumen de CDDA (%)"
#define SGX_CDDAVOLUME_LABEL_CAT_ES "Volumen de CDDA (%)"
#define SGX_CDPSGVOLUME_LABEL_ES "(CD) Volumen del PSG (%)"
#define SGX_CDPSGVOLUME_LABEL_CAT_ES "Volumen del PSG de CD (%)"
#define SGX_FORCESGX_LABEL_ES "Forzar emulación de SuperGrafx (es necesario reiniciar)"
#define SGX_FORCESGX_INFO_0_ES "Esta opción es útil para ejecutar juegos «homebrew» o para identificar a aquellos juegos que no funcionarán en el modo SuperGrafx (como Space Harrier). Los guardados rápidos no son compatibles entre modos. Es mejor dejar esta opción desactivada a menos que sea necesaria. Los juegos conocidos por funcionar con SuperGrafx (como Dai-Makaimura o Aldyns) cambiarán automáticamente el modo a SuperGrafx, ignorando esta opción."
#define SGX_NOSPRITELIMIT_LABEL_ES "Desactivar límite de sprites"
#define SGX_NOSPRITELIMIT_INFO_0_ES "Elimina el límite de 16 sprites por línea de barrido que tenía el hardware original. ADVERTENCIA: puede provocar fallos gráficos en algunos juegos."
#define SGX_OCMULTIPLIER_LABEL_ES "Multiplicador de velocidad de la CPU (es necesario reiniciar)"
#define SGX_OCMULTIPLIER_INFO_0_ES "Un valor alto puede evitar las ralentizaciones de los juegos. ADVERTENCIA: puede producir fallos gráficos y cuelgues."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ES,
      CATEGORY_HACKS_INFO_0_ES
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ES,
      CATEGORY_CD_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_ES,
      NULL,
      SGX_PALETTE_INFO_0_ES,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ES },
         { "Composite", OPTION_VAL_COMPOSITE_ES },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_ES,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "6:5", OPTION_VAL_6_5_ES },
         { "4:3", OPTION_VAL_4_3_ES },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_ES,
      NULL,
      SGX_HOVERSCAN_INFO_0_ES,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_ES },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_ES,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_ES,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ES },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_ES,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_ES },
         { "0.50", OPTION_VAL_0_50_ES },
         { "0.75", OPTION_VAL_0_75_ES },
         { "1.00", OPTION_VAL_1_00_ES },
         { "1.25", OPTION_VAL_1_25_ES },
         { "1.50", OPTION_VAL_1_50_ES },
         { "1.75", OPTION_VAL_1_75_ES },
         { "2.00", OPTION_VAL_2_00_ES },
         { "2.25", OPTION_VAL_2_25_ES },
         { "2.50", OPTION_VAL_2_50_ES },
         { "2.75", OPTION_VAL_2_75_ES },
         { "3.00", OPTION_VAL_3_00_ES },
         { "3.25", OPTION_VAL_3_25_ES },
         { "3.50", OPTION_VAL_3_50_ES },
         { "3.75", OPTION_VAL_3_75_ES },
         { "4.00", OPTION_VAL_4_00_ES },
         { "4.25", OPTION_VAL_4_25_ES },
         { "4.50", OPTION_VAL_4_50_ES },
         { "4.75", OPTION_VAL_4_75_ES },
         { "5.00", OPTION_VAL_5_00_ES },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_ES,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_ES,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_ES,
      NULL,
      SGX_MULTITAP_INFO_0_ES,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_ES,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_ES },
         { "dedicated", OPTION_VAL_DEDICATED_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_ES,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_ES,
      NULL,
      SGX_TURBO_DELAY_INFO_0_ES,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_ES,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_ES,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_ES,
      NULL,
      SGX_CDBIOS_INFO_0_ES,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ES },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ES },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ES },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ES },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_ES,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_ES,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_ES,
      SGX_CDSPEED_LABEL_CAT_ES,
      SGX_CDSPEED_INFO_0_ES,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_ES,
      SGX_ADPCMVOLUME_LABEL_CAT_ES,
      SGX_ADPCMVOLUME_INFO_0_ES,
      SGX_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_ES,
      SGX_CDDAVOLUME_LABEL_CAT_ES,
      SGX_ADPCMVOLUME_INFO_0_ES,
      SGX_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_ES,
      SGX_CDPSGVOLUME_LABEL_CAT_ES,
      SGX_ADPCMVOLUME_INFO_0_ES,
      SGX_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_ES,
      NULL,
      SGX_FORCESGX_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_ES,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_ES,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA "داده"
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_HACKS_LABEL_FA NULL
#define CATEGORY_HACKS_INFO_0_FA NULL
#define CATEGORY_CD_LABEL_FA NULL
#define CATEGORY_CD_INFO_0_FA NULL
#define SGX_PALETTE_LABEL_FA NULL
#define SGX_PALETTE_INFO_0_FA NULL
#define OPTION_VAL_RGB_FA NULL
#define OPTION_VAL_COMPOSITE_FA NULL
#define SGX_ASPECT_RATIO_LABEL_FA "نسبت تصویر"
#define SGX_ASPECT_RATIO_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA "خودکار"
#define OPTION_VAL_6_5_FA NULL
#define OPTION_VAL_4_3_FA NULL
#define SGX_HOVERSCAN_LABEL_FA NULL
#define SGX_HOVERSCAN_INFO_0_FA NULL
#define OPTION_VAL_352_FA NULL
#define SGX_INITIAL_SCANLINE_LABEL_FA NULL
#define SGX_INITIAL_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_3_FA NULL
#define SGX_LAST_SCANLINE_LABEL_FA NULL
#define SGX_LAST_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_242_FA NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_FA NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_FA NULL
#define OPTION_VAL_0_25_FA NULL
#define OPTION_VAL_0_50_FA NULL
#define OPTION_VAL_0_75_FA NULL
#define OPTION_VAL_1_00_FA NULL
#define OPTION_VAL_1_25_FA NULL
#define OPTION_VAL_1_50_FA NULL
#define OPTION_VAL_1_75_FA NULL
#define OPTION_VAL_2_00_FA NULL
#define OPTION_VAL_2_25_FA NULL
#define OPTION_VAL_2_50_FA NULL
#define OPTION_VAL_2_75_FA NULL
#define OPTION_VAL_3_00_FA NULL
#define OPTION_VAL_3_25_FA NULL
#define OPTION_VAL_3_50_FA NULL
#define OPTION_VAL_3_75_FA NULL
#define OPTION_VAL_4_00_FA NULL
#define OPTION_VAL_4_25_FA NULL
#define OPTION_VAL_4_50_FA NULL
#define OPTION_VAL_4_75_FA NULL
#define OPTION_VAL_5_00_FA NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_FA NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_FA NULL
#define SGX_DISABLE_SOFTRESET_LABEL_FA NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_FA NULL
#define SGX_MULTITAP_LABEL_FA NULL
#define SGX_MULTITAP_INFO_0_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA NULL
#define OPTION_VAL_2_BUTTONS_FA "۲ دکمه"
#define OPTION_VAL_6_BUTTONS_FA "۶ دکمه"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA NULL
#define SGX_TURBO_TOGGLE_LABEL_FA NULL
#define SGX_TURBO_TOGGLE_INFO_0_FA NULL
#define OPTION_VAL_SWITCH_FA NULL
#define OPTION_VAL_DEDICATED_FA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_FA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FA NULL
#define SGX_TURBO_DELAY_LABEL_FA NULL
#define SGX_TURBO_DELAY_INFO_0_FA NULL
#define SGX_CDIMAGECACHE_LABEL_FA NULL
#define SGX_CDIMAGECACHE_INFO_0_FA NULL
#define SGX_CDBIOS_LABEL_FA NULL
#define SGX_CDBIOS_INFO_0_FA NULL
#define OPTION_VAL_GAMES_EXPRESS_FA NULL
#define OPTION_VAL_SYSTEM_CARD_1_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_FA NULL
#define SGX_DETECT_GEXPRESS_LABEL_FA NULL
#define SGX_DETECT_GEXPRESS_INFO_0_FA NULL
#define SGX_CDSPEED_LABEL_FA NULL
#define SGX_CDSPEED_LABEL_CAT_FA NULL
#define SGX_CDSPEED_INFO_0_FA NULL
#define SGX_ADPCMVOLUME_LABEL_FA NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_FA NULL
#define SGX_ADPCMVOLUME_INFO_0_FA NULL
#define SGX_ADPCMVOLUME_INFO_1_FA NULL
#define SGX_CDDAVOLUME_LABEL_FA NULL
#define SGX_CDDAVOLUME_LABEL_CAT_FA NULL
#define SGX_CDPSGVOLUME_LABEL_FA NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_FA NULL
#define SGX_FORCESGX_LABEL_FA NULL
#define SGX_FORCESGX_INFO_0_FA NULL
#define SGX_NOSPRITELIMIT_LABEL_FA NULL
#define SGX_NOSPRITELIMIT_INFO_0_FA NULL
#define SGX_OCMULTIPLIER_LABEL_FA NULL
#define SGX_OCMULTIPLIER_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FA,
      CATEGORY_HACKS_INFO_0_FA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FA,
      CATEGORY_CD_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_FA,
      NULL,
      SGX_PALETTE_INFO_0_FA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FA },
         { "Composite", OPTION_VAL_COMPOSITE_FA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_FA,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "6:5", OPTION_VAL_6_5_FA },
         { "4:3", OPTION_VAL_4_3_FA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_FA,
      NULL,
      SGX_HOVERSCAN_INFO_0_FA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_FA,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_FA,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_FA,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FA },
         { "0.50", OPTION_VAL_0_50_FA },
         { "0.75", OPTION_VAL_0_75_FA },
         { "1.00", OPTION_VAL_1_00_FA },
         { "1.25", OPTION_VAL_1_25_FA },
         { "1.50", OPTION_VAL_1_50_FA },
         { "1.75", OPTION_VAL_1_75_FA },
         { "2.00", OPTION_VAL_2_00_FA },
         { "2.25", OPTION_VAL_2_25_FA },
         { "2.50", OPTION_VAL_2_50_FA },
         { "2.75", OPTION_VAL_2_75_FA },
         { "3.00", OPTION_VAL_3_00_FA },
         { "3.25", OPTION_VAL_3_25_FA },
         { "3.50", OPTION_VAL_3_50_FA },
         { "3.75", OPTION_VAL_3_75_FA },
         { "4.00", OPTION_VAL_4_00_FA },
         { "4.25", OPTION_VAL_4_25_FA },
         { "4.50", OPTION_VAL_4_50_FA },
         { "4.75", OPTION_VAL_4_75_FA },
         { "5.00", OPTION_VAL_5_00_FA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_FA,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_FA,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_FA,
      NULL,
      SGX_MULTITAP_INFO_0_FA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_FA,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_FA },
         { "dedicated", OPTION_VAL_DEDICATED_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_FA,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_FA,
      NULL,
      SGX_TURBO_DELAY_INFO_0_FA,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_FA,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_FA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_FA,
      NULL,
      SGX_CDBIOS_INFO_0_FA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_FA,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_FA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_FA,
      SGX_CDSPEED_LABEL_CAT_FA,
      SGX_CDSPEED_INFO_0_FA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_FA,
      SGX_ADPCMVOLUME_LABEL_CAT_FA,
      SGX_ADPCMVOLUME_INFO_0_FA,
      SGX_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_FA,
      SGX_CDDAVOLUME_LABEL_CAT_FA,
      SGX_ADPCMVOLUME_INFO_0_FA,
      SGX_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_FA,
      SGX_CDPSGVOLUME_LABEL_CAT_FA,
      SGX_ADPCMVOLUME_INFO_0_FA,
      SGX_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_FA,
      NULL,
      SGX_FORCESGX_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_FA,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_FA,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI "Määritä näytön rajaus, kuvanohitus ja muut kuvan ulostuloparametrit."
#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI "Määritä valoaseen, hiiren ja NegCon:in syöte."
#define CATEGORY_HACKS_LABEL_FI "Emulointikikat"
#define CATEGORY_HACKS_INFO_0_FI "Määritä prosessorin ylikellotus- ja emuloinnin tarkkuuden asetukset, jotka vaikuttavat matalan tason suorituskykyyn ja yhteensopivuuteen."
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI "Määritä CD-peleihin liittyvät asetukset."
#define SGX_PALETTE_LABEL_FI "Väripaletti"
#define SGX_PALETTE_INFO_0_FI "Komposiitti yrittää uudelleen luoda alkuperäisen konsolin ulostuloa ja saattaa näyttää enemmän yksityiskohtia joissakin peleissä."
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI "Komposiitti"
#define SGX_ASPECT_RATIO_LABEL_FI "Kuvasuhde"
#define SGX_ASPECT_RATIO_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_6_5_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define SGX_HOVERSCAN_LABEL_FI "Vaakasuuntainen yliskannaus (Vain 352-leveystila)"
#define SGX_HOVERSCAN_INFO_0_FI "Valitse kuvan maksimileveys, joka näytetään. Alemmat arvot rajaavat kuvan oikeaa puolta (352 px leveyden peleille)."
#define OPTION_VAL_352_FI "352 (Oletus)"
#define SGX_INITIAL_SCANLINE_LABEL_FI "Ensimmäinen juova"
#define SGX_INITIAL_SCANLINE_INFO_0_FI "Ensimmäinen renderöity juova. Suuremmat arvot rajaavat kuvan yläreunan."
#define OPTION_VAL_3_FI "3 (Oletus)"
#define SGX_LAST_SCANLINE_LABEL_FI "Viimeinen juova"
#define SGX_LAST_SCANLINE_INFO_0_FI "Viimeinen renderöity juova. pienemmät arvot rajaavat kuvan alareunan."
#define OPTION_VAL_242_FI "242 (Oletus)"
#define SGX_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
#define SGX_MOUSE_SENSITIVITY_INFO_0_FI "Korkeammat arvot saavat hiiren kursorin liikkumaan nopeammin."
#define OPTION_VAL_0_25_FI NULL
#define OPTION_VAL_0_50_FI NULL
#define OPTION_VAL_0_75_FI NULL
#define OPTION_VAL_1_00_FI NULL
#define OPTION_VAL_1_25_FI NULL
#define OPTION_VAL_1_50_FI NULL
#define OPTION_VAL_1_75_FI NULL
#define OPTION_VAL_2_00_FI NULL
#define OPTION_VAL_2_25_FI NULL
#define OPTION_VAL_2_50_FI NULL
#define OPTION_VAL_2_75_FI NULL
#define OPTION_VAL_3_00_FI NULL
#define OPTION_VAL_3_25_FI NULL
#define OPTION_VAL_3_50_FI NULL
#define OPTION_VAL_3_75_FI NULL
#define OPTION_VAL_4_00_FI NULL
#define OPTION_VAL_4_25_FI NULL
#define OPTION_VAL_4_50_FI NULL
#define OPTION_VAL_4_75_FI NULL
#define OPTION_VAL_5_00_FI NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_FI "Salli vastakkaiset suunnat"
#define SGX_UP_DOWN_ALLOWED_INFO_0_FI "Tämän käyttöönotto sallii painamaan / nopeasti vaihtelemaan / pitämään sekä vasemmalle että oikealle (tai ylös ja alas) samanaikaisesti. Tämä voi aiheuttaa liikkeisiin perustuvia virheitä."
#define SGX_DISABLE_SOFTRESET_LABEL_FI "Poista soft reset käytöstä (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_FI "Kun RUN ja SELECT painetaan samanaikaisesti, poistetaan molemmat painikkeet käytöstä tilapäisesti soft resettaamisen sijaan."
#define SGX_MULTITAP_LABEL_FI NULL
#define SGX_MULTITAP_INFO_0_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI NULL
#define OPTION_VAL_2_BUTTONS_FI NULL
#define OPTION_VAL_6_BUTTONS_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI NULL
#define SGX_TURBO_TOGGLE_LABEL_FI NULL
#define SGX_TURBO_TOGGLE_INFO_0_FI NULL
#define OPTION_VAL_SWITCH_FI NULL
#define OPTION_VAL_DEDICATED_FI NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_FI "Vaihtoehtoinen turbo-pikanäppäin"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FI NULL
#define SGX_TURBO_DELAY_LABEL_FI "Turbon viive"
#define SGX_TURBO_DELAY_INFO_0_FI "Säädä turbo-tulituksen välistä aikaa (kuvissa)."
#define SGX_CDIMAGECACHE_LABEL_FI "CD-levykuvan välimuisti (Uudelleenkäynnistys vaaditaan)"
#define SGX_CDIMAGECACHE_INFO_0_FI "Lataa koko levykuva muistiin käynnistyksen yhteydessä. Voi mahdollisesti lyhentää latausaikoja kasvavan käynnistysajan kustannuksella."
#define SGX_CDBIOS_LABEL_FI "CD BIOS (Uudelleenkäynnistys vaaditaan)"
#define SGX_CDBIOS_INFO_0_FI "Useimmat pelit voidaan ajaa \"System Card 3\". \"Games Express\" tarvitaan useille lisensoimattomille peleille."
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define SGX_DETECT_GEXPRESS_LABEL_FI NULL
#define SGX_DETECT_GEXPRESS_INFO_0_FI NULL
#define SGX_CDSPEED_LABEL_FI "(CD) CD-nopeus"
#define SGX_CDSPEED_LABEL_CAT_FI "CD-nopeus"
#define SGX_CDSPEED_INFO_0_FI "Korkeammat arvot mahdollistavat nopeammat latausajat, mutta voivat aiheuttaa ongelmia muutaman pelin kanssa."
#define SGX_ADPCMVOLUME_LABEL_FI "(CD) ADPCM äänenvoimakkuus %"
#define SGX_ADPCMVOLUME_LABEL_CAT_FI "ADPCM äänenvoimakkuus %"
#define SGX_ADPCMVOLUME_INFO_0_FI "Vain CD-peleille. Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define SGX_ADPCMVOLUME_INFO_1_FI "Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define SGX_CDDAVOLUME_LABEL_FI "(CD) CDDA äänenvoimakkuus %"
#define SGX_CDDAVOLUME_LABEL_CAT_FI "CDDA äänenvoimakkuus %"
#define SGX_CDPSGVOLUME_LABEL_FI "(CD) PSG äänenvoimakkuus %"
#define SGX_CDPSGVOLUME_LABEL_CAT_FI "CD PSG äänenvoimakkuus %"
#define SGX_FORCESGX_LABEL_FI NULL
#define SGX_FORCESGX_INFO_0_FI NULL
#define SGX_NOSPRITELIMIT_LABEL_FI "Poista sprite-rajoitus"
#define SGX_NOSPRITELIMIT_INFO_0_FI "Poista laitteiston 16-spriten-per-juova raja. VAROITUS: Saattaa aiheuttaa grafiikkaa virheitä joissakin peleissä."
#define SGX_OCMULTIPLIER_LABEL_FI "Prosessorin ylikellotuksen kerroin (Uudelleenkäynnistys vaaditaan)"
#define SGX_OCMULTIPLIER_INFO_0_FI "Suuremmat arvot voivat vähentää pelien hidastumista. VAROITUS: Voi aiheuttaa virheitä ja kaatumisia."

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FI,
      CATEGORY_HACKS_INFO_0_FI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FI,
      CATEGORY_CD_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_FI,
      NULL,
      SGX_PALETTE_INFO_0_FI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FI },
         { "Composite", OPTION_VAL_COMPOSITE_FI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_FI,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "6:5", OPTION_VAL_6_5_FI },
         { "4:3", OPTION_VAL_4_3_FI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_FI,
      NULL,
      SGX_HOVERSCAN_INFO_0_FI,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FI },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_FI,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_FI,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FI },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_FI,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FI },
         { "0.50", OPTION_VAL_0_50_FI },
         { "0.75", OPTION_VAL_0_75_FI },
         { "1.00", OPTION_VAL_1_00_FI },
         { "1.25", OPTION_VAL_1_25_FI },
         { "1.50", OPTION_VAL_1_50_FI },
         { "1.75", OPTION_VAL_1_75_FI },
         { "2.00", OPTION_VAL_2_00_FI },
         { "2.25", OPTION_VAL_2_25_FI },
         { "2.50", OPTION_VAL_2_50_FI },
         { "2.75", OPTION_VAL_2_75_FI },
         { "3.00", OPTION_VAL_3_00_FI },
         { "3.25", OPTION_VAL_3_25_FI },
         { "3.50", OPTION_VAL_3_50_FI },
         { "3.75", OPTION_VAL_3_75_FI },
         { "4.00", OPTION_VAL_4_00_FI },
         { "4.25", OPTION_VAL_4_25_FI },
         { "4.50", OPTION_VAL_4_50_FI },
         { "4.75", OPTION_VAL_4_75_FI },
         { "5.00", OPTION_VAL_5_00_FI },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_FI,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_FI,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_FI,
      NULL,
      SGX_MULTITAP_INFO_0_FI,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_FI,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_FI },
         { "dedicated", OPTION_VAL_DEDICATED_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_FI,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_FI,
      NULL,
      SGX_TURBO_DELAY_INFO_0_FI,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_FI,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_FI,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_FI,
      NULL,
      SGX_CDBIOS_INFO_0_FI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FI },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_FI,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_FI,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_FI,
      SGX_CDSPEED_LABEL_CAT_FI,
      SGX_CDSPEED_INFO_0_FI,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_FI,
      SGX_ADPCMVOLUME_LABEL_CAT_FI,
      SGX_ADPCMVOLUME_INFO_0_FI,
      SGX_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_FI,
      SGX_CDDAVOLUME_LABEL_CAT_FI,
      SGX_ADPCMVOLUME_INFO_0_FI,
      SGX_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_FI,
      SGX_CDPSGVOLUME_LABEL_CAT_FI,
      SGX_ADPCMVOLUME_INFO_0_FI,
      SGX_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_FI,
      NULL,
      SGX_FORCESGX_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_FI,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_FI,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Configurer les paramètres du rognage de l'affichage, du saut d'images et autres pour la sortie vidéo."
#define CATEGORY_INPUT_LABEL_FR "Entrées"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les entrées du pistolet, de la souris et du negCon."
#define CATEGORY_HACKS_LABEL_FR "Hacks d'émulation"
#define CATEGORY_HACKS_INFO_0_FR "Configurer les paramètres d'overclocking du processeur et de la précision d'émulation qui affectent les performances de bas niveau et la compatibilité."
#define CATEGORY_CD_LABEL_FR NULL
#define CATEGORY_CD_INFO_0_FR "Configurer les réglages relatifs aux jeux CD."
#define SGX_PALETTE_LABEL_FR "Palette de couleurs"
#define SGX_PALETTE_INFO_0_FR "Composite tente de recréer la sortie de la console originale et peut afficher plus de détails dans certains jeux."
#define OPTION_VAL_RGB_FR "RVB"
#define OPTION_VAL_COMPOSITE_FR NULL
#define SGX_ASPECT_RATIO_LABEL_FR "Rapport d'aspect"
#define SGX_ASPECT_RATIO_INFO_0_FR "Choisir le rapport d'aspect préféré pour le contenu. Lorsque vous utilisez des jeux qui basculent constamment entre les modes 256 et 352 et utilisez l'aspect automatique, Il est préférable de régler la largeur horizontale à 342 pour minimiser le redimensionnement et les lignes noires supplémentaires puisque cette largeur est au même rapport que le mode 256 de largeur (ou quelque chose comme ça, vous pouvez tester avec Asuka 100% qui est l'un des jeux qui bascule entre ces modes)."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_6_5_FR NULL
#define OPTION_VAL_4_3_FR NULL
#define SGX_HOVERSCAN_LABEL_FR "Surbalayage horizontal (Mode largeur 352 uniquement)"
#define SGX_HOVERSCAN_INFO_0_FR "Choisir la largeur d'image maximale à afficher. Les valeurs inférieures recadreront le côté droit de l'image (pour les jeux de 352 px de largeur)."
#define OPTION_VAL_352_FR "352 (par défaut)"
#define SGX_INITIAL_SCANLINE_LABEL_FR "Ligne de balayage initiale"
#define SGX_INITIAL_SCANLINE_INFO_0_FR "Première ligne de balayage rendue. Des valeurs plus élevées recadreront le haut de l'image."
#define OPTION_VAL_3_FR "3 (par défaut)"
#define SGX_LAST_SCANLINE_LABEL_FR "Dernière ligne de balayage"
#define SGX_LAST_SCANLINE_INFO_0_FR "Dernière ligne de balayage rendue. Des valeurs moins élevées recadreront le bas de l'image."
#define OPTION_VAL_242_FR "242 (par défaut)"
#define SGX_MOUSE_SENSITIVITY_LABEL_FR "Sensibilité de la souris"
#define SGX_MOUSE_SENSITIVITY_INFO_0_FR "Des valeurs plus élevées rendront le curseur de la souris plus rapide."
#define OPTION_VAL_0_25_FR "0,25"
#define OPTION_VAL_0_50_FR "0,50"
#define OPTION_VAL_0_75_FR "0,75"
#define OPTION_VAL_1_00_FR "1,00"
#define OPTION_VAL_1_25_FR "1,25"
#define OPTION_VAL_1_50_FR "1,50"
#define OPTION_VAL_1_75_FR "1,75"
#define OPTION_VAL_2_00_FR "2,00"
#define OPTION_VAL_2_25_FR "2,25"
#define OPTION_VAL_2_50_FR "2,50"
#define OPTION_VAL_2_75_FR "2,75"
#define OPTION_VAL_3_00_FR "3,00"
#define OPTION_VAL_3_25_FR "3,25"
#define OPTION_VAL_3_50_FR "3,50"
#define OPTION_VAL_3_75_FR "3,75"
#define OPTION_VAL_4_00_FR "4,00"
#define OPTION_VAL_4_25_FR "4,25"
#define OPTION_VAL_4_50_FR "4,50"
#define OPTION_VAL_4_75_FR "4,75"
#define OPTION_VAL_5_00_FR "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_FR "Autoriser les directions opposées"
#define SGX_UP_DOWN_ALLOWED_INFO_0_FR "L'activation de cette option permettra d'appuyer / d'alterner rapidement / de maintenir les directions gauche et droite (ou haut et bas) en même temps. Cela peut causer des bugs liés au mouvement."
#define SGX_DISABLE_SOFTRESET_LABEL_FR "Désactiver la réinitialisation logicielle (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_FR "Lorsque RUN et SELECT sont appuyés simultanément, désactiver temporairement les deux touches au lieu de réinitialiser."
#define SGX_MULTITAP_LABEL_FR "Contrôleur multitap à 5 ports"
#define SGX_MULTITAP_INFO_0_FR "Activer l'émulation multitap jusqu'à 5 joueurs. Désactiver ceci n'est nécessaire que dans certains cas (Cho Aniki par exemple)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR "Type de manette par défaut pour le joueur 1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR "Choisissez si la manette du port 1 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define OPTION_VAL_2_BUTTONS_FR "2 touches"
#define OPTION_VAL_6_BUTTONS_FR "6 touches"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR "Type de manette par défaut pour le joueur 2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR "Choisissez si la manette du port 2 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR "Type de manette par défaut pour le joueur 3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR "Choisissez si la manette du port 3 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR "Type de manette par défaut pour le joueur 4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR "Choisissez si la manette du port 4 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR "Type de manette par défaut pour le joueur 5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR "Choisissez si la manette du port 5 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define SGX_TURBO_TOGGLE_LABEL_FR "Mode des touches de raccourci du turbo"
#define SGX_TURBO_TOGGLE_INFO_0_FR "Activer les touches turbo. Les raccourcis (touches III et IV) peuvent se comporter comme des interrupteurs ou des touches turbo dédiées (maintenir enfoncées)."
#define OPTION_VAL_SWITCH_FR "Activer/désactiver"
#define OPTION_VAL_DEDICATED_FR "Dédiées"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_FR "Touches de raccourci turbo alternatives"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FR "Affecter les touches L3/R3 de la RetroManette comme raccourcis turbo au lieu des touches III et IV. Fonctionne uniquement en mode 'Activer/désactiver' et seulement tant que rien n'est assigné aux touches L3/R3. Vous pouvez éviter de remapper les touches III et IV lorsque vous passez en mode manette à 6 boutons avec cette option."
#define SGX_TURBO_DELAY_LABEL_FR "Délai du turbo"
#define SGX_TURBO_DELAY_INFO_0_FR "Ajuster le temps entre les tirs turbo (en images)."
#define SGX_CDIMAGECACHE_LABEL_FR "Mise en cache des images CD (Redémarrage requis)"
#define SGX_CDIMAGECACHE_INFO_0_FR "Charger l'image disque complète dans la mémoire au démarrage. Peut potentiellement diminuer le temps de chargement au prix d'une augmentation du temps de démarrage."
#define SGX_CDBIOS_LABEL_FR "BIOS CD (Redémarrage requis)"
#define SGX_CDBIOS_INFO_0_FR "La plupart des jeux peuvent s'exécuter sur 'System Card 3'. 'Games Express' est nécessaire pour plusieurs jeux sans licence."
#define OPTION_VAL_GAMES_EXPRESS_FR NULL
#define OPTION_VAL_SYSTEM_CARD_1_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_FR NULL
#define SGX_DETECT_GEXPRESS_LABEL_FR "Détecter les CD de Games Express (Redémarrage requis)"
#define SGX_DETECT_GEXPRESS_INFO_0_FR "Charger automatiquement le BIOS Games Express indépendamment des paramètres du BIOS CD lors du chargement des jeux CD de Games Express."
#define SGX_CDSPEED_LABEL_FR "(CD) Vitesse du CD"
#define SGX_CDSPEED_LABEL_CAT_FR "Vitesse du CD"
#define SGX_CDSPEED_INFO_0_FR "Des valeurs plus élevées permettent des temps de chargement plus rapides, mais peuvent causer des problèmes avec certains jeux."
#define SGX_ADPCMVOLUME_LABEL_FR "(CD) Volume ADPCM (%)"
#define SGX_ADPCMVOLUME_LABEL_CAT_FR "Volume ADPCM (%)"
#define SGX_ADPCMVOLUME_INFO_0_FR "Jeux CD uniquement. Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) du signal."
#define SGX_ADPCMVOLUME_INFO_1_FR "Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) du signal."
#define SGX_CDDAVOLUME_LABEL_FR "(CD) Volume CDDA (%)"
#define SGX_CDDAVOLUME_LABEL_CAT_FR "Volume CDDA (%)"
#define SGX_CDPSGVOLUME_LABEL_FR "(CD) Volume PSG (%)"
#define SGX_CDPSGVOLUME_LABEL_CAT_FR "Volume PSG CD %"
#define SGX_FORCESGX_LABEL_FR "Forcer l'émulation de la SuperGrafx (Redémarrage requis)"
#define SGX_FORCESGX_INFO_0_FR "Cette option est utile pour lancer des jeux homebrew ou pour isoler des jeux qui ne fonctionneront pas en mode SuperGrafx (comme Space Harrier). Les sauvegardes instantanées ne sont pas compatibles avec chaque mode. Il est préférable de laisser cette option désactivée sauf si nécessaire. Les jeux connus de SuperGrafx (comme Dai-Makaimura, Aldyns) passeront automatiquement à SuperGrafx quelle que soit cette option."
#define SGX_NOSPRITELIMIT_LABEL_FR "Aucune limite de sprites"
#define SGX_NOSPRITELIMIT_INFO_0_FR "Supprimer la limite matérielle de 16 sprites par ligne de balayage. ATTENTION : peut causer des problèmes graphiques sur certains jeux."
#define SGX_OCMULTIPLIER_LABEL_FR "Multiplicateur d'overclocking du processeur (Redémarrage requis)"
#define SGX_OCMULTIPLIER_INFO_0_FR "Des valeurs plus élevées peuvent réduire les ralentissements dans les jeux. ATTENTION : peut causer des bugs et des plantages."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FR,
      CATEGORY_HACKS_INFO_0_FR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FR,
      CATEGORY_CD_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_FR,
      NULL,
      SGX_PALETTE_INFO_0_FR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FR },
         { "Composite", OPTION_VAL_COMPOSITE_FR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_FR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "6:5", OPTION_VAL_6_5_FR },
         { "4:3", OPTION_VAL_4_3_FR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_FR,
      NULL,
      SGX_HOVERSCAN_INFO_0_FR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_FR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_FR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_FR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FR },
         { "0.50", OPTION_VAL_0_50_FR },
         { "0.75", OPTION_VAL_0_75_FR },
         { "1.00", OPTION_VAL_1_00_FR },
         { "1.25", OPTION_VAL_1_25_FR },
         { "1.50", OPTION_VAL_1_50_FR },
         { "1.75", OPTION_VAL_1_75_FR },
         { "2.00", OPTION_VAL_2_00_FR },
         { "2.25", OPTION_VAL_2_25_FR },
         { "2.50", OPTION_VAL_2_50_FR },
         { "2.75", OPTION_VAL_2_75_FR },
         { "3.00", OPTION_VAL_3_00_FR },
         { "3.25", OPTION_VAL_3_25_FR },
         { "3.50", OPTION_VAL_3_50_FR },
         { "3.75", OPTION_VAL_3_75_FR },
         { "4.00", OPTION_VAL_4_00_FR },
         { "4.25", OPTION_VAL_4_25_FR },
         { "4.50", OPTION_VAL_4_50_FR },
         { "4.75", OPTION_VAL_4_75_FR },
         { "5.00", OPTION_VAL_5_00_FR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_FR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_FR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_FR,
      NULL,
      SGX_MULTITAP_INFO_0_FR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_FR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_FR },
         { "dedicated", OPTION_VAL_DEDICATED_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_FR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_FR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_FR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_FR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_FR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_FR,
      NULL,
      SGX_CDBIOS_INFO_0_FR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_FR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_FR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_FR,
      SGX_CDSPEED_LABEL_CAT_FR,
      SGX_CDSPEED_INFO_0_FR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_FR,
      SGX_ADPCMVOLUME_LABEL_CAT_FR,
      SGX_ADPCMVOLUME_INFO_0_FR,
      SGX_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_FR,
      SGX_CDDAVOLUME_LABEL_CAT_FR,
      SGX_ADPCMVOLUME_INFO_0_FR,
      SGX_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_FR,
      SGX_CDPSGVOLUME_LABEL_CAT_FR,
      SGX_ADPCMVOLUME_INFO_0_FR,
      SGX_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_FR,
      NULL,
      SGX_FORCESGX_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_FR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_FR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL "1Configura o recorte de visualización, o salto de cadros e outros parámetros de saída da imaxe."
#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL "Configura a entrada de pistola lixeira, rato e NegCon."
#define CATEGORY_HACKS_LABEL_GL "Hacks de emulación"
#define CATEGORY_HACKS_INFO_0_GL "Configurar os parámetros do overclocking e a precisión da emulación do procesador que afecten ó rendemento e á compatibilidade de baixo nivel."
#define CATEGORY_CD_LABEL_GL NULL
#define CATEGORY_CD_INFO_0_GL "Configura axustes relacionados cos xogos de CD."
#define SGX_PALETTE_LABEL_GL "Paleta de cores"
#define SGX_PALETTE_INFO_0_GL "Composite tenta recrear a saída orixinal da consola e pode mostrar máis detalles nalgúns xogos."
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_COMPOSITE_GL "Composto"
#define SGX_ASPECT_RATIO_LABEL_GL "Relación de aspecto"
#define SGX_ASPECT_RATIO_INFO_0_GL "Escolla a relación de aspecto do contido preferida. Cando se usan xogos que cambian constantemente entre os modos 256 e 352 e se usan o aspecto automático, o mellor é establecer o ancho horizontal en 342 para minimizar o cambio de tamaño e as liñas negras adicionais xa que este ancho está en proporción ao modo de ancho 256 (ou algo así, só proba. con Asuka 100%, que é un dos xogos que cambian entre estes modos)."
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_6_5_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define SGX_HOVERSCAN_LABEL_GL "Overscan horizontal (só modo de ancho 352)"
#define SGX_HOVERSCAN_INFO_0_GL "Escolla o ancho máximo da imaxe que se mostrará. Os valores máis baixos recortarán o lado dereito da imaxe (para xogos de 352 px de ancho)."
#define OPTION_VAL_352_GL "352 (predeterminado)"
#define SGX_INITIAL_SCANLINE_LABEL_GL "Liña de exploración inicial"
#define SGX_INITIAL_SCANLINE_INFO_0_GL "Primeira liña de escaneo renderizada. Os valores máis altos recortarán a parte superior da imaxe."
#define OPTION_VAL_3_GL "3 (predeterminado)"
#define SGX_LAST_SCANLINE_LABEL_GL "Última liña de exploración"
#define SGX_LAST_SCANLINE_INFO_0_GL "Última liña de exploración renderizada. Os valores máis baixos recortarán a parte inferior da imaxe."
#define OPTION_VAL_242_GL "242 (predeterminado)"
#define SGX_MOUSE_SENSITIVITY_LABEL_GL "Sensibilidade do rato"
#define SGX_MOUSE_SENSITIVITY_INFO_0_GL "Os valores máis altos farán que o cursor do rato se mova máis rápido."
#define OPTION_VAL_0_25_GL NULL
#define OPTION_VAL_0_50_GL NULL
#define OPTION_VAL_0_75_GL NULL
#define OPTION_VAL_1_00_GL NULL
#define OPTION_VAL_1_25_GL NULL
#define OPTION_VAL_1_50_GL NULL
#define OPTION_VAL_1_75_GL NULL
#define OPTION_VAL_2_00_GL NULL
#define OPTION_VAL_2_25_GL NULL
#define OPTION_VAL_2_50_GL NULL
#define OPTION_VAL_2_75_GL NULL
#define OPTION_VAL_3_00_GL NULL
#define OPTION_VAL_3_25_GL NULL
#define OPTION_VAL_3_50_GL NULL
#define OPTION_VAL_3_75_GL NULL
#define OPTION_VAL_4_00_GL NULL
#define OPTION_VAL_4_25_GL NULL
#define OPTION_VAL_4_50_GL NULL
#define OPTION_VAL_4_75_GL NULL
#define OPTION_VAL_5_00_GL NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_GL "Permitir direccións opostas"
#define SGX_UP_DOWN_ALLOWED_INFO_0_GL "Activar isto permitirá premer / alternar rapidamente / manter as dúas direccións esquerda e dereita (ou arriba e abaixo) ao mesmo tempo. Isto pode causar fallos baseados no movemento."
#define SGX_DISABLE_SOFTRESET_LABEL_GL "Desactivar reinicio suave (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_GL "Cando se preme RUN e SELECT simultaneamente, desactive os dous botóns temporalmente en lugar de restablecer."
#define SGX_MULTITAP_LABEL_GL "Controlador multitap de 5 portos"
#define SGX_MULTITAP_INFO_0_GL "Activa a emulación multitap de ata 5 xogadores. Desactivar isto só é necesario nalgúns casos (por exemplo, Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL "P1 Tipo de Joypad predeterminado"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL "Escolla se o mando do porto 1 debe ser de 2 ou 6 botóns por defecto. Esta opción só se aplica cando se inicia o núcleo, se queres cambiar mentres o contido está en execución, usa o botón \"Cambio de modo\". NOTA: O mando de 6 botóns pode ter comportamentos estraños en xogos non compatibles."
#define OPTION_VAL_2_BUTTONS_GL "2 Botóns"
#define OPTION_VAL_6_BUTTONS_GL "6 Botóns"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL "P2 Tipo de Joypad predeterminado"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL "Escolla se o mando do porto 2 debe ter 2 ou 6 botóns por defecto. Esta opción só se aplica cando se inicia o núcleo, se queres cambiar mentres o contido está en execución, usa o botón \"Cambio de modo\". NOTA: O mando de 6 botóns pode ter comportamentos estraños en xogos non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL "P3 Tipo de Joypad predeterminado"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL "Escolla se o mando do porto 3 debe ter 2 ou 6 botóns por defecto. Esta opción só se aplica cando se inicia o núcleo, se queres cambiar mentres o contido está en execución, usa o botón \"Cambio de modo\". NOTA: O mando de 6 botóns pode ter comportamentos estraños en xogos non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL "P4 Tipo de Joypad predeterminado"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL "Escolla se o mando do porto 4 debe ter 2 ou 6 botóns por defecto. Esta opción só se aplica cando se inicia o núcleo, se queres cambiar mentres o contido está en execución, usa o botón \"Cambio de modo\". NOTA: O mando de 6 botóns pode ter comportamentos estraños en xogos non compatibles."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL "P5 Tipo de Joypad predeterminado"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL "Escolla se o mando do porto 5 debe ter 2 ou 6 botóns por defecto. Esta opción só se aplica cando se inicia o núcleo, se queres cambiar mentres o contido está en execución, usa o botón \"Cambio de modo\". NOTA: O mando de 6 botóns pode ter comportamentos estraños en xogos non compatibles."
#define SGX_TURBO_TOGGLE_LABEL_GL "Modo de teclas rápidas Turbo"
#define SGX_TURBO_TOGGLE_INFO_0_GL "Activa os botóns turbo. As teclas de acceso rápido (botóns III e IV) poden comportarse como interruptores de conmutación ou como botóns turbo dedicados (manteña para usar)."
#define OPTION_VAL_SWITCH_GL "Alternar"
#define OPTION_VAL_DEDICATED_GL "Dedicado"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_GL "Tecla de acceso rápido Turbo alternativa"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_GL "Asigne os botóns L3/R3 de RetroPad como teclas de acceso rápido turbo en lugar dos botóns III e IV. Funciona só no modo \"Alterar\" e só sempre que non teña nada asignado aos botóns L3/R3. Con isto, pode evitar reasignar os botóns III e IV ao cambiar ao modo de controlador de 6 botóns."
#define SGX_TURBO_DELAY_LABEL_GL "Retardo Turbo"
#define SGX_TURBO_DELAY_INFO_0_GL "Axuste o tempo entre o lume do turbo (en fotogramas)."
#define SGX_CDIMAGECACHE_LABEL_GL "Caché de imaxes de CD (necesario reiniciar)"
#define SGX_CDIMAGECACHE_INFO_0_GL "Carga a imaxe completa na memoria ao iniciar. Pode diminuír os tempos de carga a costa dun aumento do tempo de inicio."
#define SGX_CDBIOS_LABEL_GL "CD BIOS (reinicio necesario)"
#define SGX_CDBIOS_INFO_0_GL "A maioría dos xogos poden executarse na \"Tarxeta do sistema 3\". Necesítase 'Games Express' para varios xogos sen licenza."
#define OPTION_VAL_GAMES_EXPRESS_GL "Xogos Express"
#define OPTION_VAL_SYSTEM_CARD_1_GL "Tarxeta do sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_GL "Tarxeta do sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_GL "Tarxeta do sistema 3"
#define SGX_DETECT_GEXPRESS_LABEL_GL "Detectar o CD de xogos Express (reinicio necesario)"
#define SGX_DETECT_GEXPRESS_INFO_0_GL "Carga automaticamente a BIOS de Games Express independentemente da configuración da BIOS do CD ao cargar xogos de CD de Games Express."
#define SGX_CDSPEED_LABEL_GL "(CD) Velocidade do CD"
#define SGX_CDSPEED_LABEL_CAT_GL "Velocidade do CD"
#define SGX_CDSPEED_INFO_0_GL "Os valores máis altos permiten tempos de carga máis rápidos, pero poden causar problemas con un par de xogos."
#define SGX_ADPCMVOLUME_LABEL_GL "(CD) % volume ADPCM"
#define SGX_ADPCMVOLUME_LABEL_CAT_GL "% volume ADPCM"
#define SGX_ADPCMVOLUME_INFO_0_GL "Só xogo en CD. Axustar este control de volume demasiado alto pode provocar recortes de mostra."
#define SGX_ADPCMVOLUME_INFO_1_GL "Axustar este control de volume demasiado alto pode provocar recortes de mostra."
#define SGX_CDDAVOLUME_LABEL_GL "(CD) CDDA % volume"
#define SGX_CDDAVOLUME_LABEL_CAT_GL "% volume CDDA"
#define SGX_CDPSGVOLUME_LABEL_GL "(CD) PSG Volumen %"
#define SGX_CDPSGVOLUME_LABEL_CAT_GL "% volume do CD PSG"
#define SGX_FORCESGX_LABEL_GL "Forzar a emulación de SuperGrafx (reinicio necesario)"
#define SGX_FORCESGX_INFO_0_GL "Isto é útil para executar xogos homebrew ou para illar xogos que non se executarán no modo SuperGrafx (como Space Harrier). Os estados de gardar non son compatibles con cada modo. É mellor desactivar esta opción a menos que sexa necesario. Os xogos SuperGrafx coñecidos (como Dai-Makaimura, Aldyns) cambiarán automaticamente a SuperGrafx independentemente desta opción."
#define SGX_NOSPRITELIMIT_LABEL_GL "Sen límite de sprites"
#define SGX_NOSPRITELIMIT_INFO_0_GL "Elimina o límite de hardware de 16 sprites por liña de exploración. COIDADO: pode provocar fallos gráficos nalgúns xogos."
#define SGX_OCMULTIPLIER_LABEL_GL "Multiplicador de overclock da CPU (necesario reiniciar)"
#define SGX_OCMULTIPLIER_INFO_0_GL "Os valores máis altos poden reducir as desaceleracións nos xogos. AVISO: pode causar fallos e fallos."

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_GL,
      CATEGORY_HACKS_INFO_0_GL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_GL,
      CATEGORY_CD_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_GL,
      NULL,
      SGX_PALETTE_INFO_0_GL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_GL },
         { "Composite", OPTION_VAL_COMPOSITE_GL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_GL,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "6:5", OPTION_VAL_6_5_GL },
         { "4:3", OPTION_VAL_4_3_GL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_GL,
      NULL,
      SGX_HOVERSCAN_INFO_0_GL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_GL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_GL,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_GL,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_GL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_GL,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_GL },
         { "0.50", OPTION_VAL_0_50_GL },
         { "0.75", OPTION_VAL_0_75_GL },
         { "1.00", OPTION_VAL_1_00_GL },
         { "1.25", OPTION_VAL_1_25_GL },
         { "1.50", OPTION_VAL_1_50_GL },
         { "1.75", OPTION_VAL_1_75_GL },
         { "2.00", OPTION_VAL_2_00_GL },
         { "2.25", OPTION_VAL_2_25_GL },
         { "2.50", OPTION_VAL_2_50_GL },
         { "2.75", OPTION_VAL_2_75_GL },
         { "3.00", OPTION_VAL_3_00_GL },
         { "3.25", OPTION_VAL_3_25_GL },
         { "3.50", OPTION_VAL_3_50_GL },
         { "3.75", OPTION_VAL_3_75_GL },
         { "4.00", OPTION_VAL_4_00_GL },
         { "4.25", OPTION_VAL_4_25_GL },
         { "4.50", OPTION_VAL_4_50_GL },
         { "4.75", OPTION_VAL_4_75_GL },
         { "5.00", OPTION_VAL_5_00_GL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_GL,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_GL,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_GL,
      NULL,
      SGX_MULTITAP_INFO_0_GL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_GL,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_GL },
         { "dedicated", OPTION_VAL_DEDICATED_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_GL,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_GL,
      NULL,
      SGX_TURBO_DELAY_INFO_0_GL,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_GL,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_GL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_GL,
      NULL,
      SGX_CDBIOS_INFO_0_GL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_GL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_GL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_GL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_GL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_GL,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_GL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_GL,
      SGX_CDSPEED_LABEL_CAT_GL,
      SGX_CDSPEED_INFO_0_GL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_GL,
      SGX_ADPCMVOLUME_LABEL_CAT_GL,
      SGX_ADPCMVOLUME_INFO_0_GL,
      SGX_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_GL,
      SGX_CDDAVOLUME_LABEL_CAT_GL,
      SGX_ADPCMVOLUME_INFO_0_GL,
      SGX_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_GL,
      SGX_CDPSGVOLUME_LABEL_CAT_GL,
      SGX_ADPCMVOLUME_INFO_0_GL,
      SGX_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_GL,
      NULL,
      SGX_FORCESGX_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_GL,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_GL,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE "קלט"
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_HACKS_LABEL_HE NULL
#define CATEGORY_HACKS_INFO_0_HE NULL
#define CATEGORY_CD_LABEL_HE NULL
#define CATEGORY_CD_INFO_0_HE NULL
#define SGX_PALETTE_LABEL_HE NULL
#define SGX_PALETTE_INFO_0_HE NULL
#define OPTION_VAL_RGB_HE NULL
#define OPTION_VAL_COMPOSITE_HE NULL
#define SGX_ASPECT_RATIO_LABEL_HE "יחס גובה-רוחב"
#define SGX_ASPECT_RATIO_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_6_5_HE NULL
#define OPTION_VAL_4_3_HE NULL
#define SGX_HOVERSCAN_LABEL_HE NULL
#define SGX_HOVERSCAN_INFO_0_HE NULL
#define OPTION_VAL_352_HE NULL
#define SGX_INITIAL_SCANLINE_LABEL_HE NULL
#define SGX_INITIAL_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_3_HE NULL
#define SGX_LAST_SCANLINE_LABEL_HE NULL
#define SGX_LAST_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_242_HE NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_HE NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_HE NULL
#define OPTION_VAL_0_25_HE NULL
#define OPTION_VAL_0_50_HE NULL
#define OPTION_VAL_0_75_HE NULL
#define OPTION_VAL_1_00_HE NULL
#define OPTION_VAL_1_25_HE NULL
#define OPTION_VAL_1_50_HE NULL
#define OPTION_VAL_1_75_HE NULL
#define OPTION_VAL_2_00_HE NULL
#define OPTION_VAL_2_25_HE NULL
#define OPTION_VAL_2_50_HE NULL
#define OPTION_VAL_2_75_HE NULL
#define OPTION_VAL_3_00_HE NULL
#define OPTION_VAL_3_25_HE NULL
#define OPTION_VAL_3_50_HE NULL
#define OPTION_VAL_3_75_HE NULL
#define OPTION_VAL_4_00_HE NULL
#define OPTION_VAL_4_25_HE NULL
#define OPTION_VAL_4_50_HE NULL
#define OPTION_VAL_4_75_HE NULL
#define OPTION_VAL_5_00_HE NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_HE NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_HE NULL
#define SGX_DISABLE_SOFTRESET_LABEL_HE NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_HE NULL
#define SGX_MULTITAP_LABEL_HE NULL
#define SGX_MULTITAP_INFO_0_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE NULL
#define OPTION_VAL_2_BUTTONS_HE NULL
#define OPTION_VAL_6_BUTTONS_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE NULL
#define SGX_TURBO_TOGGLE_LABEL_HE NULL
#define SGX_TURBO_TOGGLE_INFO_0_HE NULL
#define OPTION_VAL_SWITCH_HE NULL
#define OPTION_VAL_DEDICATED_HE NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_HE NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HE NULL
#define SGX_TURBO_DELAY_LABEL_HE NULL
#define SGX_TURBO_DELAY_INFO_0_HE NULL
#define SGX_CDIMAGECACHE_LABEL_HE NULL
#define SGX_CDIMAGECACHE_INFO_0_HE NULL
#define SGX_CDBIOS_LABEL_HE NULL
#define SGX_CDBIOS_INFO_0_HE NULL
#define OPTION_VAL_GAMES_EXPRESS_HE NULL
#define OPTION_VAL_SYSTEM_CARD_1_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_HE NULL
#define SGX_DETECT_GEXPRESS_LABEL_HE NULL
#define SGX_DETECT_GEXPRESS_INFO_0_HE NULL
#define SGX_CDSPEED_LABEL_HE NULL
#define SGX_CDSPEED_LABEL_CAT_HE NULL
#define SGX_CDSPEED_INFO_0_HE NULL
#define SGX_ADPCMVOLUME_LABEL_HE NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_HE NULL
#define SGX_ADPCMVOLUME_INFO_0_HE NULL
#define SGX_ADPCMVOLUME_INFO_1_HE NULL
#define SGX_CDDAVOLUME_LABEL_HE NULL
#define SGX_CDDAVOLUME_LABEL_CAT_HE NULL
#define SGX_CDPSGVOLUME_LABEL_HE NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_HE NULL
#define SGX_FORCESGX_LABEL_HE NULL
#define SGX_FORCESGX_INFO_0_HE NULL
#define SGX_NOSPRITELIMIT_LABEL_HE NULL
#define SGX_NOSPRITELIMIT_INFO_0_HE NULL
#define SGX_OCMULTIPLIER_LABEL_HE NULL
#define SGX_OCMULTIPLIER_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HE,
      CATEGORY_HACKS_INFO_0_HE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HE,
      CATEGORY_CD_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_HE,
      NULL,
      SGX_PALETTE_INFO_0_HE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HE },
         { "Composite", OPTION_VAL_COMPOSITE_HE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_HE,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "6:5", OPTION_VAL_6_5_HE },
         { "4:3", OPTION_VAL_4_3_HE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_HE,
      NULL,
      SGX_HOVERSCAN_INFO_0_HE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_HE,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_HE,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_HE,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HE },
         { "0.50", OPTION_VAL_0_50_HE },
         { "0.75", OPTION_VAL_0_75_HE },
         { "1.00", OPTION_VAL_1_00_HE },
         { "1.25", OPTION_VAL_1_25_HE },
         { "1.50", OPTION_VAL_1_50_HE },
         { "1.75", OPTION_VAL_1_75_HE },
         { "2.00", OPTION_VAL_2_00_HE },
         { "2.25", OPTION_VAL_2_25_HE },
         { "2.50", OPTION_VAL_2_50_HE },
         { "2.75", OPTION_VAL_2_75_HE },
         { "3.00", OPTION_VAL_3_00_HE },
         { "3.25", OPTION_VAL_3_25_HE },
         { "3.50", OPTION_VAL_3_50_HE },
         { "3.75", OPTION_VAL_3_75_HE },
         { "4.00", OPTION_VAL_4_00_HE },
         { "4.25", OPTION_VAL_4_25_HE },
         { "4.50", OPTION_VAL_4_50_HE },
         { "4.75", OPTION_VAL_4_75_HE },
         { "5.00", OPTION_VAL_5_00_HE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_HE,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_HE,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_HE,
      NULL,
      SGX_MULTITAP_INFO_0_HE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_HE,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_HE },
         { "dedicated", OPTION_VAL_DEDICATED_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_HE,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_HE,
      NULL,
      SGX_TURBO_DELAY_INFO_0_HE,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_HE,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_HE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_HE,
      NULL,
      SGX_CDBIOS_INFO_0_HE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_HE,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_HE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_HE,
      SGX_CDSPEED_LABEL_CAT_HE,
      SGX_CDSPEED_INFO_0_HE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_HE,
      SGX_ADPCMVOLUME_LABEL_CAT_HE,
      SGX_ADPCMVOLUME_INFO_0_HE,
      SGX_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_HE,
      SGX_CDDAVOLUME_LABEL_CAT_HE,
      SGX_ADPCMVOLUME_INFO_0_HE,
      SGX_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_HE,
      SGX_CDPSGVOLUME_LABEL_CAT_HE,
      SGX_ADPCMVOLUME_INFO_0_HE,
      SGX_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_HE,
      NULL,
      SGX_FORCESGX_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_HE,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_HE,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_VIDEO_LABEL_HR NULL
#define CATEGORY_VIDEO_INFO_0_HR NULL
#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define CATEGORY_HACKS_LABEL_HR NULL
#define CATEGORY_HACKS_INFO_0_HR NULL
#define CATEGORY_CD_LABEL_HR NULL
#define CATEGORY_CD_INFO_0_HR NULL
#define SGX_PALETTE_LABEL_HR NULL
#define SGX_PALETTE_INFO_0_HR NULL
#define OPTION_VAL_RGB_HR NULL
#define OPTION_VAL_COMPOSITE_HR NULL
#define SGX_ASPECT_RATIO_LABEL_HR "Omjer slike"
#define SGX_ASPECT_RATIO_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define OPTION_VAL_6_5_HR NULL
#define OPTION_VAL_4_3_HR NULL
#define SGX_HOVERSCAN_LABEL_HR NULL
#define SGX_HOVERSCAN_INFO_0_HR NULL
#define OPTION_VAL_352_HR NULL
#define SGX_INITIAL_SCANLINE_LABEL_HR NULL
#define SGX_INITIAL_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_3_HR NULL
#define SGX_LAST_SCANLINE_LABEL_HR NULL
#define SGX_LAST_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_242_HR NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_HR NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_HR NULL
#define OPTION_VAL_0_25_HR NULL
#define OPTION_VAL_0_50_HR NULL
#define OPTION_VAL_0_75_HR NULL
#define OPTION_VAL_1_00_HR NULL
#define OPTION_VAL_1_25_HR NULL
#define OPTION_VAL_1_50_HR NULL
#define OPTION_VAL_1_75_HR NULL
#define OPTION_VAL_2_00_HR NULL
#define OPTION_VAL_2_25_HR NULL
#define OPTION_VAL_2_50_HR NULL
#define OPTION_VAL_2_75_HR NULL
#define OPTION_VAL_3_00_HR NULL
#define OPTION_VAL_3_25_HR NULL
#define OPTION_VAL_3_50_HR NULL
#define OPTION_VAL_3_75_HR NULL
#define OPTION_VAL_4_00_HR NULL
#define OPTION_VAL_4_25_HR NULL
#define OPTION_VAL_4_50_HR NULL
#define OPTION_VAL_4_75_HR NULL
#define OPTION_VAL_5_00_HR NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_HR NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_HR NULL
#define SGX_DISABLE_SOFTRESET_LABEL_HR NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_HR NULL
#define SGX_MULTITAP_LABEL_HR NULL
#define SGX_MULTITAP_INFO_0_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR NULL
#define OPTION_VAL_2_BUTTONS_HR NULL
#define OPTION_VAL_6_BUTTONS_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR NULL
#define SGX_TURBO_TOGGLE_LABEL_HR NULL
#define SGX_TURBO_TOGGLE_INFO_0_HR NULL
#define OPTION_VAL_SWITCH_HR NULL
#define OPTION_VAL_DEDICATED_HR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_HR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HR NULL
#define SGX_TURBO_DELAY_LABEL_HR NULL
#define SGX_TURBO_DELAY_INFO_0_HR NULL
#define SGX_CDIMAGECACHE_LABEL_HR NULL
#define SGX_CDIMAGECACHE_INFO_0_HR NULL
#define SGX_CDBIOS_LABEL_HR NULL
#define SGX_CDBIOS_INFO_0_HR NULL
#define OPTION_VAL_GAMES_EXPRESS_HR NULL
#define OPTION_VAL_SYSTEM_CARD_1_HR NULL
#define OPTION_VAL_SYSTEM_CARD_2_HR NULL
#define OPTION_VAL_SYSTEM_CARD_3_HR NULL
#define SGX_DETECT_GEXPRESS_LABEL_HR NULL
#define SGX_DETECT_GEXPRESS_INFO_0_HR NULL
#define SGX_CDSPEED_LABEL_HR NULL
#define SGX_CDSPEED_LABEL_CAT_HR NULL
#define SGX_CDSPEED_INFO_0_HR NULL
#define SGX_ADPCMVOLUME_LABEL_HR NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_HR NULL
#define SGX_ADPCMVOLUME_INFO_0_HR NULL
#define SGX_ADPCMVOLUME_INFO_1_HR NULL
#define SGX_CDDAVOLUME_LABEL_HR NULL
#define SGX_CDDAVOLUME_LABEL_CAT_HR NULL
#define SGX_CDPSGVOLUME_LABEL_HR NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_HR NULL
#define SGX_FORCESGX_LABEL_HR NULL
#define SGX_FORCESGX_INFO_0_HR NULL
#define SGX_NOSPRITELIMIT_LABEL_HR NULL
#define SGX_NOSPRITELIMIT_INFO_0_HR NULL
#define SGX_OCMULTIPLIER_LABEL_HR NULL
#define SGX_OCMULTIPLIER_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HR,
      CATEGORY_VIDEO_INFO_0_HR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HR,
      CATEGORY_HACKS_INFO_0_HR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HR,
      CATEGORY_CD_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_HR,
      NULL,
      SGX_PALETTE_INFO_0_HR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HR },
         { "Composite", OPTION_VAL_COMPOSITE_HR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_HR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_HR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HR },
         { "6:5", OPTION_VAL_6_5_HR },
         { "4:3", OPTION_VAL_4_3_HR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_HR,
      NULL,
      SGX_HOVERSCAN_INFO_0_HR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_HR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_HR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_HR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HR },
         { "0.50", OPTION_VAL_0_50_HR },
         { "0.75", OPTION_VAL_0_75_HR },
         { "1.00", OPTION_VAL_1_00_HR },
         { "1.25", OPTION_VAL_1_25_HR },
         { "1.50", OPTION_VAL_1_50_HR },
         { "1.75", OPTION_VAL_1_75_HR },
         { "2.00", OPTION_VAL_2_00_HR },
         { "2.25", OPTION_VAL_2_25_HR },
         { "2.50", OPTION_VAL_2_50_HR },
         { "2.75", OPTION_VAL_2_75_HR },
         { "3.00", OPTION_VAL_3_00_HR },
         { "3.25", OPTION_VAL_3_25_HR },
         { "3.50", OPTION_VAL_3_50_HR },
         { "3.75", OPTION_VAL_3_75_HR },
         { "4.00", OPTION_VAL_4_00_HR },
         { "4.25", OPTION_VAL_4_25_HR },
         { "4.50", OPTION_VAL_4_50_HR },
         { "4.75", OPTION_VAL_4_75_HR },
         { "5.00", OPTION_VAL_5_00_HR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_HR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_HR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_HR,
      NULL,
      SGX_MULTITAP_INFO_0_HR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_HR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_HR },
         { "dedicated", OPTION_VAL_DEDICATED_HR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_HR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_HR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_HR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_HR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_HR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_HR,
      NULL,
      SGX_CDBIOS_INFO_0_HR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_HR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_HR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_HR,
      SGX_CDSPEED_LABEL_CAT_HR,
      SGX_CDSPEED_INFO_0_HR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_HR,
      SGX_ADPCMVOLUME_LABEL_CAT_HR,
      SGX_ADPCMVOLUME_INFO_0_HR,
      SGX_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_HR,
      SGX_CDDAVOLUME_LABEL_CAT_HR,
      SGX_ADPCMVOLUME_INFO_0_HR,
      SGX_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_HR,
      SGX_CDPSGVOLUME_LABEL_CAT_HR,
      SGX_ADPCMVOLUME_INFO_0_HR,
      SGX_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_HR,
      NULL,
      SGX_FORCESGX_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_HR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_HR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Kép"
#define CATEGORY_VIDEO_INFO_0_HU "Képarány, képvágás, és más képkimeneti paraméterek."
#define CATEGORY_INPUT_LABEL_HU "Bevitel"
#define CATEGORY_INPUT_INFO_0_HU "A fénypisztoly, az egér és a NegCon bemeneti beállításai."
#define CATEGORY_HACKS_LABEL_HU "Emulációs trükkök"
#define CATEGORY_HACKS_INFO_0_HU "A processzor túlhajtás és az emuláció pontosságának beállításai, amelyek befolyásolják az alacsonyszintű teljesítményt és a kompatibilitást."
#define CATEGORY_CD_LABEL_HU NULL
#define CATEGORY_CD_INFO_0_HU "CD játékok beállításai."
#define SGX_PALETTE_LABEL_HU "Színpaletta"
#define SGX_PALETTE_INFO_0_HU "A kompozit az eredeti konzol kimenetét kísérli meg utánozni, és néhány játékban több részletet mutathat meg."
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU "Kompozit"
#define SGX_ASPECT_RATIO_LABEL_HU "Képarány"
#define SGX_ASPECT_RATIO_INFO_0_HU "A tartalom kívánt képaránya. Automatikus arány használatakor olyan játékoknál, amelyek folyamatosan kapcsolgatnak a 256 és 352 módok közt, legjobb a vízszintes szélességet 342-re állítani, az átméretezés és külön fekete sorok minimalizálása érdekében, mivel ez a szélesség arányos a 256 széles móddal (érdemes kipróbálni az Asuka 100%-kal, ami az ilyen módkapcsolgatós játékok egyike)."
#define OPTION_VAL_AUTO_HU "Automatikus"
#define OPTION_VAL_6_5_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define SGX_HOVERSCAN_LABEL_HU "Vízszintes overscan (csak 352 széles módban)"
#define SGX_HOVERSCAN_INFO_0_HU "A maximális megjelenő képszélesség. Alacsonyabb értékeknél a kép jobb szélét vágja le (a 352 pixel széles játékoknál)."
#define OPTION_VAL_352_HU "352 (alapértelmezett)"
#define SGX_INITIAL_SCANLINE_LABEL_HU "Kezdő scanline"
#define SGX_INITIAL_SCANLINE_INFO_0_HU "Az első megjelenített scanline. Nagyobb értékek többet vágnak a kép tetejéből."
#define OPTION_VAL_3_HU "3 (alapértelmezett)"
#define SGX_LAST_SCANLINE_LABEL_HU "Utolsó scanline"
#define SGX_LAST_SCANLINE_INFO_0_HU "Az utolsó megjelenített scanline. Nagyobb értékek többet vágnak a kép aljából."
#define OPTION_VAL_242_HU "242 (alapértelmezett)"
#define SGX_MOUSE_SENSITIVITY_LABEL_HU "Egér érzékenysége"
#define SGX_MOUSE_SENSITIVITY_INFO_0_HU "Magasabb értékek az egérkurzor gyorsabb mozgását eredményezik."
#define OPTION_VAL_0_25_HU NULL
#define OPTION_VAL_0_50_HU NULL
#define OPTION_VAL_0_75_HU NULL
#define OPTION_VAL_1_00_HU NULL
#define OPTION_VAL_1_25_HU NULL
#define OPTION_VAL_1_50_HU NULL
#define OPTION_VAL_1_75_HU NULL
#define OPTION_VAL_2_00_HU NULL
#define OPTION_VAL_2_25_HU NULL
#define OPTION_VAL_2_50_HU NULL
#define OPTION_VAL_2_75_HU NULL
#define OPTION_VAL_3_00_HU NULL
#define OPTION_VAL_3_25_HU NULL
#define OPTION_VAL_3_50_HU NULL
#define OPTION_VAL_3_75_HU NULL
#define OPTION_VAL_4_00_HU NULL
#define OPTION_VAL_4_25_HU NULL
#define OPTION_VAL_4_50_HU NULL
#define OPTION_VAL_4_75_HU NULL
#define OPTION_VAL_5_00_HU NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_HU "Ellentétes irányok engedélyezése"
#define SGX_UP_DOWN_ALLOWED_INFO_0_HU "A jobb és bal (vagy fel és le) irányok egyidejű/gyorsan váltakozó lenyomásának vagy nyomva tartásának engedélyezése. Hibákat okozhat a mozgatásban."
#define SGX_DISABLE_SOFTRESET_LABEL_HU "Soft reset letiltása (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_HU "A RUN és SELECT gombok egyidejű megnyomásakor mindkét gomb ideiglenes letiltása, reset helyett."
#define SGX_MULTITAP_LABEL_HU "Multitap 5 csatlakozós kontroller"
#define SGX_MULTITAP_INFO_0_HU "Legfeljebb 5 játékos engedélyezése multitap emulációval. Csak néhány esetben szükséges kikapcsolni (pl. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU "1. joypad alapértelmezett típusa"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU "Az 1. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define OPTION_VAL_2_BUTTONS_HU "2 gomb"
#define OPTION_VAL_6_BUTTONS_HU "6 gomb"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU "2. joypad alapértelmezett típusa"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU "A 2. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU "3. joypad alapértelmezett típusa"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU "A 3. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU "4. joypad alapértelmezett típusa"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU "A 4. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU "5. joypad alapértelmezett típusa"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU "Az 5. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define SGX_TURBO_TOGGLE_LABEL_HU "Turbó gyorsgomb mód"
#define SGX_TURBO_TOGGLE_INFO_0_HU "Turbó gombok engedélyezése. A gyorsgombok (III és IV) váltógombként vagy kijelölt (nyomva tartással használható) turbó gombként működhetnek."
#define OPTION_VAL_SWITCH_HU "Váltógomb"
#define OPTION_VAL_DEDICATED_HU "Kijelölt"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_HU "Alternatív Turbo gyorsgomb"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HU "A III és IV gomb helyett a RetroPad L3/R3 gombjait rendeli a turbo átkapcsoláshoz. Csak Váltógomb módban, és akkor működik, ha nincs semmi az L3/R3 gombhoz rendelve. Ezzel elkerülhető a III és IV gomb átirányítása a 6-gombos kontroller módba kapcsoláskor."
#define SGX_TURBO_DELAY_LABEL_HU "Turbo késleltetés"
#define SGX_TURBO_DELAY_INFO_0_HU "A turbo tűz ismétlései közti idő (képkockákban)."
#define SGX_CDIMAGECACHE_LABEL_HU "Gyorsítótár a CD képfájlhoz (újraindítás szükséges)"
#define SGX_CDIMAGECACHE_INFO_0_HU "Indításkor beolvassa a teljes képfájlt a memóriába. Csökkentheti a töltési időket a lassabb indulásért cserébe."
#define SGX_CDBIOS_LABEL_HU "CD BIOS (újraindítás szükséges)"
#define SGX_CDBIOS_INFO_0_HU "A legtöbb játék képes futni a \"System Card 3\"-mal. Számos nem licenszelt játékhoz szükség van a \"Games Express\"-re."
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define SGX_DETECT_GEXPRESS_LABEL_HU "Games Express CD érzékelése (újraindítás szükséges)"
#define SGX_DETECT_GEXPRESS_INFO_0_HU "Games Express CD játékok betöltésekor a Games Express BIOS automatikus betöltése, a CD BIOS beállítástól függetlenül."
#define SGX_CDSPEED_LABEL_HU "(CD) CD sebesség"
#define SGX_CDSPEED_LABEL_CAT_HU "CD sebesség"
#define SGX_CDSPEED_INFO_0_HU "A nagyobb értékek segítik a gyorsabb töltést, de gondot okozhatnak pár játéknál."
#define SGX_ADPCMVOLUME_LABEL_HU "(CD) ADPCM hangerő %"
#define SGX_ADPCMVOLUME_LABEL_CAT_HU "ADPCM hangerő %"
#define SGX_ADPCMVOLUME_INFO_0_HU "Csak CD játékoknál. Ezen hangerő túl magas értéke torzítást okozhat."
#define SGX_ADPCMVOLUME_INFO_1_HU "Ezen hangerő túl magas értéke torzítást okozhat."
#define SGX_CDDAVOLUME_LABEL_HU "(CD) CDDA hangerő %"
#define SGX_CDDAVOLUME_LABEL_CAT_HU "CDDA hangerő %"
#define SGX_CDPSGVOLUME_LABEL_HU "(CD) PSG hangerő %"
#define SGX_CDPSGVOLUME_LABEL_CAT_HU "CD PSG hangerő %"
#define SGX_FORCESGX_LABEL_HU "Mindenképp a SuperGrafx emulálása (újraindítás szükséges)"
#define SGX_FORCESGX_INFO_0_HU "Olyan játékok futtatásához hasznos, amelyek házi készítésűek, vagy nem működnek SuperGrafx módban (mint a Space Harrier). A játékállás mentések nem kompatibilisek mindegyik móddal. Jobb ezt a beállítást kikapcsolva hagyni, hacsak nem muszáj. Az ismert SuperGrafx játékok (mint a Dai-Makaimura, Aldyns) ettől a beállítástól függetlenül SuperGrafx-ra kapcsolnak."
#define SGX_NOSPRITELIMIT_LABEL_HU "Nincs sprite korlátozás"
#define SGX_NOSPRITELIMIT_INFO_0_HU "Megszünteti a hardver soronként legfeljebb 16 sprite-os korlátozását. Figyelem: grafikus hibákat okozhat néhány játéknál."
#define SGX_OCMULTIPLIER_LABEL_HU "CPU túlhajtás szorzó (újraindítás szükséges)"
#define SGX_OCMULTIPLIER_INFO_0_HU "Nagyobb értékek csökkenthetik a lassulást a játékokban. Figyelem: hibákat és összeomlást okozhat."

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HU,
      CATEGORY_HACKS_INFO_0_HU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HU,
      CATEGORY_CD_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_HU,
      NULL,
      SGX_PALETTE_INFO_0_HU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HU },
         { "Composite", OPTION_VAL_COMPOSITE_HU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_HU,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "6:5", OPTION_VAL_6_5_HU },
         { "4:3", OPTION_VAL_4_3_HU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_HU,
      NULL,
      SGX_HOVERSCAN_INFO_0_HU,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HU },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_HU,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_HU,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HU },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_HU,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HU },
         { "0.50", OPTION_VAL_0_50_HU },
         { "0.75", OPTION_VAL_0_75_HU },
         { "1.00", OPTION_VAL_1_00_HU },
         { "1.25", OPTION_VAL_1_25_HU },
         { "1.50", OPTION_VAL_1_50_HU },
         { "1.75", OPTION_VAL_1_75_HU },
         { "2.00", OPTION_VAL_2_00_HU },
         { "2.25", OPTION_VAL_2_25_HU },
         { "2.50", OPTION_VAL_2_50_HU },
         { "2.75", OPTION_VAL_2_75_HU },
         { "3.00", OPTION_VAL_3_00_HU },
         { "3.25", OPTION_VAL_3_25_HU },
         { "3.50", OPTION_VAL_3_50_HU },
         { "3.75", OPTION_VAL_3_75_HU },
         { "4.00", OPTION_VAL_4_00_HU },
         { "4.25", OPTION_VAL_4_25_HU },
         { "4.50", OPTION_VAL_4_50_HU },
         { "4.75", OPTION_VAL_4_75_HU },
         { "5.00", OPTION_VAL_5_00_HU },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_HU,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_HU,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_HU,
      NULL,
      SGX_MULTITAP_INFO_0_HU,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_HU,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_HU },
         { "dedicated", OPTION_VAL_DEDICATED_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_HU,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_HU,
      NULL,
      SGX_TURBO_DELAY_INFO_0_HU,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_HU,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_HU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_HU,
      NULL,
      SGX_CDBIOS_INFO_0_HU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HU },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_HU,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_HU,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_HU,
      SGX_CDSPEED_LABEL_CAT_HU,
      SGX_CDSPEED_INFO_0_HU,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_HU,
      SGX_ADPCMVOLUME_LABEL_CAT_HU,
      SGX_ADPCMVOLUME_INFO_0_HU,
      SGX_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_HU,
      SGX_CDDAVOLUME_LABEL_CAT_HU,
      SGX_ADPCMVOLUME_INFO_0_HU,
      SGX_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_HU,
      SGX_CDPSGVOLUME_LABEL_CAT_HU,
      SGX_ADPCMVOLUME_INFO_0_HU,
      SGX_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_HU,
      NULL,
      SGX_FORCESGX_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_HU,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_HU,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID "Masukan"
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_HACKS_LABEL_ID "Peretasan Emulasi"
#define CATEGORY_HACKS_INFO_0_ID NULL
#define CATEGORY_CD_LABEL_ID NULL
#define CATEGORY_CD_INFO_0_ID NULL
#define SGX_PALETTE_LABEL_ID NULL
#define SGX_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define SGX_ASPECT_RATIO_LABEL_ID "Rasio Aspek"
#define SGX_ASPECT_RATIO_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define OPTION_VAL_6_5_ID NULL
#define OPTION_VAL_4_3_ID NULL
#define SGX_HOVERSCAN_LABEL_ID NULL
#define SGX_HOVERSCAN_INFO_0_ID NULL
#define OPTION_VAL_352_ID NULL
#define SGX_INITIAL_SCANLINE_LABEL_ID NULL
#define SGX_INITIAL_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_3_ID NULL
#define SGX_LAST_SCANLINE_LABEL_ID NULL
#define SGX_LAST_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_242_ID NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_ID "Sensivitas Mouse"
#define SGX_MOUSE_SENSITIVITY_INFO_0_ID NULL
#define OPTION_VAL_0_25_ID NULL
#define OPTION_VAL_0_50_ID NULL
#define OPTION_VAL_0_75_ID NULL
#define OPTION_VAL_1_00_ID NULL
#define OPTION_VAL_1_25_ID NULL
#define OPTION_VAL_1_50_ID NULL
#define OPTION_VAL_1_75_ID NULL
#define OPTION_VAL_2_00_ID NULL
#define OPTION_VAL_2_25_ID NULL
#define OPTION_VAL_2_50_ID NULL
#define OPTION_VAL_2_75_ID NULL
#define OPTION_VAL_3_00_ID NULL
#define OPTION_VAL_3_25_ID NULL
#define OPTION_VAL_3_50_ID NULL
#define OPTION_VAL_3_75_ID NULL
#define OPTION_VAL_4_00_ID NULL
#define OPTION_VAL_4_25_ID NULL
#define OPTION_VAL_4_50_ID NULL
#define OPTION_VAL_4_75_ID NULL
#define OPTION_VAL_5_00_ID NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_ID NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_ID NULL
#define SGX_DISABLE_SOFTRESET_LABEL_ID NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_ID NULL
#define SGX_MULTITAP_LABEL_ID NULL
#define SGX_MULTITAP_INFO_0_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID NULL
#define OPTION_VAL_2_BUTTONS_ID NULL
#define OPTION_VAL_6_BUTTONS_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID NULL
#define SGX_TURBO_TOGGLE_LABEL_ID NULL
#define SGX_TURBO_TOGGLE_INFO_0_ID NULL
#define OPTION_VAL_SWITCH_ID NULL
#define OPTION_VAL_DEDICATED_ID NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_ID NULL
#define SGX_TURBO_DELAY_LABEL_ID "Tundaan Turbo"
#define SGX_TURBO_DELAY_INFO_0_ID "Menyesuaikan waktu antara tekan turbo (sejumlah bingkai)."
#define SGX_CDIMAGECACHE_LABEL_ID "Tembolok Citra CD (Perlu Mulai Ulang)"
#define SGX_CDIMAGECACHE_INFO_0_ID NULL
#define SGX_CDBIOS_LABEL_ID "BIOS CD (Perlu Mulai Ulang)"
#define SGX_CDBIOS_INFO_0_ID NULL
#define OPTION_VAL_GAMES_EXPRESS_ID NULL
#define OPTION_VAL_SYSTEM_CARD_1_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_ID NULL
#define SGX_DETECT_GEXPRESS_LABEL_ID "Deteksikan CD Games Express (Perlu Mulai Ulang)"
#define SGX_DETECT_GEXPRESS_INFO_0_ID NULL
#define SGX_CDSPEED_LABEL_ID NULL
#define SGX_CDSPEED_LABEL_CAT_ID NULL
#define SGX_CDSPEED_INFO_0_ID NULL
#define SGX_ADPCMVOLUME_LABEL_ID NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_ID NULL
#define SGX_ADPCMVOLUME_INFO_0_ID NULL
#define SGX_ADPCMVOLUME_INFO_1_ID NULL
#define SGX_CDDAVOLUME_LABEL_ID NULL
#define SGX_CDDAVOLUME_LABEL_CAT_ID NULL
#define SGX_CDPSGVOLUME_LABEL_ID NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_ID NULL
#define SGX_FORCESGX_LABEL_ID "Paksa Emulasi SuperGrafx (Perlu Mulai Ulang)"
#define SGX_FORCESGX_INFO_0_ID NULL
#define SGX_NOSPRITELIMIT_LABEL_ID NULL
#define SGX_NOSPRITELIMIT_INFO_0_ID "Melepas batas 16 sprite tiap garis pindai peranti keras. PERINGATAN: Beberapa permainan akan kacau grafis."
#define SGX_OCMULTIPLIER_LABEL_ID "Pengali Overclock CPU (Perlu Mulai Ulang)"
#define SGX_OCMULTIPLIER_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ID,
      CATEGORY_HACKS_INFO_0_ID
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ID,
      CATEGORY_CD_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_ID,
      NULL,
      SGX_PALETTE_INFO_0_ID,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ID },
         { "Composite", OPTION_VAL_COMPOSITE_ID },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_ID,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "6:5", OPTION_VAL_6_5_ID },
         { "4:3", OPTION_VAL_4_3_ID },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_ID,
      NULL,
      SGX_HOVERSCAN_INFO_0_ID,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_ID },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_ID,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_ID,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ID },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_ID,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_ID },
         { "0.50", OPTION_VAL_0_50_ID },
         { "0.75", OPTION_VAL_0_75_ID },
         { "1.00", OPTION_VAL_1_00_ID },
         { "1.25", OPTION_VAL_1_25_ID },
         { "1.50", OPTION_VAL_1_50_ID },
         { "1.75", OPTION_VAL_1_75_ID },
         { "2.00", OPTION_VAL_2_00_ID },
         { "2.25", OPTION_VAL_2_25_ID },
         { "2.50", OPTION_VAL_2_50_ID },
         { "2.75", OPTION_VAL_2_75_ID },
         { "3.00", OPTION_VAL_3_00_ID },
         { "3.25", OPTION_VAL_3_25_ID },
         { "3.50", OPTION_VAL_3_50_ID },
         { "3.75", OPTION_VAL_3_75_ID },
         { "4.00", OPTION_VAL_4_00_ID },
         { "4.25", OPTION_VAL_4_25_ID },
         { "4.50", OPTION_VAL_4_50_ID },
         { "4.75", OPTION_VAL_4_75_ID },
         { "5.00", OPTION_VAL_5_00_ID },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_ID,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_ID,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_ID,
      NULL,
      SGX_MULTITAP_INFO_0_ID,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_ID,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_ID },
         { "dedicated", OPTION_VAL_DEDICATED_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_ID,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_ID,
      NULL,
      SGX_TURBO_DELAY_INFO_0_ID,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_ID,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_ID,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_ID,
      NULL,
      SGX_CDBIOS_INFO_0_ID,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ID },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ID },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ID },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ID },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_ID,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_ID,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_ID,
      SGX_CDSPEED_LABEL_CAT_ID,
      SGX_CDSPEED_INFO_0_ID,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_ID,
      SGX_ADPCMVOLUME_LABEL_CAT_ID,
      SGX_ADPCMVOLUME_INFO_0_ID,
      SGX_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_ID,
      SGX_CDDAVOLUME_LABEL_CAT_ID,
      SGX_ADPCMVOLUME_INFO_0_ID,
      SGX_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_ID,
      SGX_CDPSGVOLUME_LABEL_CAT_ID,
      SGX_ADPCMVOLUME_INFO_0_ID,
      SGX_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_ID,
      NULL,
      SGX_FORCESGX_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_ID,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_ID,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT "Configurare il ritaglio dello schermo, il salto dei fotogrammi e altri parametri di output dell'immagine."
#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT "Configura la pistola ottica, il mouse e l'ingresso Negcon."
#define CATEGORY_HACKS_LABEL_IT "Hack di Emulazione"
#define CATEGORY_HACKS_INFO_0_IT "Configura i parametri di precisione di overclocking e emulazione del processore che influenzano prestazioni e compatibilità di basso livello."
#define CATEGORY_CD_LABEL_IT NULL
#define CATEGORY_CD_INFO_0_IT "Configura le impostazioni relative ai giochi CD."
#define SGX_PALETTE_LABEL_IT "Tavolozza Colore"
#define SGX_PALETTE_INFO_0_IT "Composito cerca di ricreare l'output originale della console e può mostrare maggiori dettagli in alcuni giochi."
#define OPTION_VAL_RGB_IT NULL
#define OPTION_VAL_COMPOSITE_IT "Composito"
#define SGX_ASPECT_RATIO_LABEL_IT "Rapporto Dimensioni"
#define SGX_ASPECT_RATIO_INFO_0_IT "Scegli il rapporto di aspetto del contenuto preferito. Quando si utilizzano giochi che cambiano costantemente tra le modalità 256 e 352 e utilizzando l'aspetto automatico, è meglio impostare la larghezza orizzontale a 342 per ridurre al minimo il ridimensionamento e le linee nere extra in quanto questa larghezza è in rapporto di 256 modalità di larghezza (o qualcosa di simile, basta provare con Asuka 100% che è uno dei giochi che cambiano tra queste modalità)."
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_6_5_IT NULL
#define OPTION_VAL_4_3_IT NULL
#define SGX_HOVERSCAN_LABEL_IT "Overscan Orizzontale (Solo Modalità Larghezza 352)"
#define SGX_HOVERSCAN_INFO_0_IT "Scegli la larghezza massima dell'immagine da visualizzare. Valori inferiori ritaglieranno il lato destro dell'immagine (per i giochi a larghezza di 352 px)."
#define OPTION_VAL_352_IT "352 (Predefinito)"
#define SGX_INITIAL_SCANLINE_LABEL_IT "Scanline Iniziale"
#define SGX_INITIAL_SCANLINE_INFO_0_IT "Prima scanline renderizzata. Valori più alti ritaglieranno la parte superiore dell'immagine."
#define OPTION_VAL_3_IT "3 (Predefinito)"
#define SGX_LAST_SCANLINE_LABEL_IT "Ultima Scanline"
#define SGX_LAST_SCANLINE_INFO_0_IT "Ultima scanline renderizzata. I valori più bassi ritaglieranno la parte inferiore dell'immagine."
#define OPTION_VAL_242_IT "242 (predefinito)"
#define SGX_MOUSE_SENSITIVITY_LABEL_IT "Sensibilità Del Mouse"
#define SGX_MOUSE_SENSITIVITY_INFO_0_IT "Valori più alti renderanno il cursore del mouse più veloce."
#define OPTION_VAL_0_25_IT NULL
#define OPTION_VAL_0_50_IT NULL
#define OPTION_VAL_0_75_IT NULL
#define OPTION_VAL_1_00_IT NULL
#define OPTION_VAL_1_25_IT NULL
#define OPTION_VAL_1_50_IT NULL
#define OPTION_VAL_1_75_IT NULL
#define OPTION_VAL_2_00_IT NULL
#define OPTION_VAL_2_25_IT NULL
#define OPTION_VAL_2_50_IT NULL
#define OPTION_VAL_2_75_IT NULL
#define OPTION_VAL_3_00_IT NULL
#define OPTION_VAL_3_25_IT NULL
#define OPTION_VAL_3_50_IT NULL
#define OPTION_VAL_3_75_IT NULL
#define OPTION_VAL_4_00_IT NULL
#define OPTION_VAL_4_25_IT NULL
#define OPTION_VAL_4_50_IT NULL
#define OPTION_VAL_4_75_IT NULL
#define OPTION_VAL_5_00_IT NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_IT "Permetti Direzioni Opposte"
#define SGX_UP_DOWN_ALLOWED_INFO_0_IT "Abilitando questa opzione sarà possibile premere / alternare rapidamente / tenere contemporaneamente sia le direzioni sinistra che destra (o su e giù). Ciò può causare problemi di movimento."
#define SGX_DISABLE_SOFTRESET_LABEL_IT "Disabilita Soft Reset (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_IT "Quando RUN e SELECT vengono premuti contemporaneamente, disabilitare temporaneamente entrambi i pulsanti invece di reimpostare."
#define SGX_MULTITAP_LABEL_IT NULL
#define SGX_MULTITAP_INFO_0_IT "Abilita l'emulazione multitap fino a 5 giocatori. Disabilitarla è necessaria solo in alcuni casi (ad esempio Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT "Tipo Joypad Predefinito P1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT "Scegli se la porta 1 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define OPTION_VAL_2_BUTTONS_IT "2 Bottoni"
#define OPTION_VAL_6_BUTTONS_IT "6 Bottoni"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT "Tipo Joypad Predefinito P2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT "Scegli se la porta 2 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT "Tipo Joypad Predefinito P3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT "Scegli se la porta 3 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT "Tipo Joypad Predefinito P4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT "Scegli se la porta 4 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT "Tipo Joypad Predefinito P5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT "Scegli se la porta 5 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define SGX_TURBO_TOGGLE_LABEL_IT "Modalità Scorciatoia Turbo"
#define SGX_TURBO_TOGGLE_INFO_0_IT "Abilita i pulsanti turbo. I tasti di scelta rapida (pulsanti III e IV) possono comportarsi come interruttori o pulsanti turbo dedicati (tenere premuto per usare)."
#define OPTION_VAL_SWITCH_IT "Interrutore"
#define OPTION_VAL_DEDICATED_IT "Dedicato"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_IT "Scorciatoia Turbo Alternativa"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_IT "Assegnare i pulsanti RetroPad's L3/R3 come tasti di scelta rapida turbo invece dei pulsanti III e IV. Funziona solo in modalità 'Interruttore' e solo finché non viene assegnato nulla ai pulsanti L3/R3. È possibile evitare di remapping i pulsanti III e IV quando si passa alla modalità controller a 6 pulsanti con questo."
#define SGX_TURBO_DELAY_LABEL_IT "Ritardo Turbo"
#define SGX_TURBO_DELAY_INFO_0_IT "Regolare il tempo tra gli input del turbo (in fotogrammi)."
#define SGX_CDIMAGECACHE_LABEL_IT "Cache Immagine Cd (Riavvio Richiesto)"
#define SGX_CDIMAGECACHE_INFO_0_IT "Carica l'immagine completa in memoria all'avvio. Può potenzialmente diminuire i tempi di caricamento al costo di un aumento del tempo di avvio."
#define SGX_CDBIOS_LABEL_IT "BIOS CD (Riavvio Richiesto)"
#define SGX_CDBIOS_INFO_0_IT "La maggior parte dei giochi può essere eseguita su 'System Card 3'. 'Games Express' è necessario per diversi giochi senza licenza."
#define OPTION_VAL_GAMES_EXPRESS_IT NULL
#define OPTION_VAL_SYSTEM_CARD_1_IT NULL
#define OPTION_VAL_SYSTEM_CARD_2_IT NULL
#define OPTION_VAL_SYSTEM_CARD_3_IT NULL
#define SGX_DETECT_GEXPRESS_LABEL_IT "Rilevare Giochi Express Cd (Riavvio Richiesto)"
#define SGX_DETECT_GEXPRESS_INFO_0_IT "Carica automaticamente il BIOS di Games Express indipendentemente dall'impostazione del BIOS CD durante il caricamento dei giochi CD di Games Express."
#define SGX_CDSPEED_LABEL_IT "(CD) Velocità CD"
#define SGX_CDSPEED_LABEL_CAT_IT "Velocità CD"
#define SGX_CDSPEED_INFO_0_IT "Valori più elevati consentono tempi di caricamento più rapidi, ma possono causare problemi con un paio di giochi."
#define SGX_ADPCMVOLUME_LABEL_IT "(CD) Volume ADPCM %"
#define SGX_ADPCMVOLUME_LABEL_CAT_IT "Volume ADPCM %"
#define SGX_ADPCMVOLUME_INFO_0_IT "Solo gioco di CD. Impostare questo controllo del volume troppo alto può causare ritaglio di campione."
#define SGX_ADPCMVOLUME_INFO_1_IT "Impostare questo controllo del volume troppo alto può causare clip di campione."
#define SGX_CDDAVOLUME_LABEL_IT "(CD) Volume CDDA %"
#define SGX_CDDAVOLUME_LABEL_CAT_IT "Volume CDDA %"
#define SGX_CDPSGVOLUME_LABEL_IT "(CD) Volume PSG %"
#define SGX_CDPSGVOLUME_LABEL_CAT_IT NULL
#define SGX_FORCESGX_LABEL_IT "Forza L'Emulazione Di SuperGrafx (Riavvio Richiesto)"
#define SGX_FORCESGX_INFO_0_IT "Questo è utile per eseguire i giochi homebrew o per isolare i giochi che non verranno eseguiti in modalità SuperGrafx (come Space Harrier). Gli stati di salvataggio non sono compatibili con ogni modalità. È meglio abbandonare questa opzione a meno che non sia necessaria. I giochi SuperGrafx noti (come Dai-Makaimura, Aldyns) passeranno automaticamente a SuperGrafx indipendentemente da questa opzione."
#define SGX_NOSPRITELIMIT_LABEL_IT "Nessun Limite Sprite"
#define SGX_NOSPRITELIMIT_INFO_0_IT "Rimuovere 16-sprites-per-scanline limite hardware. ATTENZIONE: Può causare problemi grafici su alcuni giochi."
#define SGX_OCMULTIPLIER_LABEL_IT "Moltiplicatore Overclock Della CPU (Riavvio Richiesto)"
#define SGX_OCMULTIPLIER_INFO_0_IT "Valori più alti possono ridurre i rallentamenti dei giochi. ATTENZIONE: può causare problemi e crash."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_IT,
      CATEGORY_HACKS_INFO_0_IT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_IT,
      CATEGORY_CD_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_IT,
      NULL,
      SGX_PALETTE_INFO_0_IT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_IT },
         { "Composite", OPTION_VAL_COMPOSITE_IT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_IT,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "6:5", OPTION_VAL_6_5_IT },
         { "4:3", OPTION_VAL_4_3_IT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_IT,
      NULL,
      SGX_HOVERSCAN_INFO_0_IT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_IT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_IT,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_IT,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_IT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_IT,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_IT },
         { "0.50", OPTION_VAL_0_50_IT },
         { "0.75", OPTION_VAL_0_75_IT },
         { "1.00", OPTION_VAL_1_00_IT },
         { "1.25", OPTION_VAL_1_25_IT },
         { "1.50", OPTION_VAL_1_50_IT },
         { "1.75", OPTION_VAL_1_75_IT },
         { "2.00", OPTION_VAL_2_00_IT },
         { "2.25", OPTION_VAL_2_25_IT },
         { "2.50", OPTION_VAL_2_50_IT },
         { "2.75", OPTION_VAL_2_75_IT },
         { "3.00", OPTION_VAL_3_00_IT },
         { "3.25", OPTION_VAL_3_25_IT },
         { "3.50", OPTION_VAL_3_50_IT },
         { "3.75", OPTION_VAL_3_75_IT },
         { "4.00", OPTION_VAL_4_00_IT },
         { "4.25", OPTION_VAL_4_25_IT },
         { "4.50", OPTION_VAL_4_50_IT },
         { "4.75", OPTION_VAL_4_75_IT },
         { "5.00", OPTION_VAL_5_00_IT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_IT,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_IT,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_IT,
      NULL,
      SGX_MULTITAP_INFO_0_IT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_IT,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_IT },
         { "dedicated", OPTION_VAL_DEDICATED_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_IT,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_IT,
      NULL,
      SGX_TURBO_DELAY_INFO_0_IT,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_IT,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_IT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_IT,
      NULL,
      SGX_CDBIOS_INFO_0_IT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_IT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_IT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_IT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_IT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_IT,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_IT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_IT,
      SGX_CDSPEED_LABEL_CAT_IT,
      SGX_CDSPEED_INFO_0_IT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_IT,
      SGX_ADPCMVOLUME_LABEL_CAT_IT,
      SGX_ADPCMVOLUME_INFO_0_IT,
      SGX_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_IT,
      SGX_CDDAVOLUME_LABEL_CAT_IT,
      SGX_ADPCMVOLUME_INFO_0_IT,
      SGX_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_IT,
      SGX_CDPSGVOLUME_LABEL_CAT_IT,
      SGX_ADPCMVOLUME_INFO_0_IT,
      SGX_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_IT,
      NULL,
      SGX_FORCESGX_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_IT,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_IT,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA "ビデオ"
#define CATEGORY_VIDEO_INFO_0_JA "画面のトリミング、フレームスキップおよびその他の画像出力のパラメータを設定します。"
#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA "ライトガン、マウスおよびネジコンの入力を設定します。"
#define CATEGORY_HACKS_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACKS_INFO_0_JA "低レベルパフォーマンスと互換性に影響する、プロセッサのオーバークロックとエミュレーション精度のパラメータを設定します。"
#define CATEGORY_CD_LABEL_JA NULL
#define CATEGORY_CD_INFO_0_JA "CD ゲームに関連する設定を変更します。"
#define SGX_PALETTE_LABEL_JA "カラーパレット"
#define SGX_PALETTE_INFO_0_JA "コンポジットはオリジナルのコンソール出力の再現を試み、一部のゲームでさらなるディテールを表示することができます。"
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA "コンポジット"
#define SGX_ASPECT_RATIO_LABEL_JA "アスペクト比"
#define SGX_ASPECT_RATIO_INFO_0_JA "コンテンツのアスペクト比を選択します。頻繁に 256 モードと 352 モードを切り替えるゲーム (例: あすか120%) で [自動] アスペクト比を使用する場合、水平幅を 342 に設定することをおすすめします。この横幅は 256 モードと比率が等しく、サイズ変更や余分な黒枠を最小限に抑えることができます。"
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_6_5_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define SGX_HOVERSCAN_LABEL_JA "水平オーバースキャン (352 幅モードのみ)"
#define SGX_HOVERSCAN_INFO_0_JA "表示されるイメージの最大幅を選択します。値を低くすると、イメージの右側がトリミングされます。幅 352px ゲーム用の設定です (例: R-Type)。"
#define OPTION_VAL_352_JA "352 (デフォルト)"
#define SGX_INITIAL_SCANLINE_LABEL_JA "開始スキャンライン"
#define SGX_INITIAL_SCANLINE_INFO_0_JA "最初に描画されるスキャンラインです。値を大きくするほどイメージの上部がトリミングされます。"
#define OPTION_VAL_3_JA "3 (デフォルト)"
#define SGX_LAST_SCANLINE_LABEL_JA "終了スキャンライン"
#define SGX_LAST_SCANLINE_INFO_0_JA "最後に描画されるスキャンラインです。値を小さくするほどイメージの下部がトリミングされます。"
#define OPTION_VAL_242_JA "242 (デフォルト)"
#define SGX_MOUSE_SENSITIVITY_LABEL_JA "マウス感度"
#define SGX_MOUSE_SENSITIVITY_INFO_0_JA "値を大きくするほどマウスカーソルの動きが速くなります。"
#define OPTION_VAL_0_25_JA NULL
#define OPTION_VAL_0_50_JA NULL
#define OPTION_VAL_0_75_JA NULL
#define OPTION_VAL_1_00_JA NULL
#define OPTION_VAL_1_25_JA NULL
#define OPTION_VAL_1_50_JA NULL
#define OPTION_VAL_1_75_JA NULL
#define OPTION_VAL_2_00_JA NULL
#define OPTION_VAL_2_25_JA NULL
#define OPTION_VAL_2_50_JA NULL
#define OPTION_VAL_2_75_JA NULL
#define OPTION_VAL_3_00_JA NULL
#define OPTION_VAL_3_25_JA NULL
#define OPTION_VAL_3_50_JA NULL
#define OPTION_VAL_3_75_JA NULL
#define OPTION_VAL_4_00_JA NULL
#define OPTION_VAL_4_25_JA NULL
#define OPTION_VAL_4_50_JA NULL
#define OPTION_VAL_4_75_JA NULL
#define OPTION_VAL_5_00_JA NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_JA "逆方向入力を許可"
#define SGX_UP_DOWN_ALLOWED_INFO_0_JA "有効にすると、左右 (または上下) 方向の同時押し / 高速交互押し / 長押しが可能になります。動作に不具合が生じる場合があります。"
#define SGX_DISABLE_SOFTRESET_LABEL_JA "ソフトリセットを無効にする (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_JA "RUN と SELECT が同時に押された時に、リセットの代わりに一時的に両方のボタンを無効にします。"
#define SGX_MULTITAP_LABEL_JA "マルチタップ 5 ポートコントローラー"
#define SGX_MULTITAP_INFO_0_JA "最大 5 人までのマルチタップエミュレーションを有効にします。一部の例外 (超兄貴など) を除いて、無効にする必要はありません。"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA "P1 デフォルトジョイパッドの種類"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA "ポート 1 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define OPTION_VAL_2_BUTTONS_JA "2 ボタン"
#define OPTION_VAL_6_BUTTONS_JA "6 ボタン"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA "P2 デフォルトジョイパッドの種類"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA "ポート 2 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA "P3 デフォルトジョイパッドの種類"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA "ポート 3 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA "P4 デフォルトジョイパッドの種類"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA "ポート 4 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA "P5 デフォルトジョイパッドの種類"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA "ポート 5 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define SGX_TURBO_TOGGLE_LABEL_JA "ターボホットキーモード"
#define SGX_TURBO_TOGGLE_INFO_0_JA "ターボボタンを有効にします。ホットキー (ボタン III と IV) は、通常レトロパッドの A/B ボタンに割り当てられる ボタン I および ボタン II のターボのオン/オフ、またはボタン I/II の専用ターボボタンとして動作します。"
#define OPTION_VAL_SWITCH_JA "切り替え"
#define OPTION_VAL_DEDICATED_JA "専用"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_JA "代替ターボホットキー"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_JA "ボタン III と IV ではなく、レトロパッドの L3/R3 ボタンにターボホットキーを割り当てます。 [切り替え] モードかつ、L3/R3 に何も割り当てられていない場合にのみ動作します。これにより、6 ボタンコントローラーモードに切り替えた際、ボタン II および IV へのリマップを回避することができます。"
#define SGX_TURBO_DELAY_LABEL_JA "ターボ遅延"
#define SGX_TURBO_DELAY_INFO_0_JA "連射間隔の時間を調整します (フレーム単位)。"
#define SGX_CDIMAGECACHE_LABEL_JA "CD イメージキャッシュ (再起動が必要)"
#define SGX_CDIMAGECACHE_INFO_0_JA "起動時に完全なイメージをメモリにロードします。起動時間が増す代わりにロード時間が短縮される可能性があります。"
#define SGX_CDBIOS_LABEL_JA "CD BIOS (再起動が必要)"
#define SGX_CDBIOS_INFO_0_JA "ほとんどのゲームは [システムカード 3] で実行できます。[Game Express] はいくつかの非公認ゲームで必要です。"
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA "システムカード 1"
#define OPTION_VAL_SYSTEM_CARD_2_JA "システムカード 2"
#define OPTION_VAL_SYSTEM_CARD_3_JA "システムカード 3"
#define SGX_DETECT_GEXPRESS_LABEL_JA "Game Express CD を検出 (再起動が必要)"
#define SGX_DETECT_GEXPRESS_INFO_0_JA "Game Express CD ゲームをロードする際、CD BIOS の設定に関係なく自動的に Game Express BIOS をロードします。"
#define SGX_CDSPEED_LABEL_JA "(CD) CD 速度"
#define SGX_CDSPEED_LABEL_CAT_JA "CD 速度"
#define SGX_CDSPEED_INFO_0_JA "値を大きくするほど読み込み時間を高速化できますが、いくつかのゲームで問題が発生する可能性があります。"
#define SGX_ADPCMVOLUME_LABEL_JA "(CD) ADPCM 音量 %"
#define SGX_ADPCMVOLUME_LABEL_CAT_JA "ADPCM 音量 %"
#define SGX_ADPCMVOLUME_INFO_0_JA "CD ゲームのみです。この音量を高く設定しすぎるとサンプルクリッピングが発生する可能性があります。"
#define SGX_ADPCMVOLUME_INFO_1_JA "この音量を高く設定しすぎるとサンプルクリッピングが発生する可能性があります。"
#define SGX_CDDAVOLUME_LABEL_JA "(CD) CDDA 音量 %"
#define SGX_CDDAVOLUME_LABEL_CAT_JA "CD-DA 音量 %"
#define SGX_CDPSGVOLUME_LABEL_JA "(CD) PSG 音量 %"
#define SGX_CDPSGVOLUME_LABEL_CAT_JA "CD PSG 音量 %"
#define SGX_FORCESGX_LABEL_JA "強制スーパーグラフィックスエミュレーション (再起動が必要)"
#define SGX_FORCESGX_INFO_0_JA "Homebrew ゲームを実行したり、スーパーグラフィックスモードでは動作しないゲームを分類するのに役立ちます。ステートセーブは各モードと互換性がありません。必要がない限り、オフにしておくことをお勧めします。スーパーグラフィックス用として販売されたゲームはこのオプションに関係なく自動的にスーパーグラフィックスモードに切り替わります。"
#define SGX_NOSPRITELIMIT_LABEL_JA "スプライト制限なし"
#define SGX_NOSPRITELIMIT_INFO_0_JA "16 スプライト/スキャンラインのハードウェア制限を解除します。警告: ゲームによってはグラフィックが乱れる可能性があります。"
#define SGX_OCMULTIPLIER_LABEL_JA "CPU オーバークロック倍率 (再起動が必要)"
#define SGX_OCMULTIPLIER_INFO_0_JA "値を大きくするほどゲームの実行速度の低下を軽減できます。警告: 不具合やクラッシュを引き起こす可能性があります。"

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_JA,
      CATEGORY_HACKS_INFO_0_JA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_JA,
      CATEGORY_CD_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_JA,
      NULL,
      SGX_PALETTE_INFO_0_JA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_JA },
         { "Composite", OPTION_VAL_COMPOSITE_JA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_JA,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "6:5", OPTION_VAL_6_5_JA },
         { "4:3", OPTION_VAL_4_3_JA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_JA,
      NULL,
      SGX_HOVERSCAN_INFO_0_JA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_JA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_JA,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_JA,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_JA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_JA,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_JA },
         { "0.50", OPTION_VAL_0_50_JA },
         { "0.75", OPTION_VAL_0_75_JA },
         { "1.00", OPTION_VAL_1_00_JA },
         { "1.25", OPTION_VAL_1_25_JA },
         { "1.50", OPTION_VAL_1_50_JA },
         { "1.75", OPTION_VAL_1_75_JA },
         { "2.00", OPTION_VAL_2_00_JA },
         { "2.25", OPTION_VAL_2_25_JA },
         { "2.50", OPTION_VAL_2_50_JA },
         { "2.75", OPTION_VAL_2_75_JA },
         { "3.00", OPTION_VAL_3_00_JA },
         { "3.25", OPTION_VAL_3_25_JA },
         { "3.50", OPTION_VAL_3_50_JA },
         { "3.75", OPTION_VAL_3_75_JA },
         { "4.00", OPTION_VAL_4_00_JA },
         { "4.25", OPTION_VAL_4_25_JA },
         { "4.50", OPTION_VAL_4_50_JA },
         { "4.75", OPTION_VAL_4_75_JA },
         { "5.00", OPTION_VAL_5_00_JA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_JA,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_JA,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_JA,
      NULL,
      SGX_MULTITAP_INFO_0_JA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_JA,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_JA },
         { "dedicated", OPTION_VAL_DEDICATED_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_JA,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_JA,
      NULL,
      SGX_TURBO_DELAY_INFO_0_JA,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_JA,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_JA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_JA,
      NULL,
      SGX_CDBIOS_INFO_0_JA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_JA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_JA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_JA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_JA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_JA,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_JA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_JA,
      SGX_CDSPEED_LABEL_CAT_JA,
      SGX_CDSPEED_INFO_0_JA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_JA,
      SGX_ADPCMVOLUME_LABEL_CAT_JA,
      SGX_ADPCMVOLUME_INFO_0_JA,
      SGX_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_JA,
      SGX_CDDAVOLUME_LABEL_CAT_JA,
      SGX_ADPCMVOLUME_INFO_0_JA,
      SGX_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_JA,
      SGX_CDPSGVOLUME_LABEL_CAT_JA,
      SGX_ADPCMVOLUME_INFO_0_JA,
      SGX_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_JA,
      NULL,
      SGX_FORCESGX_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_JA,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_JA,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "화면 자르기, 프레임 건너뛰기 등 기타 이미지 출력 매개변수를 구성합니다."
#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO "라이트 건, 마우스, 네지콘 입력 등을 설정합니다."
#define CATEGORY_HACKS_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACKS_INFO_0_KO "성능과 호환성에 영향을 끼치는 프로세서 오버클러킹 및 에뮬레이션 정확도 옵션 등을 설정합니다."
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO "CD 게임 관련된 설정을 구성합니다."
#define SGX_PALETTE_LABEL_KO "색상 팔레트"
#define SGX_PALETTE_INFO_0_KO "컴포지트는 원본 콘솔 출력을 재현하며 일부 게임에서 더 디테일하게 표시될 수 있습니다."
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO "컴포지트"
#define SGX_ASPECT_RATIO_LABEL_KO "화면비"
#define SGX_ASPECT_RATIO_INFO_0_KO "선호하는 컨텐츠 화면비를 선택합니다. 게임에서 256 모드와 352 모드 사이를 계속 전환하고 자동 종횡비를 사용할 경우 가로 너비를 342로 설정하여 256너비 모드로 발생하는 크기 조정과 여분의 검은 선을 최소화하는 것이 가장 좋습니다. (이러한 모드 사이를 전환하는 게임 중 하나인 Asuka 100%에서 테스트 하십시오)."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_6_5_KO NULL
#define OPTION_VAL_4_3_KO NULL
#define SGX_HOVERSCAN_LABEL_KO "수평 오버스캔 (352 너비 모드만 해당)"
#define SGX_HOVERSCAN_INFO_0_KO "표시할 최대 이미지 너비를 선택합니다. 값이 낮으면 이미지의 오른쪽이 잘립니다 (너비가 352픽셀인 게임의 경우)."
#define OPTION_VAL_352_KO "352 (기본)"
#define SGX_INITIAL_SCANLINE_LABEL_KO "최초 스캔라인"
#define SGX_INITIAL_SCANLINE_INFO_0_KO "첫 번째 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 상단이 잘립니다."
#define OPTION_VAL_3_KO "3 (기본)"
#define SGX_LAST_SCANLINE_LABEL_KO "마지막 스캔라인"
#define SGX_LAST_SCANLINE_INFO_0_KO "마지막으로 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 하단이 잘립니다."
#define OPTION_VAL_242_KO "242 (기본)"
#define SGX_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define SGX_MOUSE_SENSITIVITY_INFO_0_KO "값이 높을수록 마우스 커서가 더 빠르게 움직입니다."
#define OPTION_VAL_0_25_KO NULL
#define OPTION_VAL_0_50_KO NULL
#define OPTION_VAL_0_75_KO NULL
#define OPTION_VAL_1_00_KO NULL
#define OPTION_VAL_1_25_KO NULL
#define OPTION_VAL_1_50_KO NULL
#define OPTION_VAL_1_75_KO NULL
#define OPTION_VAL_2_00_KO NULL
#define OPTION_VAL_2_25_KO NULL
#define OPTION_VAL_2_50_KO NULL
#define OPTION_VAL_2_75_KO NULL
#define OPTION_VAL_3_00_KO NULL
#define OPTION_VAL_3_25_KO NULL
#define OPTION_VAL_3_50_KO NULL
#define OPTION_VAL_3_75_KO NULL
#define OPTION_VAL_4_00_KO NULL
#define OPTION_VAL_4_25_KO NULL
#define OPTION_VAL_4_50_KO NULL
#define OPTION_VAL_4_75_KO NULL
#define OPTION_VAL_5_00_KO NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_KO "반대 방향 동시 입력 허용"
#define SGX_UP_DOWN_ALLOWED_INFO_0_KO "이 옵션을 활성화하면 왼쪽과 오른쪽 (또는 위쪽과 아래쪽) 방향 입력을 동시에 누르거나 빠르게 번갈아 누르는 것을 허용합니다. 이는 움직임 관련 버그를 일으킬 수 있습니다."
#define SGX_DISABLE_SOFTRESET_LABEL_KO "소프트 리셋 비활성화 (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_KO "RUN과 SELECT를 동시에 누르면 리셋하는 대신 두 버튼을 일시적으로 비활성화합니다."
#define SGX_MULTITAP_LABEL_KO "멀티탭 5포트 컨트롤러"
#define SGX_MULTITAP_INFO_0_KO "최대 5인까지 지원하는 멀티탭 에뮬레이션을 활성화합니다. 비활성화는 일부 경우에만 필요합니다(예: Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO "P1 기본 조이패드 유형"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO "포트 1 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define OPTION_VAL_2_BUTTONS_KO "2 버튼"
#define OPTION_VAL_6_BUTTONS_KO "6 버튼"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO "P2 기본 조이패드 유형"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO "포트 2 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO "P3 기본 조이패드 유형"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO "포트 3 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO "P4 기본 조이패드 유형"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO "포트 4 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO "P5 기본 조이패드 유형"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO "포트 5 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define SGX_TURBO_TOGGLE_LABEL_KO "터포 핫키 모드"
#define SGX_TURBO_TOGGLE_INFO_0_KO "터보 버튼을 활성화합니다. 핫키(버튼 III 및 IV)는 토글 스위치 또는 전용(길게 눌러 사용) 터보 버튼으로 작동할 수 있습니다."
#define OPTION_VAL_SWITCH_KO "토글"
#define OPTION_VAL_DEDICATED_KO "전용"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_KO "대체 터보 핫키"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_KO "레트로 패드의 L3/R3 버튼을 버튼 III 및 IV 대신 터보 핫키로 할당합니다. '토글' 모드에서 L3/R3 버튼에 아무 것도 할당되지 않은 경우에만 작동합니다. 이를 통해 6버튼 컨트롤러 모드로 전환할 때 버튼 III 및 IV를 다시 설정해야하는 것을 방지할 수 있습니다."
#define SGX_TURBO_DELAY_LABEL_KO "터보 지연"
#define SGX_TURBO_DELAY_INFO_0_KO "터보 사이의 시간을 조정합니다 (프레임 단위)."
#define SGX_CDIMAGECACHE_LABEL_KO "CD 이미지 캐시 (재시작 필요)"
#define SGX_CDIMAGECACHE_INFO_0_KO "시작할 때 전체 이미지를 메모리에 불러옵니다. 시작 시간이 늘어나는 대신 로딩 시간을 잠재적으로 줄일 수 있습니다."
#define SGX_CDBIOS_LABEL_KO "CD BIOS (재시작 필요)"
#define SGX_CDBIOS_INFO_0_KO "대부분의 게임은 'System Card 3'에서 실행할 수 있습니다. 'Games Express'는 라이선스가 없는 게임에서 필요합니다."
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define SGX_DETECT_GEXPRESS_LABEL_KO "Games Express CD 감지(재시작 필요)"
#define SGX_DETECT_GEXPRESS_INFO_0_KO "Games Express CD 게임을 불러올 때 CD BIOS 설정에 관계없이 Games Express BIOS를 자동으로 불러옵니다."
#define SGX_CDSPEED_LABEL_KO "(CD) CD 속도"
#define SGX_CDSPEED_LABEL_CAT_KO "CD 속도"
#define SGX_CDSPEED_INFO_0_KO "값이 높을수록 로딩 시간이 빨라지지만 몇 가지 게임에서 문제가 발생할 수 있습니다."
#define SGX_ADPCMVOLUME_LABEL_KO "(CD) ADPCM 볼륨 %"
#define SGX_ADPCMVOLUME_LABEL_CAT_KO "ADPCM 볼륨 %"
#define SGX_ADPCMVOLUME_INFO_0_KO "CD 게임에 해당합니다. 볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define SGX_ADPCMVOLUME_INFO_1_KO "볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define SGX_CDDAVOLUME_LABEL_KO "(CD) CDDA 음량 %"
#define SGX_CDDAVOLUME_LABEL_CAT_KO "CDDA 음량 %"
#define SGX_CDPSGVOLUME_LABEL_KO "(CD) PSG 볼륨 %"
#define SGX_CDPSGVOLUME_LABEL_CAT_KO "CD PSG 볼륨 %"
#define SGX_FORCESGX_LABEL_KO "강제 SuperGrafx 에뮬레이션(재시작 필요)"
#define SGX_FORCESGX_INFO_0_KO "홈브류 게임을 실행하거나 SuperGrafx 모드에서 실행되지 않는 게임 (예: Space Harrier)를 제외하는데 유용합니다. 상태 저장은 각각의 모드와 호환되지 않습니다. 필요한 경우가 아니면 이 옵션을 해제하는 것이 좋습니다. 알려진 SuperGrafx 게임 (예: Dai-Makaimura, Aldyns)은 이 옵션과 상관없이 자동으로 SuperGrafx로 전환됩니다."
#define SGX_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제"
#define SGX_NOSPRITELIMIT_INFO_0_KO "스캔라인 당 16개의 스프라이트 하드웨어 제한을 제거합니다. 경고: 일부 게임에서 그래픽 결함이 발생할 수 있습니다."
#define SGX_OCMULTIPLIER_LABEL_KO "CPU 오버클럭 배율 (재시작 필요)"
#define SGX_OCMULTIPLIER_INFO_0_KO "값이 높을수록 게임의 속도 저하를 줄일 수 있습니다. 경고: 결함 및 충돌이 발생할 수 있습니다."

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_KO,
      CATEGORY_HACKS_INFO_0_KO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_KO,
      CATEGORY_CD_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_KO,
      NULL,
      SGX_PALETTE_INFO_0_KO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_KO },
         { "Composite", OPTION_VAL_COMPOSITE_KO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_KO,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "6:5", OPTION_VAL_6_5_KO },
         { "4:3", OPTION_VAL_4_3_KO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_KO,
      NULL,
      SGX_HOVERSCAN_INFO_0_KO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_KO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_KO,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_KO,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_KO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_KO,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_KO },
         { "0.50", OPTION_VAL_0_50_KO },
         { "0.75", OPTION_VAL_0_75_KO },
         { "1.00", OPTION_VAL_1_00_KO },
         { "1.25", OPTION_VAL_1_25_KO },
         { "1.50", OPTION_VAL_1_50_KO },
         { "1.75", OPTION_VAL_1_75_KO },
         { "2.00", OPTION_VAL_2_00_KO },
         { "2.25", OPTION_VAL_2_25_KO },
         { "2.50", OPTION_VAL_2_50_KO },
         { "2.75", OPTION_VAL_2_75_KO },
         { "3.00", OPTION_VAL_3_00_KO },
         { "3.25", OPTION_VAL_3_25_KO },
         { "3.50", OPTION_VAL_3_50_KO },
         { "3.75", OPTION_VAL_3_75_KO },
         { "4.00", OPTION_VAL_4_00_KO },
         { "4.25", OPTION_VAL_4_25_KO },
         { "4.50", OPTION_VAL_4_50_KO },
         { "4.75", OPTION_VAL_4_75_KO },
         { "5.00", OPTION_VAL_5_00_KO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_KO,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_KO,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_KO,
      NULL,
      SGX_MULTITAP_INFO_0_KO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_KO,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_KO },
         { "dedicated", OPTION_VAL_DEDICATED_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_KO,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_KO,
      NULL,
      SGX_TURBO_DELAY_INFO_0_KO,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_KO,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_KO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_KO,
      NULL,
      SGX_CDBIOS_INFO_0_KO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_KO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_KO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_KO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_KO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_KO,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_KO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_KO,
      SGX_CDSPEED_LABEL_CAT_KO,
      SGX_CDSPEED_INFO_0_KO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_KO,
      SGX_ADPCMVOLUME_LABEL_CAT_KO,
      SGX_ADPCMVOLUME_INFO_0_KO,
      SGX_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_KO,
      SGX_CDDAVOLUME_LABEL_CAT_KO,
      SGX_ADPCMVOLUME_INFO_0_KO,
      SGX_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_KO,
      SGX_CDPSGVOLUME_LABEL_CAT_KO,
      SGX_ADPCMVOLUME_INFO_0_KO,
      SGX_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_KO,
      NULL,
      SGX_FORCESGX_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_KO,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_KO,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL "Invoer"
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_HACKS_LABEL_NL NULL
#define CATEGORY_HACKS_INFO_0_NL NULL
#define CATEGORY_CD_LABEL_NL NULL
#define CATEGORY_CD_INFO_0_NL NULL
#define SGX_PALETTE_LABEL_NL NULL
#define SGX_PALETTE_INFO_0_NL NULL
#define OPTION_VAL_RGB_NL NULL
#define OPTION_VAL_COMPOSITE_NL NULL
#define SGX_ASPECT_RATIO_LABEL_NL "Beeldverhouding"
#define SGX_ASPECT_RATIO_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_6_5_NL NULL
#define OPTION_VAL_4_3_NL NULL
#define SGX_HOVERSCAN_LABEL_NL NULL
#define SGX_HOVERSCAN_INFO_0_NL NULL
#define OPTION_VAL_352_NL NULL
#define SGX_INITIAL_SCANLINE_LABEL_NL NULL
#define SGX_INITIAL_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_3_NL NULL
#define SGX_LAST_SCANLINE_LABEL_NL NULL
#define SGX_LAST_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_242_NL NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_NL NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_NL NULL
#define OPTION_VAL_0_25_NL NULL
#define OPTION_VAL_0_50_NL NULL
#define OPTION_VAL_0_75_NL NULL
#define OPTION_VAL_1_00_NL NULL
#define OPTION_VAL_1_25_NL NULL
#define OPTION_VAL_1_50_NL NULL
#define OPTION_VAL_1_75_NL NULL
#define OPTION_VAL_2_00_NL NULL
#define OPTION_VAL_2_25_NL NULL
#define OPTION_VAL_2_50_NL NULL
#define OPTION_VAL_2_75_NL NULL
#define OPTION_VAL_3_00_NL NULL
#define OPTION_VAL_3_25_NL NULL
#define OPTION_VAL_3_50_NL NULL
#define OPTION_VAL_3_75_NL NULL
#define OPTION_VAL_4_00_NL NULL
#define OPTION_VAL_4_25_NL NULL
#define OPTION_VAL_4_50_NL NULL
#define OPTION_VAL_4_75_NL NULL
#define OPTION_VAL_5_00_NL NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_NL NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_NL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_NL NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_NL NULL
#define SGX_MULTITAP_LABEL_NL NULL
#define SGX_MULTITAP_INFO_0_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL NULL
#define OPTION_VAL_2_BUTTONS_NL NULL
#define OPTION_VAL_6_BUTTONS_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL NULL
#define SGX_TURBO_TOGGLE_LABEL_NL NULL
#define SGX_TURBO_TOGGLE_INFO_0_NL NULL
#define OPTION_VAL_SWITCH_NL NULL
#define OPTION_VAL_DEDICATED_NL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_NL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_NL NULL
#define SGX_TURBO_DELAY_LABEL_NL NULL
#define SGX_TURBO_DELAY_INFO_0_NL NULL
#define SGX_CDIMAGECACHE_LABEL_NL NULL
#define SGX_CDIMAGECACHE_INFO_0_NL NULL
#define SGX_CDBIOS_LABEL_NL NULL
#define SGX_CDBIOS_INFO_0_NL NULL
#define OPTION_VAL_GAMES_EXPRESS_NL NULL
#define OPTION_VAL_SYSTEM_CARD_1_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_NL NULL
#define SGX_DETECT_GEXPRESS_LABEL_NL NULL
#define SGX_DETECT_GEXPRESS_INFO_0_NL NULL
#define SGX_CDSPEED_LABEL_NL NULL
#define SGX_CDSPEED_LABEL_CAT_NL NULL
#define SGX_CDSPEED_INFO_0_NL NULL
#define SGX_ADPCMVOLUME_LABEL_NL NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_NL NULL
#define SGX_ADPCMVOLUME_INFO_0_NL NULL
#define SGX_ADPCMVOLUME_INFO_1_NL NULL
#define SGX_CDDAVOLUME_LABEL_NL NULL
#define SGX_CDDAVOLUME_LABEL_CAT_NL NULL
#define SGX_CDPSGVOLUME_LABEL_NL NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_NL NULL
#define SGX_FORCESGX_LABEL_NL NULL
#define SGX_FORCESGX_INFO_0_NL NULL
#define SGX_NOSPRITELIMIT_LABEL_NL NULL
#define SGX_NOSPRITELIMIT_INFO_0_NL NULL
#define SGX_OCMULTIPLIER_LABEL_NL NULL
#define SGX_OCMULTIPLIER_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NL,
      CATEGORY_HACKS_INFO_0_NL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NL,
      CATEGORY_CD_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_NL,
      NULL,
      SGX_PALETTE_INFO_0_NL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NL },
         { "Composite", OPTION_VAL_COMPOSITE_NL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_NL,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "6:5", OPTION_VAL_6_5_NL },
         { "4:3", OPTION_VAL_4_3_NL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_NL,
      NULL,
      SGX_HOVERSCAN_INFO_0_NL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_NL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_NL,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_NL,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_NL,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_NL },
         { "0.50", OPTION_VAL_0_50_NL },
         { "0.75", OPTION_VAL_0_75_NL },
         { "1.00", OPTION_VAL_1_00_NL },
         { "1.25", OPTION_VAL_1_25_NL },
         { "1.50", OPTION_VAL_1_50_NL },
         { "1.75", OPTION_VAL_1_75_NL },
         { "2.00", OPTION_VAL_2_00_NL },
         { "2.25", OPTION_VAL_2_25_NL },
         { "2.50", OPTION_VAL_2_50_NL },
         { "2.75", OPTION_VAL_2_75_NL },
         { "3.00", OPTION_VAL_3_00_NL },
         { "3.25", OPTION_VAL_3_25_NL },
         { "3.50", OPTION_VAL_3_50_NL },
         { "3.75", OPTION_VAL_3_75_NL },
         { "4.00", OPTION_VAL_4_00_NL },
         { "4.25", OPTION_VAL_4_25_NL },
         { "4.50", OPTION_VAL_4_50_NL },
         { "4.75", OPTION_VAL_4_75_NL },
         { "5.00", OPTION_VAL_5_00_NL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_NL,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_NL,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_NL,
      NULL,
      SGX_MULTITAP_INFO_0_NL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_NL,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_NL },
         { "dedicated", OPTION_VAL_DEDICATED_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_NL,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_NL,
      NULL,
      SGX_TURBO_DELAY_INFO_0_NL,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_NL,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_NL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_NL,
      NULL,
      SGX_CDBIOS_INFO_0_NL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_NL,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_NL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_NL,
      SGX_CDSPEED_LABEL_CAT_NL,
      SGX_CDSPEED_INFO_0_NL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_NL,
      SGX_ADPCMVOLUME_LABEL_CAT_NL,
      SGX_ADPCMVOLUME_INFO_0_NL,
      SGX_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_NL,
      SGX_CDDAVOLUME_LABEL_CAT_NL,
      SGX_ADPCMVOLUME_INFO_0_NL,
      SGX_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_NL,
      SGX_CDPSGVOLUME_LABEL_CAT_NL,
      SGX_ADPCMVOLUME_INFO_0_NL,
      SGX_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_NL,
      NULL,
      SGX_FORCESGX_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_NL,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_NL,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO NULL
#define CATEGORY_INPUT_LABEL_NO "Inndata"
#define CATEGORY_INPUT_INFO_0_NO NULL
#define CATEGORY_HACKS_LABEL_NO NULL
#define CATEGORY_HACKS_INFO_0_NO NULL
#define CATEGORY_CD_LABEL_NO NULL
#define CATEGORY_CD_INFO_0_NO NULL
#define SGX_PALETTE_LABEL_NO NULL
#define SGX_PALETTE_INFO_0_NO NULL
#define OPTION_VAL_RGB_NO NULL
#define OPTION_VAL_COMPOSITE_NO NULL
#define SGX_ASPECT_RATIO_LABEL_NO "Størrelsesforhold"
#define SGX_ASPECT_RATIO_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_6_5_NO NULL
#define OPTION_VAL_4_3_NO NULL
#define SGX_HOVERSCAN_LABEL_NO NULL
#define SGX_HOVERSCAN_INFO_0_NO NULL
#define OPTION_VAL_352_NO NULL
#define SGX_INITIAL_SCANLINE_LABEL_NO NULL
#define SGX_INITIAL_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_3_NO NULL
#define SGX_LAST_SCANLINE_LABEL_NO NULL
#define SGX_LAST_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_242_NO NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_NO NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_NO NULL
#define OPTION_VAL_0_25_NO NULL
#define OPTION_VAL_0_50_NO NULL
#define OPTION_VAL_0_75_NO NULL
#define OPTION_VAL_1_00_NO NULL
#define OPTION_VAL_1_25_NO NULL
#define OPTION_VAL_1_50_NO NULL
#define OPTION_VAL_1_75_NO NULL
#define OPTION_VAL_2_00_NO NULL
#define OPTION_VAL_2_25_NO NULL
#define OPTION_VAL_2_50_NO NULL
#define OPTION_VAL_2_75_NO NULL
#define OPTION_VAL_3_00_NO NULL
#define OPTION_VAL_3_25_NO NULL
#define OPTION_VAL_3_50_NO NULL
#define OPTION_VAL_3_75_NO NULL
#define OPTION_VAL_4_00_NO NULL
#define OPTION_VAL_4_25_NO NULL
#define OPTION_VAL_4_50_NO NULL
#define OPTION_VAL_4_75_NO NULL
#define OPTION_VAL_5_00_NO NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_NO NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_NO NULL
#define SGX_DISABLE_SOFTRESET_LABEL_NO NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_NO NULL
#define SGX_MULTITAP_LABEL_NO NULL
#define SGX_MULTITAP_INFO_0_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO NULL
#define OPTION_VAL_2_BUTTONS_NO NULL
#define OPTION_VAL_6_BUTTONS_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO NULL
#define SGX_TURBO_TOGGLE_LABEL_NO NULL
#define SGX_TURBO_TOGGLE_INFO_0_NO NULL
#define OPTION_VAL_SWITCH_NO NULL
#define OPTION_VAL_DEDICATED_NO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_NO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_NO NULL
#define SGX_TURBO_DELAY_LABEL_NO NULL
#define SGX_TURBO_DELAY_INFO_0_NO NULL
#define SGX_CDIMAGECACHE_LABEL_NO NULL
#define SGX_CDIMAGECACHE_INFO_0_NO NULL
#define SGX_CDBIOS_LABEL_NO NULL
#define SGX_CDBIOS_INFO_0_NO NULL
#define OPTION_VAL_GAMES_EXPRESS_NO NULL
#define OPTION_VAL_SYSTEM_CARD_1_NO NULL
#define OPTION_VAL_SYSTEM_CARD_2_NO NULL
#define OPTION_VAL_SYSTEM_CARD_3_NO NULL
#define SGX_DETECT_GEXPRESS_LABEL_NO NULL
#define SGX_DETECT_GEXPRESS_INFO_0_NO NULL
#define SGX_CDSPEED_LABEL_NO NULL
#define SGX_CDSPEED_LABEL_CAT_NO NULL
#define SGX_CDSPEED_INFO_0_NO NULL
#define SGX_ADPCMVOLUME_LABEL_NO NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_NO NULL
#define SGX_ADPCMVOLUME_INFO_0_NO NULL
#define SGX_ADPCMVOLUME_INFO_1_NO NULL
#define SGX_CDDAVOLUME_LABEL_NO NULL
#define SGX_CDDAVOLUME_LABEL_CAT_NO NULL
#define SGX_CDPSGVOLUME_LABEL_NO NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_NO NULL
#define SGX_FORCESGX_LABEL_NO NULL
#define SGX_FORCESGX_INFO_0_NO NULL
#define SGX_NOSPRITELIMIT_LABEL_NO NULL
#define SGX_NOSPRITELIMIT_INFO_0_NO NULL
#define SGX_OCMULTIPLIER_LABEL_NO NULL
#define SGX_OCMULTIPLIER_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NO,
      CATEGORY_VIDEO_INFO_0_NO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NO,
      CATEGORY_HACKS_INFO_0_NO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NO,
      CATEGORY_CD_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_NO,
      NULL,
      SGX_PALETTE_INFO_0_NO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NO },
         { "Composite", OPTION_VAL_COMPOSITE_NO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_NO,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_NO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NO },
         { "6:5", OPTION_VAL_6_5_NO },
         { "4:3", OPTION_VAL_4_3_NO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_NO,
      NULL,
      SGX_HOVERSCAN_INFO_0_NO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_NO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_NO,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_NO,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_NO,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_NO },
         { "0.50", OPTION_VAL_0_50_NO },
         { "0.75", OPTION_VAL_0_75_NO },
         { "1.00", OPTION_VAL_1_00_NO },
         { "1.25", OPTION_VAL_1_25_NO },
         { "1.50", OPTION_VAL_1_50_NO },
         { "1.75", OPTION_VAL_1_75_NO },
         { "2.00", OPTION_VAL_2_00_NO },
         { "2.25", OPTION_VAL_2_25_NO },
         { "2.50", OPTION_VAL_2_50_NO },
         { "2.75", OPTION_VAL_2_75_NO },
         { "3.00", OPTION_VAL_3_00_NO },
         { "3.25", OPTION_VAL_3_25_NO },
         { "3.50", OPTION_VAL_3_50_NO },
         { "3.75", OPTION_VAL_3_75_NO },
         { "4.00", OPTION_VAL_4_00_NO },
         { "4.25", OPTION_VAL_4_25_NO },
         { "4.50", OPTION_VAL_4_50_NO },
         { "4.75", OPTION_VAL_4_75_NO },
         { "5.00", OPTION_VAL_5_00_NO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_NO,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_NO,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_NO,
      NULL,
      SGX_MULTITAP_INFO_0_NO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_NO,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_NO },
         { "dedicated", OPTION_VAL_DEDICATED_NO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_NO,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_NO,
      NULL,
      SGX_TURBO_DELAY_INFO_0_NO,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_NO,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_NO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_NO,
      NULL,
      SGX_CDBIOS_INFO_0_NO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_NO,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_NO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_NO,
      SGX_CDSPEED_LABEL_CAT_NO,
      SGX_CDSPEED_INFO_0_NO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_NO,
      SGX_ADPCMVOLUME_LABEL_CAT_NO,
      SGX_ADPCMVOLUME_INFO_0_NO,
      SGX_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_NO,
      SGX_CDDAVOLUME_LABEL_CAT_NO,
      SGX_ADPCMVOLUME_INFO_0_NO,
      SGX_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_NO,
      SGX_CDPSGVOLUME_LABEL_CAT_NO,
      SGX_ADPCMVOLUME_INFO_0_NO,
      SGX_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_NO,
      NULL,
      SGX_FORCESGX_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_NO,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_NO,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_VIDEO_LABEL_OR "ଵିଡ଼ିଓ"
#define CATEGORY_VIDEO_INFO_0_OR NULL
#define CATEGORY_INPUT_LABEL_OR NULL
#define CATEGORY_INPUT_INFO_0_OR NULL
#define CATEGORY_HACKS_LABEL_OR NULL
#define CATEGORY_HACKS_INFO_0_OR NULL
#define CATEGORY_CD_LABEL_OR NULL
#define CATEGORY_CD_INFO_0_OR NULL
#define SGX_PALETTE_LABEL_OR NULL
#define SGX_PALETTE_INFO_0_OR NULL
#define OPTION_VAL_RGB_OR NULL
#define OPTION_VAL_COMPOSITE_OR NULL
#define SGX_ASPECT_RATIO_LABEL_OR NULL
#define SGX_ASPECT_RATIO_INFO_0_OR NULL
#define OPTION_VAL_AUTO_OR NULL
#define OPTION_VAL_6_5_OR NULL
#define OPTION_VAL_4_3_OR NULL
#define SGX_HOVERSCAN_LABEL_OR NULL
#define SGX_HOVERSCAN_INFO_0_OR NULL
#define OPTION_VAL_352_OR NULL
#define SGX_INITIAL_SCANLINE_LABEL_OR NULL
#define SGX_INITIAL_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_3_OR NULL
#define SGX_LAST_SCANLINE_LABEL_OR NULL
#define SGX_LAST_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_242_OR NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_OR NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_OR NULL
#define OPTION_VAL_0_25_OR NULL
#define OPTION_VAL_0_50_OR NULL
#define OPTION_VAL_0_75_OR NULL
#define OPTION_VAL_1_00_OR NULL
#define OPTION_VAL_1_25_OR NULL
#define OPTION_VAL_1_50_OR NULL
#define OPTION_VAL_1_75_OR NULL
#define OPTION_VAL_2_00_OR NULL
#define OPTION_VAL_2_25_OR NULL
#define OPTION_VAL_2_50_OR NULL
#define OPTION_VAL_2_75_OR NULL
#define OPTION_VAL_3_00_OR NULL
#define OPTION_VAL_3_25_OR NULL
#define OPTION_VAL_3_50_OR NULL
#define OPTION_VAL_3_75_OR NULL
#define OPTION_VAL_4_00_OR NULL
#define OPTION_VAL_4_25_OR NULL
#define OPTION_VAL_4_50_OR NULL
#define OPTION_VAL_4_75_OR NULL
#define OPTION_VAL_5_00_OR NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_OR NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_OR NULL
#define SGX_DISABLE_SOFTRESET_LABEL_OR NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_OR NULL
#define SGX_MULTITAP_LABEL_OR NULL
#define SGX_MULTITAP_INFO_0_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR NULL
#define OPTION_VAL_2_BUTTONS_OR NULL
#define OPTION_VAL_6_BUTTONS_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR NULL
#define SGX_TURBO_TOGGLE_LABEL_OR NULL
#define SGX_TURBO_TOGGLE_INFO_0_OR NULL
#define OPTION_VAL_SWITCH_OR NULL
#define OPTION_VAL_DEDICATED_OR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_OR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_OR NULL
#define SGX_TURBO_DELAY_LABEL_OR NULL
#define SGX_TURBO_DELAY_INFO_0_OR NULL
#define SGX_CDIMAGECACHE_LABEL_OR NULL
#define SGX_CDIMAGECACHE_INFO_0_OR NULL
#define SGX_CDBIOS_LABEL_OR NULL
#define SGX_CDBIOS_INFO_0_OR NULL
#define OPTION_VAL_GAMES_EXPRESS_OR NULL
#define OPTION_VAL_SYSTEM_CARD_1_OR NULL
#define OPTION_VAL_SYSTEM_CARD_2_OR NULL
#define OPTION_VAL_SYSTEM_CARD_3_OR NULL
#define SGX_DETECT_GEXPRESS_LABEL_OR NULL
#define SGX_DETECT_GEXPRESS_INFO_0_OR NULL
#define SGX_CDSPEED_LABEL_OR NULL
#define SGX_CDSPEED_LABEL_CAT_OR NULL
#define SGX_CDSPEED_INFO_0_OR NULL
#define SGX_ADPCMVOLUME_LABEL_OR NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_OR NULL
#define SGX_ADPCMVOLUME_INFO_0_OR NULL
#define SGX_ADPCMVOLUME_INFO_1_OR NULL
#define SGX_CDDAVOLUME_LABEL_OR NULL
#define SGX_CDDAVOLUME_LABEL_CAT_OR NULL
#define SGX_CDPSGVOLUME_LABEL_OR NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_OR NULL
#define SGX_FORCESGX_LABEL_OR NULL
#define SGX_FORCESGX_INFO_0_OR NULL
#define SGX_NOSPRITELIMIT_LABEL_OR NULL
#define SGX_NOSPRITELIMIT_INFO_0_OR NULL
#define SGX_OCMULTIPLIER_LABEL_OR NULL
#define SGX_OCMULTIPLIER_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OR,
      CATEGORY_VIDEO_INFO_0_OR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OR,
      CATEGORY_INPUT_INFO_0_OR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OR,
      CATEGORY_HACKS_INFO_0_OR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OR,
      CATEGORY_CD_INFO_0_OR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_OR,
      NULL,
      SGX_PALETTE_INFO_0_OR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OR },
         { "Composite", OPTION_VAL_COMPOSITE_OR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_OR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_OR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OR },
         { "6:5", OPTION_VAL_6_5_OR },
         { "4:3", OPTION_VAL_4_3_OR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_OR,
      NULL,
      SGX_HOVERSCAN_INFO_0_OR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_OR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_OR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_OR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_OR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_OR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_OR },
         { "0.50", OPTION_VAL_0_50_OR },
         { "0.75", OPTION_VAL_0_75_OR },
         { "1.00", OPTION_VAL_1_00_OR },
         { "1.25", OPTION_VAL_1_25_OR },
         { "1.50", OPTION_VAL_1_50_OR },
         { "1.75", OPTION_VAL_1_75_OR },
         { "2.00", OPTION_VAL_2_00_OR },
         { "2.25", OPTION_VAL_2_25_OR },
         { "2.50", OPTION_VAL_2_50_OR },
         { "2.75", OPTION_VAL_2_75_OR },
         { "3.00", OPTION_VAL_3_00_OR },
         { "3.25", OPTION_VAL_3_25_OR },
         { "3.50", OPTION_VAL_3_50_OR },
         { "3.75", OPTION_VAL_3_75_OR },
         { "4.00", OPTION_VAL_4_00_OR },
         { "4.25", OPTION_VAL_4_25_OR },
         { "4.50", OPTION_VAL_4_50_OR },
         { "4.75", OPTION_VAL_4_75_OR },
         { "5.00", OPTION_VAL_5_00_OR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_OR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_OR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_OR,
      NULL,
      SGX_MULTITAP_INFO_0_OR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_OR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_OR },
         { "dedicated", OPTION_VAL_DEDICATED_OR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_OR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_OR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_OR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_OR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_OR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_OR,
      NULL,
      SGX_CDBIOS_INFO_0_OR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_OR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_OR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_OR,
      SGX_CDSPEED_LABEL_CAT_OR,
      SGX_CDSPEED_INFO_0_OR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_OR,
      SGX_ADPCMVOLUME_LABEL_CAT_OR,
      SGX_ADPCMVOLUME_INFO_0_OR,
      SGX_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_OR,
      SGX_CDDAVOLUME_LABEL_CAT_OR,
      SGX_ADPCMVOLUME_INFO_0_OR,
      SGX_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_OR,
      SGX_CDPSGVOLUME_LABEL_CAT_OR,
      SGX_ADPCMVOLUME_INFO_0_OR,
      SGX_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_OR,
      NULL,
      SGX_FORCESGX_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_OR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_OR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL "Skonfiguruj przycinanie wyświetlania, pominięcie ramki i inne parametry wyjściowe obrazu."
#define CATEGORY_INPUT_LABEL_PL "Wejście"
#define CATEGORY_INPUT_INFO_0_PL NULL
#define CATEGORY_HACKS_LABEL_PL "Hacki emulacyjne"
#define CATEGORY_HACKS_INFO_0_PL "Skonfiguruj przetaktowanie procesora i dokładność emulacji wpływające na niską wydajność i kompatybilność."
#define CATEGORY_CD_LABEL_PL NULL
#define CATEGORY_CD_INFO_0_PL "Skonfiguruj ustawienia związane z grami CD."
#define SGX_PALETTE_LABEL_PL "Paleta kolorów"
#define SGX_PALETTE_INFO_0_PL NULL
#define OPTION_VAL_RGB_PL NULL
#define OPTION_VAL_COMPOSITE_PL "Kompozytowy"
#define SGX_ASPECT_RATIO_LABEL_PL "Współczynnik proporcji"
#define SGX_ASPECT_RATIO_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_6_5_PL NULL
#define OPTION_VAL_4_3_PL NULL
#define SGX_HOVERSCAN_LABEL_PL NULL
#define SGX_HOVERSCAN_INFO_0_PL "Wybierz maksymalną szerokość obrazu, która ma być wyświetlana. Niższe wartości będą przycinać prawą stronę obrazu (dla gier 352 px szerokości)."
#define OPTION_VAL_352_PL "352 (domyślnie)"
#define SGX_INITIAL_SCANLINE_LABEL_PL NULL
#define SGX_INITIAL_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_3_PL "3 (domyślnie)"
#define SGX_LAST_SCANLINE_LABEL_PL NULL
#define SGX_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_242_PL "242 (domyślnie)"
#define SGX_MOUSE_SENSITIVITY_LABEL_PL "Czułość myszy"
#define SGX_MOUSE_SENSITIVITY_INFO_0_PL "Wyższe wartości sprawią, że kursor myszy będzie się szybszy."
#define OPTION_VAL_0_25_PL NULL
#define OPTION_VAL_0_50_PL NULL
#define OPTION_VAL_0_75_PL NULL
#define OPTION_VAL_1_00_PL NULL
#define OPTION_VAL_1_25_PL NULL
#define OPTION_VAL_1_50_PL NULL
#define OPTION_VAL_1_75_PL NULL
#define OPTION_VAL_2_00_PL NULL
#define OPTION_VAL_2_25_PL NULL
#define OPTION_VAL_2_50_PL NULL
#define OPTION_VAL_2_75_PL NULL
#define OPTION_VAL_3_00_PL NULL
#define OPTION_VAL_3_25_PL NULL
#define OPTION_VAL_3_50_PL NULL
#define OPTION_VAL_3_75_PL NULL
#define OPTION_VAL_4_00_PL NULL
#define OPTION_VAL_4_25_PL NULL
#define OPTION_VAL_4_50_PL NULL
#define OPTION_VAL_4_75_PL NULL
#define OPTION_VAL_5_00_PL NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_PL "Zezwalaj na przeciwne kierunki"
#define SGX_UP_DOWN_ALLOWED_INFO_0_PL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_PL "Wyłącz resetowanie systemu (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_PL NULL
#define SGX_MULTITAP_LABEL_PL NULL
#define SGX_MULTITAP_INFO_0_PL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL "Domyślny typ Joypad P1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL "Wybierz, czy port 1 powinien mieć domyślnie 2 lub 6 przycisków. Ta opcja jest stosowana tylko przy starcie rdzenia, jeśli chcesz przełączyć się podczas włączania zawartości, użyj przycisku \"Przełącznik\". UWAGA: 6 przycisków joypad może mieć dziwne zachowanie w niekompatybilnych grach."
#define OPTION_VAL_2_BUTTONS_PL "2 przyciski"
#define OPTION_VAL_6_BUTTONS_PL "6 przycisków"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL "Domyślny typ Joypad P2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL "Wybierz, czy port 2 powinien mieć domyślnie 2 lub 6 przycisków. Ta opcja jest stosowana tylko przy starcie rdzenia, jeśli chcesz przełączyć się podczas włączania zawartości, użyj przycisku \"Przełącznik\". UWAGA: 6 przycisków joypad może mieć dziwne zachowanie w niekompatybilnych grach."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL "Domyślny typ Joypad P3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL "Wybierz, czy port 3 powinien mieć domyślnie 2 lub 6 przycisków. Ta opcja jest stosowana tylko przy starcie rdzenia, jeśli chcesz przełączyć się podczas włączania zawartości, użyj przycisku \"Przełącznik\". UWAGA: 6 przycisków joypad może mieć dziwne zachowanie w niekompatybilnych grach."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL "Domyślny typ Joypad P4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL "Wybierz, czy port 4 powinien mieć domyślnie 2 lub 6 przycisków. Ta opcja jest stosowana tylko przy starcie rdzenia, jeśli chcesz przełączyć się podczas włączania zawartości, użyj przycisku \"Przełącznik\". UWAGA: 6 przycisków joypad może mieć dziwne zachowanie w niekompatybilnych grach."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL "Domyślny typ Joypad P5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL "Wybierz, jeśli port 5 powinien mieć domyślnie 2 lub 6 przycisków. Ta opcja jest stosowana tylko przy starcie rdzenia, jeśli chcesz przełączyć się podczas włączania zawartości, użyj przycisku \"Przełącznik\". UWAGA: 6 przycisków joypad może mieć dziwne zachowanie w niekompatybilnych grach."
#define SGX_TURBO_TOGGLE_LABEL_PL NULL
#define SGX_TURBO_TOGGLE_INFO_0_PL NULL
#define OPTION_VAL_SWITCH_PL "Przełącz"
#define OPTION_VAL_DEDICATED_PL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_PL "Alternatywny skrót Turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PL NULL
#define SGX_TURBO_DELAY_LABEL_PL "Opóźnienie Turbo"
#define SGX_TURBO_DELAY_INFO_0_PL NULL
#define SGX_CDIMAGECACHE_LABEL_PL NULL
#define SGX_CDIMAGECACHE_INFO_0_PL NULL
#define SGX_CDBIOS_LABEL_PL "CD BIOS (wymagany restart)"
#define SGX_CDBIOS_INFO_0_PL NULL
#define OPTION_VAL_GAMES_EXPRESS_PL NULL
#define OPTION_VAL_SYSTEM_CARD_1_PL "Karta systemowa 1"
#define OPTION_VAL_SYSTEM_CARD_2_PL "Karta systemowa 2"
#define OPTION_VAL_SYSTEM_CARD_3_PL "Karta systemowa 3"
#define SGX_DETECT_GEXPRESS_LABEL_PL NULL
#define SGX_DETECT_GEXPRESS_INFO_0_PL NULL
#define SGX_CDSPEED_LABEL_PL "(CD) Prędkość CD"
#define SGX_CDSPEED_LABEL_CAT_PL "Prędkość CD"
#define SGX_CDSPEED_INFO_0_PL "Wyższe wartości umożliwiają szybsze ładowanie, ale mogą powodować problemy z kilkoma grami."
#define SGX_ADPCMVOLUME_LABEL_PL "(CD) Głośność ADPCM %"
#define SGX_ADPCMVOLUME_LABEL_CAT_PL "Głośność ADPCM %"
#define SGX_ADPCMVOLUME_INFO_0_PL "Tylko gra CD. Ustawienie tej kontroli głośności może spowodować przycinanie próbki."
#define SGX_ADPCMVOLUME_INFO_1_PL "Ustawienie zbyt dużej regulacji głośności może spowodować przycinanie próbki."
#define SGX_CDDAVOLUME_LABEL_PL "(CD) Głośność CDDA %"
#define SGX_CDDAVOLUME_LABEL_CAT_PL "Głośność CDDA %"
#define SGX_CDPSGVOLUME_LABEL_PL "(CD) Głośność PSG %"
#define SGX_CDPSGVOLUME_LABEL_CAT_PL "Głośność CD PSG %"
#define SGX_FORCESGX_LABEL_PL NULL
#define SGX_FORCESGX_INFO_0_PL NULL
#define SGX_NOSPRITELIMIT_LABEL_PL "Bez limitu duszków"
#define SGX_NOSPRITELIMIT_INFO_0_PL NULL
#define SGX_OCMULTIPLIER_LABEL_PL "Mnożnik podkręcania CPU (wymagany restart)"
#define SGX_OCMULTIPLIER_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PL,
      CATEGORY_HACKS_INFO_0_PL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PL,
      CATEGORY_CD_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_PL,
      NULL,
      SGX_PALETTE_INFO_0_PL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PL },
         { "Composite", OPTION_VAL_COMPOSITE_PL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_PL,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "6:5", OPTION_VAL_6_5_PL },
         { "4:3", OPTION_VAL_4_3_PL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_PL,
      NULL,
      SGX_HOVERSCAN_INFO_0_PL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_PL,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_PL,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_PL,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PL },
         { "0.50", OPTION_VAL_0_50_PL },
         { "0.75", OPTION_VAL_0_75_PL },
         { "1.00", OPTION_VAL_1_00_PL },
         { "1.25", OPTION_VAL_1_25_PL },
         { "1.50", OPTION_VAL_1_50_PL },
         { "1.75", OPTION_VAL_1_75_PL },
         { "2.00", OPTION_VAL_2_00_PL },
         { "2.25", OPTION_VAL_2_25_PL },
         { "2.50", OPTION_VAL_2_50_PL },
         { "2.75", OPTION_VAL_2_75_PL },
         { "3.00", OPTION_VAL_3_00_PL },
         { "3.25", OPTION_VAL_3_25_PL },
         { "3.50", OPTION_VAL_3_50_PL },
         { "3.75", OPTION_VAL_3_75_PL },
         { "4.00", OPTION_VAL_4_00_PL },
         { "4.25", OPTION_VAL_4_25_PL },
         { "4.50", OPTION_VAL_4_50_PL },
         { "4.75", OPTION_VAL_4_75_PL },
         { "5.00", OPTION_VAL_5_00_PL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_PL,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_PL,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_PL,
      NULL,
      SGX_MULTITAP_INFO_0_PL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_PL,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_PL },
         { "dedicated", OPTION_VAL_DEDICATED_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_PL,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_PL,
      NULL,
      SGX_TURBO_DELAY_INFO_0_PL,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_PL,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_PL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_PL,
      NULL,
      SGX_CDBIOS_INFO_0_PL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_PL,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_PL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_PL,
      SGX_CDSPEED_LABEL_CAT_PL,
      SGX_CDSPEED_INFO_0_PL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_PL,
      SGX_ADPCMVOLUME_LABEL_CAT_PL,
      SGX_ADPCMVOLUME_INFO_0_PL,
      SGX_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_PL,
      SGX_CDDAVOLUME_LABEL_CAT_PL,
      SGX_ADPCMVOLUME_INFO_0_PL,
      SGX_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_PL,
      SGX_CDPSGVOLUME_LABEL_CAT_PL,
      SGX_ADPCMVOLUME_INFO_0_PL,
      SGX_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_PL,
      NULL,
      SGX_FORCESGX_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_PL,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_PL,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR "Configura os parâmetros do recorte de exibição, pulo de quadros e outras saídas de imagem."
#define CATEGORY_INPUT_LABEL_PT_BR "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_BR "Configura a entrada da pistola de luz, mouse e NegCon."
#define CATEGORY_HACKS_LABEL_PT_BR "Hacks de emulação"
#define CATEGORY_HACKS_INFO_0_PT_BR "Configure os parâmetros de precisão de overclock e emulação do processador que afetam o baixo desempenho e a compatibilidade."
#define CATEGORY_CD_LABEL_PT_BR NULL
#define CATEGORY_CD_INFO_0_PT_BR "Altera as configurações relacionadas aos jogos de CD."
#define SGX_PALETTE_LABEL_PT_BR "Paleta de cores"
#define SGX_PALETTE_INFO_0_PT_BR "Vídeo composto tenta recriar a saída original do console e pode exibir mais detalhes em alguns jogos."
#define OPTION_VAL_RGB_PT_BR NULL
#define OPTION_VAL_COMPOSITE_PT_BR "Vídeo composto"
#define SGX_ASPECT_RATIO_LABEL_PT_BR "Proporção de tela"
#define SGX_ASPECT_RATIO_INFO_0_PT_BR "Escolhe a proporção de tela preferida do conteúdo. Em jogos que constantemente alteram-se entre os modos de 352 e 256 e usam a proporção automática, é melhor configurar a largura para 342, para minimizar o redimensionamento e o excesso de linhas pretas, pois essa largura está na proporção do modo de 256 de largura (em algo semelhante, basta testar com Asuka 100%, que é um dos jogos que tem alteração de modos)."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_6_5_PT_BR NULL
#define OPTION_VAL_4_3_PT_BR NULL
#define SGX_HOVERSCAN_LABEL_PT_BR "Overscan horizontal (somente no modo 352 de largura)"
#define SGX_HOVERSCAN_INFO_0_PT_BR "Seleciona a largura máxima da imagem que será exibida. Valores menores cortam o lado direito da imagem (em jogos com largura de 352 px)."
#define OPTION_VAL_352_PT_BR "352 (padrão)"
#define SGX_INITIAL_SCANLINE_LABEL_PT_BR "Linha de varredura inicial"
#define SGX_INITIAL_SCANLINE_INFO_0_PT_BR "Primeira linha de verificação renderizada. Valores maiores cortarão a parte superior da imagem."
#define OPTION_VAL_3_PT_BR "3 (padrão)"
#define SGX_LAST_SCANLINE_LABEL_PT_BR "Linha de varredura final"
#define SGX_LAST_SCANLINE_INFO_0_PT_BR "Última linha de verificação renderizada. Valores menores cortarão a parte inferior da imagem."
#define OPTION_VAL_242_PT_BR "242 (padrão)"
#define SGX_MOUSE_SENSITIVITY_LABEL_PT_BR "Sensibilidade do mouse"
#define SGX_MOUSE_SENSITIVITY_INFO_0_PT_BR "Define a velocidade do mouse."
#define OPTION_VAL_0_25_PT_BR "0,25"
#define OPTION_VAL_0_50_PT_BR "0,50"
#define OPTION_VAL_0_75_PT_BR "0,75"
#define OPTION_VAL_1_00_PT_BR "1,00"
#define OPTION_VAL_1_25_PT_BR "1,25"
#define OPTION_VAL_1_50_PT_BR "1,50"
#define OPTION_VAL_1_75_PT_BR "1,75"
#define OPTION_VAL_2_00_PT_BR "2,00"
#define OPTION_VAL_2_25_PT_BR "2,25"
#define OPTION_VAL_2_50_PT_BR "2,50"
#define OPTION_VAL_2_75_PT_BR "2,75"
#define OPTION_VAL_3_00_PT_BR "3,00"
#define OPTION_VAL_3_25_PT_BR "3,25"
#define OPTION_VAL_3_50_PT_BR "3,50"
#define OPTION_VAL_3_75_PT_BR "3,75"
#define OPTION_VAL_4_00_PT_BR "4,00"
#define OPTION_VAL_4_25_PT_BR "4,25"
#define OPTION_VAL_4_50_PT_BR "4,50"
#define OPTION_VAL_4_75_PT_BR "4,75"
#define OPTION_VAL_5_00_PT_BR "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_PT_BR "Permitir direções opostas"
#define SGX_UP_DOWN_ALLOWED_INFO_0_PT_BR "Permite pressionar, alternar ou segurar rapidamente as direções esquerda e direita (ou cima e baixo) ao mesmo tempo.\nOBSERVAÇÃO: pode causar problemas de movimentação."
#define SGX_DISABLE_SOFTRESET_LABEL_PT_BR "Desativar a reinicialização suave (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_PT_BR "Ao pressionar RUN e SELECT simultaneamente, desativa ambos os botões temporariamente em vez de reinicializar."
#define SGX_MULTITAP_LABEL_PT_BR "Multitap de 5 portas"
#define SGX_MULTITAP_INFO_0_PT_BR "Ativa emulação de multitap de até 5 jogadores. A desativação é necessária em alguns casos (por ex. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR NULL
#define OPTION_VAL_2_BUTTONS_PT_BR "2 botões"
#define OPTION_VAL_6_BUTTONS_PT_BR "6 botões"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR NULL
#define SGX_TURBO_TOGGLE_LABEL_PT_BR "Modo de atalho do turbo"
#define SGX_TURBO_TOGGLE_INFO_0_PT_BR "Habilita os botões turbo. Os atalhos (botões III e IV) podem comportar-se como interruptores ou como botões dedicados (segure para usar)."
#define OPTION_VAL_SWITCH_PT_BR "Interruptor"
#define OPTION_VAL_DEDICATED_PT_BR "Dedicado"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR "Atalho alternativo do turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR "Atribui os botões L3 e R3 do RetroPad como atalhos do turbo, em vez dos botões III e IV. Somente funciona no modo interruptor e enquanto não tiver outras atribuições aos botões L3 e R3. Você pode evitar o remapeamento dos botões III e IV ao alterar para o modo de controle de 6 botões com isso."
#define SGX_TURBO_DELAY_LABEL_PT_BR "Atraso do turbo"
#define SGX_TURBO_DELAY_INFO_0_PT_BR "Ajusta o intervalo entre as ativações do turbo (em quadros)."
#define SGX_CDIMAGECACHE_LABEL_PT_BR "Cache de imagem do CD (requer reinício)"
#define SGX_CDIMAGECACHE_INFO_0_PT_BR "Carrega a imagem completa na memória ao iniciar. Eventualmente, pode diminuir o tempo de carregamento ao custo de um tempo de inicialização maior."
#define SGX_CDBIOS_LABEL_PT_BR "BIOS de CD (requer reinício)"
#define SGX_CDBIOS_INFO_0_PT_BR "A maioria dos jogos podem rodar em \"System Card 3\". \"Games Express\" é necessário para vários jogos não licenciados."
#define OPTION_VAL_GAMES_EXPRESS_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_BR NULL
#define SGX_DETECT_GEXPRESS_LABEL_PT_BR "Detectar CD do Games Express (requer reinício)"
#define SGX_DETECT_GEXPRESS_INFO_0_PT_BR "Carrega automaticamente a BIOS do Games Express ao carregar jogos de CD, independentemente da configuração da BIOS de CD."
#define SGX_CDSPEED_LABEL_PT_BR "(CD) Velocidade do CD"
#define SGX_CDSPEED_LABEL_CAT_PT_BR "Velocidade do CD"
#define SGX_CDSPEED_INFO_0_PT_BR "Valores maiores permitem carregar mais rápido, mas podem causar problemas em alguns jogos."
#define SGX_ADPCMVOLUME_LABEL_PT_BR "(CD) Volume do ADPCM (%)"
#define SGX_ADPCMVOLUME_LABEL_CAT_PT_BR "Volume do ADPCM (%)"
#define SGX_ADPCMVOLUME_INFO_0_PT_BR "Somente em CD. Definir o controle de volume muito alto pode causar cortes de amostra."
#define SGX_ADPCMVOLUME_INFO_1_PT_BR "Definir o controle de volume muito alto pode causar cortes de amostra."
#define SGX_CDDAVOLUME_LABEL_PT_BR "(CD) Volume do CDDA (%)"
#define SGX_CDDAVOLUME_LABEL_CAT_PT_BR "Volume do CDDA (%)"
#define SGX_CDPSGVOLUME_LABEL_PT_BR "(CD) Volume do PSG (%)"
#define SGX_CDPSGVOLUME_LABEL_CAT_PT_BR "Volume do PSG de CD (%)"
#define SGX_FORCESGX_LABEL_PT_BR "Forçar emulação do SuperGrafx (requer reinício)"
#define SGX_FORCESGX_INFO_0_PT_BR "É útil para rodar jogos Homebrew ou isolar jogos que não rodam no modo SuperGrafx (como Space Harrier). Arquivos de jogos salvos não são compatíveis em todos os modos. É melhor deixar esta opção desligada caso não necessária. Alguns jogos de SuperGrafx (como Dai-Makaimura e Aldyns) alteram-se automaticamente para SuperGrafx independetemente desta configuração."
#define SGX_NOSPRITELIMIT_LABEL_PT_BR "Remover limite de sprites"
#define SGX_NOSPRITELIMIT_INFO_0_PT_BR "Remove o limite de hardware de 16 sprites por linha de verificação. ATENÇÃO: pode causar falhas gráficas em alguns jogos."
#define SGX_OCMULTIPLIER_LABEL_PT_BR "Multiplicador do Overclock de CPU (requer reinício)"
#define SGX_OCMULTIPLIER_INFO_0_PT_BR "Valores maiores podem reduzir a lentidão em jogos. ATENÇÃO: podem causar falhas e fechar o jogo."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_BR,
      CATEGORY_HACKS_INFO_0_PT_BR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_BR,
      CATEGORY_CD_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_PT_BR,
      NULL,
      SGX_PALETTE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_BR },
         { "Composite", OPTION_VAL_COMPOSITE_PT_BR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_PT_BR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "6:5", OPTION_VAL_6_5_PT_BR },
         { "4:3", OPTION_VAL_4_3_PT_BR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_PT_BR,
      NULL,
      SGX_HOVERSCAN_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PT_BR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_PT_BR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_PT_BR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_BR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_PT_BR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PT_BR },
         { "0.50", OPTION_VAL_0_50_PT_BR },
         { "0.75", OPTION_VAL_0_75_PT_BR },
         { "1.00", OPTION_VAL_1_00_PT_BR },
         { "1.25", OPTION_VAL_1_25_PT_BR },
         { "1.50", OPTION_VAL_1_50_PT_BR },
         { "1.75", OPTION_VAL_1_75_PT_BR },
         { "2.00", OPTION_VAL_2_00_PT_BR },
         { "2.25", OPTION_VAL_2_25_PT_BR },
         { "2.50", OPTION_VAL_2_50_PT_BR },
         { "2.75", OPTION_VAL_2_75_PT_BR },
         { "3.00", OPTION_VAL_3_00_PT_BR },
         { "3.25", OPTION_VAL_3_25_PT_BR },
         { "3.50", OPTION_VAL_3_50_PT_BR },
         { "3.75", OPTION_VAL_3_75_PT_BR },
         { "4.00", OPTION_VAL_4_00_PT_BR },
         { "4.25", OPTION_VAL_4_25_PT_BR },
         { "4.50", OPTION_VAL_4_50_PT_BR },
         { "4.75", OPTION_VAL_4_75_PT_BR },
         { "5.00", OPTION_VAL_5_00_PT_BR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_PT_BR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_PT_BR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_PT_BR,
      NULL,
      SGX_MULTITAP_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_PT_BR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_PT_BR },
         { "dedicated", OPTION_VAL_DEDICATED_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_PT_BR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_PT_BR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_PT_BR,
      NULL,
      SGX_CDBIOS_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_BR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_BR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_BR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_BR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_PT_BR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_PT_BR,
      SGX_CDSPEED_LABEL_CAT_PT_BR,
      SGX_CDSPEED_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_PT_BR,
      SGX_ADPCMVOLUME_LABEL_CAT_PT_BR,
      SGX_ADPCMVOLUME_INFO_0_PT_BR,
      SGX_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_PT_BR,
      SGX_CDDAVOLUME_LABEL_CAT_PT_BR,
      SGX_ADPCMVOLUME_INFO_0_PT_BR,
      SGX_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_PT_BR,
      SGX_CDPSGVOLUME_LABEL_CAT_PT_BR,
      SGX_ADPCMVOLUME_INFO_0_PT_BR,
      SGX_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_PT_BR,
      NULL,
      SGX_FORCESGX_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_PT_BR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_HACKS_LABEL_PT_PT NULL
#define CATEGORY_HACKS_INFO_0_PT_PT NULL
#define CATEGORY_CD_LABEL_PT_PT NULL
#define CATEGORY_CD_INFO_0_PT_PT NULL
#define SGX_PALETTE_LABEL_PT_PT NULL
#define SGX_PALETTE_INFO_0_PT_PT NULL
#define OPTION_VAL_RGB_PT_PT NULL
#define OPTION_VAL_COMPOSITE_PT_PT NULL
#define SGX_ASPECT_RATIO_LABEL_PT_PT "Proporção do ecrã"
#define SGX_ASPECT_RATIO_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define OPTION_VAL_6_5_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define SGX_HOVERSCAN_LABEL_PT_PT NULL
#define SGX_HOVERSCAN_INFO_0_PT_PT NULL
#define OPTION_VAL_352_PT_PT "352 (Padrão)"
#define SGX_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define SGX_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT "3 (Padrão)"
#define SGX_LAST_SCANLINE_LABEL_PT_PT NULL
#define SGX_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT "242 (Padrão)"
#define SGX_MOUSE_SENSITIVITY_LABEL_PT_PT NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_PT_PT NULL
#define OPTION_VAL_0_25_PT_PT NULL
#define OPTION_VAL_0_50_PT_PT NULL
#define OPTION_VAL_0_75_PT_PT NULL
#define OPTION_VAL_1_00_PT_PT NULL
#define OPTION_VAL_1_25_PT_PT NULL
#define OPTION_VAL_1_50_PT_PT NULL
#define OPTION_VAL_1_75_PT_PT NULL
#define OPTION_VAL_2_00_PT_PT NULL
#define OPTION_VAL_2_25_PT_PT NULL
#define OPTION_VAL_2_50_PT_PT NULL
#define OPTION_VAL_2_75_PT_PT NULL
#define OPTION_VAL_3_00_PT_PT NULL
#define OPTION_VAL_3_25_PT_PT NULL
#define OPTION_VAL_3_50_PT_PT NULL
#define OPTION_VAL_3_75_PT_PT NULL
#define OPTION_VAL_4_00_PT_PT NULL
#define OPTION_VAL_4_25_PT_PT NULL
#define OPTION_VAL_4_50_PT_PT NULL
#define OPTION_VAL_4_75_PT_PT NULL
#define OPTION_VAL_5_00_PT_PT NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_PT_PT NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_PT_PT NULL
#define SGX_DISABLE_SOFTRESET_LABEL_PT_PT NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_PT_PT NULL
#define SGX_MULTITAP_LABEL_PT_PT NULL
#define SGX_MULTITAP_INFO_0_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT NULL
#define OPTION_VAL_2_BUTTONS_PT_PT NULL
#define OPTION_VAL_6_BUTTONS_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT NULL
#define SGX_TURBO_TOGGLE_LABEL_PT_PT NULL
#define SGX_TURBO_TOGGLE_INFO_0_PT_PT NULL
#define OPTION_VAL_SWITCH_PT_PT NULL
#define OPTION_VAL_DEDICATED_PT_PT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT NULL
#define SGX_TURBO_DELAY_LABEL_PT_PT NULL
#define SGX_TURBO_DELAY_INFO_0_PT_PT NULL
#define SGX_CDIMAGECACHE_LABEL_PT_PT "Cache da Imagem do CD (Reinicialização necessária)"
#define SGX_CDIMAGECACHE_INFO_0_PT_PT NULL
#define SGX_CDBIOS_LABEL_PT_PT "BIOS do CD (Reinicialização necessária)"
#define SGX_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT "Cartão de Sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT "Cartão de Sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT "Cartão de Sistema 3"
#define SGX_DETECT_GEXPRESS_LABEL_PT_PT NULL
#define SGX_DETECT_GEXPRESS_INFO_0_PT_PT NULL
#define SGX_CDSPEED_LABEL_PT_PT "(CD) Velocidade do CD"
#define SGX_CDSPEED_LABEL_CAT_PT_PT "Velocidade do CD"
#define SGX_CDSPEED_INFO_0_PT_PT NULL
#define SGX_ADPCMVOLUME_LABEL_PT_PT NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_PT_PT NULL
#define SGX_ADPCMVOLUME_INFO_0_PT_PT NULL
#define SGX_ADPCMVOLUME_INFO_1_PT_PT NULL
#define SGX_CDDAVOLUME_LABEL_PT_PT NULL
#define SGX_CDDAVOLUME_LABEL_CAT_PT_PT NULL
#define SGX_CDPSGVOLUME_LABEL_PT_PT NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_PT_PT NULL
#define SGX_FORCESGX_LABEL_PT_PT NULL
#define SGX_FORCESGX_INFO_0_PT_PT NULL
#define SGX_NOSPRITELIMIT_LABEL_PT_PT NULL
#define SGX_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define SGX_OCMULTIPLIER_LABEL_PT_PT NULL
#define SGX_OCMULTIPLIER_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_PT,
      CATEGORY_HACKS_INFO_0_PT_PT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_PT,
      CATEGORY_CD_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_PT_PT,
      NULL,
      SGX_PALETTE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_PT },
         { "Composite", OPTION_VAL_COMPOSITE_PT_PT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_PT_PT,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "6:5", OPTION_VAL_6_5_PT_PT },
         { "4:3", OPTION_VAL_4_3_PT_PT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_PT_PT,
      NULL,
      SGX_HOVERSCAN_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PT_PT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_PT_PT,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_PT_PT,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_PT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_PT_PT,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PT_PT },
         { "0.50", OPTION_VAL_0_50_PT_PT },
         { "0.75", OPTION_VAL_0_75_PT_PT },
         { "1.00", OPTION_VAL_1_00_PT_PT },
         { "1.25", OPTION_VAL_1_25_PT_PT },
         { "1.50", OPTION_VAL_1_50_PT_PT },
         { "1.75", OPTION_VAL_1_75_PT_PT },
         { "2.00", OPTION_VAL_2_00_PT_PT },
         { "2.25", OPTION_VAL_2_25_PT_PT },
         { "2.50", OPTION_VAL_2_50_PT_PT },
         { "2.75", OPTION_VAL_2_75_PT_PT },
         { "3.00", OPTION_VAL_3_00_PT_PT },
         { "3.25", OPTION_VAL_3_25_PT_PT },
         { "3.50", OPTION_VAL_3_50_PT_PT },
         { "3.75", OPTION_VAL_3_75_PT_PT },
         { "4.00", OPTION_VAL_4_00_PT_PT },
         { "4.25", OPTION_VAL_4_25_PT_PT },
         { "4.50", OPTION_VAL_4_50_PT_PT },
         { "4.75", OPTION_VAL_4_75_PT_PT },
         { "5.00", OPTION_VAL_5_00_PT_PT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_PT_PT,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_PT_PT,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_PT_PT,
      NULL,
      SGX_MULTITAP_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_PT_PT,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_PT_PT },
         { "dedicated", OPTION_VAL_DEDICATED_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_PT_PT,
      NULL,
      SGX_TURBO_DELAY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_PT_PT,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_PT_PT,
      NULL,
      SGX_CDBIOS_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_PT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_PT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_PT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_PT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_PT_PT,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_PT_PT,
      SGX_CDSPEED_LABEL_CAT_PT_PT,
      SGX_CDSPEED_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_PT_PT,
      SGX_ADPCMVOLUME_LABEL_CAT_PT_PT,
      SGX_ADPCMVOLUME_INFO_0_PT_PT,
      SGX_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_PT_PT,
      SGX_CDDAVOLUME_LABEL_CAT_PT_PT,
      SGX_ADPCMVOLUME_INFO_0_PT_PT,
      SGX_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_PT_PT,
      SGX_CDPSGVOLUME_LABEL_CAT_PT_PT,
      SGX_ADPCMVOLUME_INFO_0_PT_PT,
      SGX_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_PT_PT,
      NULL,
      SGX_FORCESGX_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_PT_PT,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU "Настройка кадрирования, пропуска кадров и прочих параметров изображения."
#define CATEGORY_INPUT_LABEL_RU "Ввод"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для светового пистолета, мыши и NegCon."
#define CATEGORY_HACKS_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACKS_INFO_0_RU "Настройка разгона процессора и параметров точности эмуляции, влияющих на производительность и совместимость."
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU "Настройки, связанные с запуском игр на CD."
#define SGX_PALETTE_LABEL_RU "Цветовая палитра"
#define SGX_PALETTE_INFO_0_RU "Композитный режим имитирует оригинальное изображение с консоли и повышает детализацию для некоторых игр."
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU "Композитный"
#define SGX_ASPECT_RATIO_LABEL_RU "Соотношение сторон"
#define SGX_ASPECT_RATIO_INFO_0_RU "Выбор предпочтительного соотношения сторон контента. Для игр с частым переключением между режимами 256 и 352 и вкл. автовыбором соотношения сторон изменение размеров и появление чёрных полос можно минимизировать, установив для ширины по горизонтали значение 342,  т.к. оно находится в соотношении сторон режима ширины 256 (или близко к нему, что проверяется в игре Asuka 100%, использующей смену режимов)."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_6_5_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define SGX_HOVERSCAN_LABEL_RU "Кадрирование по горизонтали (только в режиме ширины 352)"
#define SGX_HOVERSCAN_INFO_0_RU "Установка максимальной ширины изображения. Уменьшение значения обрезает правый край картинки (для игр с шириной в 352 пикселя)."
#define OPTION_VAL_352_RU "352 (по умолчанию)"
#define SGX_INITIAL_SCANLINE_LABEL_RU "Первая строка развёртки"
#define SGX_INITIAL_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая первой. Повышение значения обрезает верхний край картинки."
#define OPTION_VAL_3_RU "3 (по умолчанию)"
#define SGX_LAST_SCANLINE_LABEL_RU "Последняя строка развёртки"
#define SGX_LAST_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая последней. Уменьшение значения обрезает нижний край картинки."
#define OPTION_VAL_242_RU "242 (по умолчанию)"
#define SGX_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define SGX_MOUSE_SENSITIVITY_INFO_0_RU "Повышение значения увеличивает скорость курсора мыши."
#define OPTION_VAL_0_25_RU NULL
#define OPTION_VAL_0_50_RU NULL
#define OPTION_VAL_0_75_RU "CONTEXTREQUEST"
#define OPTION_VAL_1_00_RU NULL
#define OPTION_VAL_1_25_RU NULL
#define OPTION_VAL_1_50_RU NULL
#define OPTION_VAL_1_75_RU NULL
#define OPTION_VAL_2_00_RU NULL
#define OPTION_VAL_2_25_RU NULL
#define OPTION_VAL_2_50_RU NULL
#define OPTION_VAL_2_75_RU NULL
#define OPTION_VAL_3_00_RU NULL
#define OPTION_VAL_3_25_RU NULL
#define OPTION_VAL_3_50_RU NULL
#define OPTION_VAL_3_75_RU NULL
#define OPTION_VAL_4_00_RU NULL
#define OPTION_VAL_4_25_RU NULL
#define OPTION_VAL_4_50_RU NULL
#define OPTION_VAL_4_75_RU NULL
#define OPTION_VAL_5_00_RU NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_RU "Разрешать противоположные направления"
#define SGX_UP_DOWN_ALLOWED_INFO_0_RU "При включении позволяет нажимать / быстро менять / одновременно зажимать направления влево и вправо (или вверх и вниз). Может вызывать глитчи, связанные с перемещением."
#define SGX_DISABLE_SOFTRESET_LABEL_RU "Откл. мягкий сброс (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_RU "Одновременное нажатие RUN и SELECT вместо сброса на короткое время отключает обе кнопки."
#define SGX_MULTITAP_LABEL_RU "Multitap на 5 контроллеров"
#define SGX_MULTITAP_INFO_0_RU "Включает эмуляцию multitap до 5 игроков. Отключение настройки требуется только для некоторых игр (напр. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU "Тип джойстика Игрока 1"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 1. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define OPTION_VAL_2_BUTTONS_RU "2-кнопочный"
#define OPTION_VAL_6_BUTTONS_RU "6-кнопочный"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU "Тип джойстика Игрока 2"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 2. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU "Тип джойстика Игрока 3"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 3. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU "Тип джойстика Игрока 4"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 4. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU "Тип джойстика Игрока 5"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 5. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define SGX_TURBO_TOGGLE_LABEL_RU "Режим турбо-кнопок"
#define SGX_TURBO_TOGGLE_INFO_0_RU "Включает турбо-кнопки. Активаторы (кнопки III и IV) могут работать как переключатели или как выделенные турбо-кнопки, срабатывающие при удержании."
#define OPTION_VAL_SWITCH_RU "Переключатели"
#define OPTION_VAL_DEDICATED_RU "Выделенные"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_RU "Альтернативное включение турбо"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_RU "Привязка кнопок RetroPad L3/R3 в качестве активаторов турбо вместо кнопок III и IV. Работает только в режиме 'Переключатели' и только если кнопки L3/R3 не используются для иных действий. Позволяет избежать повторной привязки кнопок III и IV при переводе контроллера в 6-кнопочный режим."
#define SGX_TURBO_DELAY_LABEL_RU "Задержка турбо"
#define SGX_TURBO_DELAY_INFO_0_RU "Установка интервала между повторами нажатий (в кадрах)."
#define SGX_CDIMAGECACHE_LABEL_RU "Кэшировать образ CD (требуется перезапуск)"
#define SGX_CDIMAGECACHE_INFO_0_RU "При запуске образ диска полностью загружается в память. Ускоряет загрузки, но увеличивает время запуска."
#define SGX_CDBIOS_LABEL_RU "BIOS CD (требуется перезапуск)"
#define SGX_CDBIOS_INFO_0_RU "Большинство игр запускается с 'System Card 3'. 'Games Express' требуется для отдельных нелицензированных игр."
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define SGX_DETECT_GEXPRESS_LABEL_RU "Определять диски Games Express (требуется перезапуск)"
#define SGX_DETECT_GEXPRESS_INFO_0_RU "Автоматическая загрузка BIOS'а Games Express при запуске игр Games Express, независимо от значения настройки BIOS CD."
#define SGX_CDSPEED_LABEL_RU "(CD) Скорость CD"
#define SGX_CDSPEED_LABEL_CAT_RU "Cкорость CD"
#define SGX_CDSPEED_INFO_0_RU "Более высокие значения ускоряют загрузки, но могут вызывать проблемы в отдельных играх."
#define SGX_ADPCMVOLUME_LABEL_RU "(CD) Громкость ADPCM"
#define SGX_ADPCMVOLUME_LABEL_CAT_RU "Громкость ADPCM (%)"
#define SGX_ADPCMVOLUME_INFO_0_RU "Только для игр на CD. Превышение уровня громкости может вызывать искажения звука."
#define SGX_ADPCMVOLUME_INFO_1_RU "Превышение уровня громкости может вызывать искажения звука."
#define SGX_CDDAVOLUME_LABEL_RU "(CD) Громкость CDDA"
#define SGX_CDDAVOLUME_LABEL_CAT_RU "Громкость CDDA (%)"
#define SGX_CDPSGVOLUME_LABEL_RU "(CD) Громкость PSG"
#define SGX_CDPSGVOLUME_LABEL_CAT_RU "Громкость PSG (%)"
#define SGX_FORCESGX_LABEL_RU "Принуд. режим SuperGrafx (требуется перезапуск)"
#define SGX_FORCESGX_INFO_0_RU "Используется при запуске homebrew и для исключения игр, не поддерживающих режим SuperGrafx (напр. Space Harrier). Не рекомендуется включать без необходимости. Игры SuperGrafx (такие как Dai-Makaimura, Aldyns) запускаются в данном режиме автоматически, независимо от положения настройки."
#define SGX_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов"
#define SGX_NOSPRITELIMIT_INFO_0_RU "Снимает аппаратное ограничение в 16 спрайтов на линии развёртки. ВНИМАНИЕ: в некоторых играх может вызывать графические баги."
#define SGX_OCMULTIPLIER_LABEL_RU "Множитель разгона CPU (требуется перезапуск)"
#define SGX_OCMULTIPLIER_INFO_0_RU "Повышение значения уменьшает замедления в играх. ВНИМАНИЕ: может приводить к багам и вылетам."

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RU,
      CATEGORY_HACKS_INFO_0_RU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RU,
      CATEGORY_CD_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_RU,
      NULL,
      SGX_PALETTE_INFO_0_RU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RU },
         { "Composite", OPTION_VAL_COMPOSITE_RU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_RU,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "6:5", OPTION_VAL_6_5_RU },
         { "4:3", OPTION_VAL_4_3_RU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_RU,
      NULL,
      SGX_HOVERSCAN_INFO_0_RU,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_RU },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_RU,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_RU,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_RU },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_RU,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_RU },
         { "0.50", OPTION_VAL_0_50_RU },
         { "0.75", OPTION_VAL_0_75_RU },
         { "1.00", OPTION_VAL_1_00_RU },
         { "1.25", OPTION_VAL_1_25_RU },
         { "1.50", OPTION_VAL_1_50_RU },
         { "1.75", OPTION_VAL_1_75_RU },
         { "2.00", OPTION_VAL_2_00_RU },
         { "2.25", OPTION_VAL_2_25_RU },
         { "2.50", OPTION_VAL_2_50_RU },
         { "2.75", OPTION_VAL_2_75_RU },
         { "3.00", OPTION_VAL_3_00_RU },
         { "3.25", OPTION_VAL_3_25_RU },
         { "3.50", OPTION_VAL_3_50_RU },
         { "3.75", OPTION_VAL_3_75_RU },
         { "4.00", OPTION_VAL_4_00_RU },
         { "4.25", OPTION_VAL_4_25_RU },
         { "4.50", OPTION_VAL_4_50_RU },
         { "4.75", OPTION_VAL_4_75_RU },
         { "5.00", OPTION_VAL_5_00_RU },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_RU,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_RU,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_RU,
      NULL,
      SGX_MULTITAP_INFO_0_RU,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_RU,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_RU },
         { "dedicated", OPTION_VAL_DEDICATED_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_RU,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_RU,
      NULL,
      SGX_TURBO_DELAY_INFO_0_RU,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_RU,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_RU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_RU,
      NULL,
      SGX_CDBIOS_INFO_0_RU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RU },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_RU,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_RU,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_RU,
      SGX_CDSPEED_LABEL_CAT_RU,
      SGX_CDSPEED_INFO_0_RU,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_RU,
      SGX_ADPCMVOLUME_LABEL_CAT_RU,
      SGX_ADPCMVOLUME_INFO_0_RU,
      SGX_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_RU,
      SGX_CDDAVOLUME_LABEL_CAT_RU,
      SGX_ADPCMVOLUME_INFO_0_RU,
      SGX_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_RU,
      SGX_CDPSGVOLUME_LABEL_CAT_RU,
      SGX_ADPCMVOLUME_INFO_0_RU,
      SGX_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_RU,
      NULL,
      SGX_FORCESGX_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_RU,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_RU,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK "Emulačné hacky"
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define SGX_PALETTE_LABEL_SK "Farebná paleta"
#define SGX_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK "Kompozit"
#define SGX_ASPECT_RATIO_LABEL_SK "Pomer strán"
#define SGX_ASPECT_RATIO_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_6_5_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define SGX_HOVERSCAN_LABEL_SK NULL
#define SGX_HOVERSCAN_INFO_0_SK NULL
#define OPTION_VAL_352_SK "352 (predvolené)"
#define SGX_INITIAL_SCANLINE_LABEL_SK NULL
#define SGX_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK "3 (predvolené)"
#define SGX_LAST_SCANLINE_LABEL_SK NULL
#define SGX_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK "242 (predvolené)"
#define SGX_MOUSE_SENSITIVITY_LABEL_SK "Citlivosť myši"
#define SGX_MOUSE_SENSITIVITY_INFO_0_SK NULL
#define OPTION_VAL_0_25_SK NULL
#define OPTION_VAL_0_50_SK NULL
#define OPTION_VAL_0_75_SK NULL
#define OPTION_VAL_1_00_SK NULL
#define OPTION_VAL_1_25_SK NULL
#define OPTION_VAL_1_50_SK NULL
#define OPTION_VAL_1_75_SK NULL
#define OPTION_VAL_2_00_SK NULL
#define OPTION_VAL_2_25_SK NULL
#define OPTION_VAL_2_50_SK NULL
#define OPTION_VAL_2_75_SK NULL
#define OPTION_VAL_3_00_SK NULL
#define OPTION_VAL_3_25_SK NULL
#define OPTION_VAL_3_50_SK NULL
#define OPTION_VAL_3_75_SK NULL
#define OPTION_VAL_4_00_SK NULL
#define OPTION_VAL_4_25_SK NULL
#define OPTION_VAL_4_50_SK NULL
#define OPTION_VAL_4_75_SK NULL
#define OPTION_VAL_5_00_SK NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_SK NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_SK NULL
#define SGX_DISABLE_SOFTRESET_LABEL_SK NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_SK NULL
#define SGX_MULTITAP_LABEL_SK NULL
#define SGX_MULTITAP_INFO_0_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK NULL
#define OPTION_VAL_2_BUTTONS_SK "2 tlačidlá"
#define OPTION_VAL_6_BUTTONS_SK "6 tlačidiel"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK NULL
#define SGX_TURBO_TOGGLE_LABEL_SK NULL
#define SGX_TURBO_TOGGLE_INFO_0_SK NULL
#define OPTION_VAL_SWITCH_SK "Prepnúť"
#define OPTION_VAL_DEDICATED_SK "Vyhradené"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SK NULL
#define SGX_TURBO_DELAY_LABEL_SK "Trvanie Turbo"
#define SGX_TURBO_DELAY_INFO_0_SK NULL
#define SGX_CDIMAGECACHE_LABEL_SK NULL
#define SGX_CDIMAGECACHE_INFO_0_SK NULL
#define SGX_CDBIOS_LABEL_SK NULL
#define SGX_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK "Systémová karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_SK "Systémová karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_SK "Systémová karta 3"
#define SGX_DETECT_GEXPRESS_LABEL_SK NULL
#define SGX_DETECT_GEXPRESS_INFO_0_SK NULL
#define SGX_CDSPEED_LABEL_SK "(CD) CD rýchlosť"
#define SGX_CDSPEED_LABEL_CAT_SK "CD rýchlosť"
#define SGX_CDSPEED_INFO_0_SK NULL
#define SGX_ADPCMVOLUME_LABEL_SK "(CD) ADPCM hlasitosť %"
#define SGX_ADPCMVOLUME_LABEL_CAT_SK "ADPCM hlasitosť %"
#define SGX_ADPCMVOLUME_INFO_0_SK NULL
#define SGX_ADPCMVOLUME_INFO_1_SK NULL
#define SGX_CDDAVOLUME_LABEL_SK "(CD) CDDA hlasitosť %"
#define SGX_CDDAVOLUME_LABEL_CAT_SK "CDDA hlasitosť %"
#define SGX_CDPSGVOLUME_LABEL_SK "(CD) PSG hlasitosť %"
#define SGX_CDPSGVOLUME_LABEL_CAT_SK "CD PSG hlasitosť %"
#define SGX_FORCESGX_LABEL_SK NULL
#define SGX_FORCESGX_INFO_0_SK NULL
#define SGX_NOSPRITELIMIT_LABEL_SK NULL
#define SGX_NOSPRITELIMIT_INFO_0_SK NULL
#define SGX_OCMULTIPLIER_LABEL_SK NULL
#define SGX_OCMULTIPLIER_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SK,
      CATEGORY_HACKS_INFO_0_SK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SK,
      CATEGORY_CD_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_SK,
      NULL,
      SGX_PALETTE_INFO_0_SK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SK },
         { "Composite", OPTION_VAL_COMPOSITE_SK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_SK,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "6:5", OPTION_VAL_6_5_SK },
         { "4:3", OPTION_VAL_4_3_SK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_SK,
      NULL,
      SGX_HOVERSCAN_INFO_0_SK,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SK },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_SK,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_SK,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SK },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_SK,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SK },
         { "0.50", OPTION_VAL_0_50_SK },
         { "0.75", OPTION_VAL_0_75_SK },
         { "1.00", OPTION_VAL_1_00_SK },
         { "1.25", OPTION_VAL_1_25_SK },
         { "1.50", OPTION_VAL_1_50_SK },
         { "1.75", OPTION_VAL_1_75_SK },
         { "2.00", OPTION_VAL_2_00_SK },
         { "2.25", OPTION_VAL_2_25_SK },
         { "2.50", OPTION_VAL_2_50_SK },
         { "2.75", OPTION_VAL_2_75_SK },
         { "3.00", OPTION_VAL_3_00_SK },
         { "3.25", OPTION_VAL_3_25_SK },
         { "3.50", OPTION_VAL_3_50_SK },
         { "3.75", OPTION_VAL_3_75_SK },
         { "4.00", OPTION_VAL_4_00_SK },
         { "4.25", OPTION_VAL_4_25_SK },
         { "4.50", OPTION_VAL_4_50_SK },
         { "4.75", OPTION_VAL_4_75_SK },
         { "5.00", OPTION_VAL_5_00_SK },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_SK,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_SK,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_SK,
      NULL,
      SGX_MULTITAP_INFO_0_SK,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_SK,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_SK },
         { "dedicated", OPTION_VAL_DEDICATED_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_SK,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_SK,
      NULL,
      SGX_TURBO_DELAY_INFO_0_SK,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_SK,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_SK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_SK,
      NULL,
      SGX_CDBIOS_INFO_0_SK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SK },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_SK,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_SK,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_SK,
      SGX_CDSPEED_LABEL_CAT_SK,
      SGX_CDSPEED_INFO_0_SK,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_SK,
      SGX_ADPCMVOLUME_LABEL_CAT_SK,
      SGX_ADPCMVOLUME_INFO_0_SK,
      SGX_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_SK,
      SGX_CDDAVOLUME_LABEL_CAT_SK,
      SGX_ADPCMVOLUME_INFO_0_SK,
      SGX_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_SK,
      SGX_CDPSGVOLUME_LABEL_CAT_SK,
      SGX_ADPCMVOLUME_INFO_0_SK,
      SGX_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_SK,
      NULL,
      SGX_FORCESGX_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_SK,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_SK,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR "Ulaz"
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_HACKS_LABEL_SR NULL
#define CATEGORY_HACKS_INFO_0_SR NULL
#define CATEGORY_CD_LABEL_SR NULL
#define CATEGORY_CD_INFO_0_SR NULL
#define SGX_PALETTE_LABEL_SR NULL
#define SGX_PALETTE_INFO_0_SR NULL
#define OPTION_VAL_RGB_SR NULL
#define OPTION_VAL_COMPOSITE_SR NULL
#define SGX_ASPECT_RATIO_LABEL_SR "Odnos ekrana"
#define SGX_ASPECT_RATIO_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_6_5_SR NULL
#define OPTION_VAL_4_3_SR NULL
#define SGX_HOVERSCAN_LABEL_SR NULL
#define SGX_HOVERSCAN_INFO_0_SR NULL
#define OPTION_VAL_352_SR NULL
#define SGX_INITIAL_SCANLINE_LABEL_SR NULL
#define SGX_INITIAL_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_3_SR NULL
#define SGX_LAST_SCANLINE_LABEL_SR NULL
#define SGX_LAST_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_242_SR NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_SR NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_SR NULL
#define OPTION_VAL_0_25_SR NULL
#define OPTION_VAL_0_50_SR NULL
#define OPTION_VAL_0_75_SR NULL
#define OPTION_VAL_1_00_SR NULL
#define OPTION_VAL_1_25_SR NULL
#define OPTION_VAL_1_50_SR NULL
#define OPTION_VAL_1_75_SR NULL
#define OPTION_VAL_2_00_SR NULL
#define OPTION_VAL_2_25_SR NULL
#define OPTION_VAL_2_50_SR NULL
#define OPTION_VAL_2_75_SR NULL
#define OPTION_VAL_3_00_SR NULL
#define OPTION_VAL_3_25_SR NULL
#define OPTION_VAL_3_50_SR NULL
#define OPTION_VAL_3_75_SR NULL
#define OPTION_VAL_4_00_SR NULL
#define OPTION_VAL_4_25_SR NULL
#define OPTION_VAL_4_50_SR NULL
#define OPTION_VAL_4_75_SR NULL
#define OPTION_VAL_5_00_SR NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_SR NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_SR NULL
#define SGX_DISABLE_SOFTRESET_LABEL_SR NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_SR NULL
#define SGX_MULTITAP_LABEL_SR NULL
#define SGX_MULTITAP_INFO_0_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR NULL
#define OPTION_VAL_2_BUTTONS_SR NULL
#define OPTION_VAL_6_BUTTONS_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR NULL
#define SGX_TURBO_TOGGLE_LABEL_SR NULL
#define SGX_TURBO_TOGGLE_INFO_0_SR NULL
#define OPTION_VAL_SWITCH_SR NULL
#define OPTION_VAL_DEDICATED_SR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SR NULL
#define SGX_TURBO_DELAY_LABEL_SR NULL
#define SGX_TURBO_DELAY_INFO_0_SR NULL
#define SGX_CDIMAGECACHE_LABEL_SR NULL
#define SGX_CDIMAGECACHE_INFO_0_SR NULL
#define SGX_CDBIOS_LABEL_SR NULL
#define SGX_CDBIOS_INFO_0_SR NULL
#define OPTION_VAL_GAMES_EXPRESS_SR NULL
#define OPTION_VAL_SYSTEM_CARD_1_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_SR NULL
#define SGX_DETECT_GEXPRESS_LABEL_SR NULL
#define SGX_DETECT_GEXPRESS_INFO_0_SR NULL
#define SGX_CDSPEED_LABEL_SR NULL
#define SGX_CDSPEED_LABEL_CAT_SR NULL
#define SGX_CDSPEED_INFO_0_SR NULL
#define SGX_ADPCMVOLUME_LABEL_SR NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_SR NULL
#define SGX_ADPCMVOLUME_INFO_0_SR NULL
#define SGX_ADPCMVOLUME_INFO_1_SR NULL
#define SGX_CDDAVOLUME_LABEL_SR NULL
#define SGX_CDDAVOLUME_LABEL_CAT_SR NULL
#define SGX_CDPSGVOLUME_LABEL_SR NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_SR NULL
#define SGX_FORCESGX_LABEL_SR NULL
#define SGX_FORCESGX_INFO_0_SR NULL
#define SGX_NOSPRITELIMIT_LABEL_SR NULL
#define SGX_NOSPRITELIMIT_INFO_0_SR NULL
#define SGX_OCMULTIPLIER_LABEL_SR NULL
#define SGX_OCMULTIPLIER_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SR,
      CATEGORY_HACKS_INFO_0_SR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SR,
      CATEGORY_CD_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_SR,
      NULL,
      SGX_PALETTE_INFO_0_SR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SR },
         { "Composite", OPTION_VAL_COMPOSITE_SR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_SR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "6:5", OPTION_VAL_6_5_SR },
         { "4:3", OPTION_VAL_4_3_SR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_SR,
      NULL,
      SGX_HOVERSCAN_INFO_0_SR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_SR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_SR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_SR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SR },
         { "0.50", OPTION_VAL_0_50_SR },
         { "0.75", OPTION_VAL_0_75_SR },
         { "1.00", OPTION_VAL_1_00_SR },
         { "1.25", OPTION_VAL_1_25_SR },
         { "1.50", OPTION_VAL_1_50_SR },
         { "1.75", OPTION_VAL_1_75_SR },
         { "2.00", OPTION_VAL_2_00_SR },
         { "2.25", OPTION_VAL_2_25_SR },
         { "2.50", OPTION_VAL_2_50_SR },
         { "2.75", OPTION_VAL_2_75_SR },
         { "3.00", OPTION_VAL_3_00_SR },
         { "3.25", OPTION_VAL_3_25_SR },
         { "3.50", OPTION_VAL_3_50_SR },
         { "3.75", OPTION_VAL_3_75_SR },
         { "4.00", OPTION_VAL_4_00_SR },
         { "4.25", OPTION_VAL_4_25_SR },
         { "4.50", OPTION_VAL_4_50_SR },
         { "4.75", OPTION_VAL_4_75_SR },
         { "5.00", OPTION_VAL_5_00_SR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_SR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_SR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_SR,
      NULL,
      SGX_MULTITAP_INFO_0_SR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_SR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_SR },
         { "dedicated", OPTION_VAL_DEDICATED_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_SR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_SR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_SR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_SR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_SR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_SR,
      NULL,
      SGX_CDBIOS_INFO_0_SR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_SR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_SR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_SR,
      SGX_CDSPEED_LABEL_CAT_SR,
      SGX_CDSPEED_INFO_0_SR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_SR,
      SGX_ADPCMVOLUME_LABEL_CAT_SR,
      SGX_ADPCMVOLUME_INFO_0_SR,
      SGX_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_SR,
      SGX_CDDAVOLUME_LABEL_CAT_SR,
      SGX_ADPCMVOLUME_INFO_0_SR,
      SGX_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_SR,
      SGX_CDPSGVOLUME_LABEL_CAT_SR,
      SGX_ADPCMVOLUME_INFO_0_SR,
      SGX_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_SR,
      NULL,
      SGX_FORCESGX_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_SR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_SR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV "Konfigurera bildskärpsbeskärning, bildruteskippning och andra bildutdata-parametrar."
#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV "Konfigurera ljuspistol, mus och NegCon inmatning."
#define CATEGORY_HACKS_LABEL_SV "Emulator Hacks"
#define CATEGORY_HACKS_INFO_0_SV "Konfigurera processorns överklockning och emuleringsnoggrannhetsparametrar som påverkar prestanda och kompatibilitet på låg nivå."
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV "Konfigurera inställningar relaterade till CD-spel."
#define SGX_PALETTE_LABEL_SV "Färgpalett"
#define SGX_PALETTE_INFO_0_SV "Composite försöker återskapa den ursprungliga konsolens utmatning och kan visa fler detaljer i vissa spel."
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV "Komposit"
#define SGX_ASPECT_RATIO_LABEL_SV "Bildformat"
#define SGX_ASPECT_RATIO_INFO_0_SV "Välj föredraget bildformat för innehåll. När du använder spel som ständigt växlar mellan 256- och 352-läge och använder auto-aspekt är det bäst att ställa den horisontella bredden till 342 för att minimera omformatering och extra svarta linjer, eftersom denna bredd är i förhållande till 256 breddläge (eller något liknande, testa med Asuka 100% som är ett av spelen som växlar mellan dessa lägen)."
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_6_5_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define SGX_HOVERSCAN_LABEL_SV "Horisontellt övergång (endast 352 breddläge)"
#define SGX_HOVERSCAN_INFO_0_SV "Välj den maximala bildbredden som ska visas. Lägre värden kommer att beskära högersidan av bilden (för spel med 352 px bredd)."
#define OPTION_VAL_352_SV "352 (Standard)"
#define SGX_INITIAL_SCANLINE_LABEL_SV "Initiell skanlinje"
#define SGX_INITIAL_SCANLINE_INFO_0_SV "Första renderade skanlinjen. Högre värden kommer att beskära toppen av bilden."
#define OPTION_VAL_3_SV "3 (Standard)"
#define SGX_LAST_SCANLINE_LABEL_SV "Sista skanlinjen"
#define SGX_LAST_SCANLINE_INFO_0_SV "Sista renderade skanlinjen. Lägre värden kommer att beskära botten av bilden."
#define OPTION_VAL_242_SV "242 (Standard)"
#define SGX_MOUSE_SENSITIVITY_LABEL_SV "Muskänslighet"
#define SGX_MOUSE_SENSITIVITY_INFO_0_SV "Högre värden kommer få muspekaren att röra sig snabbare."
#define OPTION_VAL_0_25_SV NULL
#define OPTION_VAL_0_50_SV NULL
#define OPTION_VAL_0_75_SV NULL
#define OPTION_VAL_1_00_SV NULL
#define OPTION_VAL_1_25_SV NULL
#define OPTION_VAL_1_50_SV NULL
#define OPTION_VAL_1_75_SV NULL
#define OPTION_VAL_2_00_SV NULL
#define OPTION_VAL_2_25_SV NULL
#define OPTION_VAL_2_50_SV NULL
#define OPTION_VAL_2_75_SV NULL
#define OPTION_VAL_3_00_SV NULL
#define OPTION_VAL_3_25_SV NULL
#define OPTION_VAL_3_50_SV NULL
#define OPTION_VAL_3_75_SV NULL
#define OPTION_VAL_4_00_SV NULL
#define OPTION_VAL_4_25_SV NULL
#define OPTION_VAL_4_50_SV NULL
#define OPTION_VAL_4_75_SV NULL
#define OPTION_VAL_5_00_SV NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_SV "Tillåt motsatta riktningar"
#define SGX_UP_DOWN_ALLOWED_INFO_0_SV "Genom att aktivera detta tillåts att trycka på / snabbt alternera / hålla ned både vänster och höger (eller upp och ned) riktningar samtidigt. Detta kan orsaka rörelsebaserade fel."
#define SGX_DISABLE_SOFTRESET_LABEL_SV "Inaktivera mjukåterställning (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_SV "När RUN och SELECT trycks ned samtidigt, inaktiveras båda knapparna tillfälligt istället för att återställa dem."
#define SGX_MULTITAP_LABEL_SV "Multitap-flerspelaradapter med 5-portar kontroller"
#define SGX_MULTITAP_INFO_0_SV "Aktivera emulering av flerspelar-adapter upp till 5-spelare. Att inaktivera detta krävs endast i vissa fall (t.ex. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV "Standard joypad-typ för spelare 1 (P1)"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV "Välj detta ifall port 1-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define OPTION_VAL_2_BUTTONS_SV "2 knappar"
#define OPTION_VAL_6_BUTTONS_SV "6 knappar"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV "Standard joypad-typ för spelare 2 (P2)"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV "Välj detta ifall port 2-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV "Standard joypad-typ för spelare 3 (P3)"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV "Välj detta ifall port 3-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV "Standard joypad-typ för spelare 4 (P4)"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV "Välj detta ifall port 4-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV "Standard joypad-typ för spelare 5 (P5)"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV "Välj detta ifall port 5-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define SGX_TURBO_TOGGLE_LABEL_SV "Turbo snabbtangent-läge"
#define SGX_TURBO_TOGGLE_INFO_0_SV "Aktivera turboknappar. Snabbtangenter (knapparna III och IV) kan bete sig som antingen växla eller dedikerade (håll för att använda) turboknappar."
#define OPTION_VAL_SWITCH_SV "Växla"
#define OPTION_VAL_DEDICATED_SV "Dedikerad"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SV "Alternativ snabbtangent för turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SV "Tilldela RetroPads L3/R3-knappar som snabbtangenter för turbo-läge istället för knappar III och IV. Fungerar endast i \"Växel\"-läget och endast så länge inget är tilldelat L3/R3-knapparna. Du kan undvika omkartläggning av knappar III och IV när du växlar till 6-knapps kontrollläge med detta."
#define SGX_TURBO_DELAY_LABEL_SV "Turbofördröjning"
#define SGX_TURBO_DELAY_INFO_0_SV "Justera tiden mellan turboeld (i bildrutor)."
#define SGX_CDIMAGECACHE_LABEL_SV "Skivavbildningscache (omstart krävs)"
#define SGX_CDIMAGECACHE_INFO_0_SV "Ladda in hela avbilden i minnet vid start. Kan potentiellt minska laddningstiderna till förmån för en ökad starttid."
#define SGX_CDBIOS_LABEL_SV "CD-BIOS (omstart krävs)"
#define SGX_CDBIOS_INFO_0_SV "De flesta spel kan köras på \"Systemkort 3\". \"Games Express\" krävs för flera olicensierade spel."
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define SGX_DETECT_GEXPRESS_LABEL_SV "Identifiera Games Express CD-skivor (Omstart krävs)"
#define SGX_DETECT_GEXPRESS_INFO_0_SV "Ladda automatiskt in Games Express-BIOS oavsett vilken CD-BIOS-inställning den har när Games Express CD-spel laddas in."
#define SGX_CDSPEED_LABEL_SV "(CD) CD-hastighet"
#define SGX_CDSPEED_LABEL_CAT_SV "CD-hastighet"
#define SGX_CDSPEED_INFO_0_SV "Högre värden möjliggör snabbare laddningstider men kan orsaka problem med några spel."
#define SGX_ADPCMVOLUME_LABEL_SV "(CD) ADPCM Volym %"
#define SGX_ADPCMVOLUME_LABEL_CAT_SV "Volym för ADPCM %"
#define SGX_ADPCMVOLUME_INFO_0_SV "Endast CD-spel. Ifall du ställer in volymen för högt kan ljudkvaliten försämras och leda till samplingsklippning."
#define SGX_ADPCMVOLUME_INFO_1_SV "Ifall du ställer in volymen för högt kan ljudkvaliten försämras och leda till samplingsklippning."
#define SGX_CDDAVOLUME_LABEL_SV "(CD) CDDA Volym %"
#define SGX_CDDAVOLUME_LABEL_CAT_SV "Volym för CDDA %"
#define SGX_CDPSGVOLUME_LABEL_SV "(CD) PSG Volym %"
#define SGX_CDPSGVOLUME_LABEL_CAT_SV "Volym för CD PSG %"
#define SGX_FORCESGX_LABEL_SV "Tvinga SuperGrafx-emulering (Omstart Krävs)"
#define SGX_FORCESGX_INFO_0_SV "Detta är till hjälp för att köra homebrew spel eller isolera spel som inte kommer att fungera i SuperGrafx-läget (som Space Harrier). Sparad status är inte kompatibla med varje läge. Det är bättre att lämna denna inställning avstängd om det inte behövs. Kända SuperGrafx-spel (som Dai-Makaimura, Aldyns) kommer automatiskt att växla till SuperGrafx oavsett denna inställning."
#define SGX_NOSPRITELIMIT_LABEL_SV "Ingen blockfigursgräns"
#define SGX_NOSPRITELIMIT_INFO_0_SV "Ta bort hårdvarubegränsningen på 16 sprites per skanlinje. VARNING!: Kan orsaka grafikfel i vissa spel."
#define SGX_OCMULTIPLIER_LABEL_SV "CPU-överklockningsmultiplikator (Omstart krävs)"
#define SGX_OCMULTIPLIER_INFO_0_SV "Högre värden kan minska inbromsningar i spel. VARNING!: Kan orsaka fel och krascher."

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SV,
      CATEGORY_HACKS_INFO_0_SV
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SV,
      CATEGORY_CD_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_SV,
      NULL,
      SGX_PALETTE_INFO_0_SV,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SV },
         { "Composite", OPTION_VAL_COMPOSITE_SV },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_SV,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "6:5", OPTION_VAL_6_5_SV },
         { "4:3", OPTION_VAL_4_3_SV },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_SV,
      NULL,
      SGX_HOVERSCAN_INFO_0_SV,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SV },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_SV,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_SV,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SV },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_SV,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SV },
         { "0.50", OPTION_VAL_0_50_SV },
         { "0.75", OPTION_VAL_0_75_SV },
         { "1.00", OPTION_VAL_1_00_SV },
         { "1.25", OPTION_VAL_1_25_SV },
         { "1.50", OPTION_VAL_1_50_SV },
         { "1.75", OPTION_VAL_1_75_SV },
         { "2.00", OPTION_VAL_2_00_SV },
         { "2.25", OPTION_VAL_2_25_SV },
         { "2.50", OPTION_VAL_2_50_SV },
         { "2.75", OPTION_VAL_2_75_SV },
         { "3.00", OPTION_VAL_3_00_SV },
         { "3.25", OPTION_VAL_3_25_SV },
         { "3.50", OPTION_VAL_3_50_SV },
         { "3.75", OPTION_VAL_3_75_SV },
         { "4.00", OPTION_VAL_4_00_SV },
         { "4.25", OPTION_VAL_4_25_SV },
         { "4.50", OPTION_VAL_4_50_SV },
         { "4.75", OPTION_VAL_4_75_SV },
         { "5.00", OPTION_VAL_5_00_SV },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_SV,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_SV,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_SV,
      NULL,
      SGX_MULTITAP_INFO_0_SV,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_SV,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_SV },
         { "dedicated", OPTION_VAL_DEDICATED_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_SV,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_SV,
      NULL,
      SGX_TURBO_DELAY_INFO_0_SV,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_SV,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_SV,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_SV,
      NULL,
      SGX_CDBIOS_INFO_0_SV,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SV },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SV },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SV },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SV },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_SV,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_SV,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_SV,
      SGX_CDSPEED_LABEL_CAT_SV,
      SGX_CDSPEED_INFO_0_SV,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_SV,
      SGX_ADPCMVOLUME_LABEL_CAT_SV,
      SGX_ADPCMVOLUME_INFO_0_SV,
      SGX_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_SV,
      SGX_CDDAVOLUME_LABEL_CAT_SV,
      SGX_ADPCMVOLUME_INFO_0_SV,
      SGX_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_SV,
      SGX_CDPSGVOLUME_LABEL_CAT_SV,
      SGX_ADPCMVOLUME_INFO_0_SV,
      SGX_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_SV,
      NULL,
      SGX_FORCESGX_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_SV,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_SV,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR "Görüntü kırpma, kare atlama ve diğer görüntü çıktı parametrelerini yapılandırın."
#define CATEGORY_INPUT_LABEL_TR "Giriş"
#define CATEGORY_INPUT_INFO_0_TR "Light gun, fare ve NegCon girişini yapılandırın."
#define CATEGORY_HACKS_LABEL_TR "Emülatör Geliştirmeleri"
#define CATEGORY_HACKS_INFO_0_TR "Düşük seviyeli performans ve uyumluluğu etkileyen işlemci hız aşırtma ve emulatör doğruluğu parametrelerini yapılandırın."
#define CATEGORY_CD_LABEL_TR NULL
#define CATEGORY_CD_INFO_0_TR "CD oyunlarıyla ilgili ayarları yapılandırın."
#define SGX_PALETTE_LABEL_TR "Renk Paleti"
#define SGX_PALETTE_INFO_0_TR "Kompozit video ayarı orjinal konsolun video çıkışını taklit etmeye çalışır ve bazı oyunlarda daha fazla ayrıntı sunabilir."
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_COMPOSITE_TR NULL
#define SGX_ASPECT_RATIO_LABEL_TR "En Boy Oranı"
#define SGX_ASPECT_RATIO_INFO_0_TR "Tercih edilen içerik en boy oranını seçin. Sürekli olarak 256 ve 352 kipleri arasında geçiş yapan ve otomatik en boy oranını kullanan oyunları kullanırken, yeniden boyutlandırmayı ve fazladan siyah çizgileri en aza indirmek için yatay genişliği 342 olarak ayarlamak en iyisidir, çünkü bu genişlik 256 genişlik kipi oranındadır (sadece test edin, bu kipler arasında geçiş yapan oyunlardan biri olan Asuka 100% ile)."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_6_5_TR NULL
#define OPTION_VAL_4_3_TR NULL
#define SGX_HOVERSCAN_LABEL_TR "Yatay Aşırı Tarama (Yalnızca 352 Genişlik Kipi)"
#define SGX_HOVERSCAN_INFO_0_TR "Gösterilecek azami görüntü genişliği. Düşürülen değerler görüntünün sağ tarafını kırpacaktır. (352 pk genişliğindeki oyunlar)."
#define OPTION_VAL_352_TR "352 (Varsayılan)"
#define SGX_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define SGX_INITIAL_SCANLINE_INFO_0_TR "İlk işlenen tarama çizgisi. Yükseltilen değerler görüntünün üstünü kırpacaktır."
#define OPTION_VAL_3_TR "3 (Varsayılan)"
#define SGX_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define SGX_LAST_SCANLINE_INFO_0_TR "Son işlenen tarama çizgisi. Düşürülen değerler görselin alt kısmını kırpacaktır."
#define OPTION_VAL_242_TR "242 (Varsayılan)"
#define SGX_MOUSE_SENSITIVITY_LABEL_TR "Fare Hassasiyeti"
#define SGX_MOUSE_SENSITIVITY_INFO_0_TR "Daha yüksek değerler, fare imlecinin daha hızlı hareket etmesini sağlar."
#define OPTION_VAL_0_25_TR NULL
#define OPTION_VAL_0_50_TR NULL
#define OPTION_VAL_0_75_TR NULL
#define OPTION_VAL_1_00_TR NULL
#define OPTION_VAL_1_25_TR NULL
#define OPTION_VAL_1_50_TR NULL
#define OPTION_VAL_1_75_TR NULL
#define OPTION_VAL_2_00_TR NULL
#define OPTION_VAL_2_25_TR NULL
#define OPTION_VAL_2_50_TR NULL
#define OPTION_VAL_2_75_TR NULL
#define OPTION_VAL_3_00_TR NULL
#define OPTION_VAL_3_25_TR NULL
#define OPTION_VAL_3_50_TR NULL
#define OPTION_VAL_3_75_TR NULL
#define OPTION_VAL_4_00_TR NULL
#define OPTION_VAL_4_25_TR NULL
#define OPTION_VAL_4_50_TR NULL
#define OPTION_VAL_4_75_TR NULL
#define OPTION_VAL_5_00_TR NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_TR "Karşı Yönlere İzin Ver"
#define SGX_UP_DOWN_ALLOWED_INFO_0_TR "Bunun etkinleştirilmesi, aynı anda hem sol hem de sağ (veya yukarı ve aşağı) yönlere basılmasına / hızlı bir şekilde değiştirilmesine / basılı tutulmasına olanak tanır. Bu, hareket tabanlı aksaklıklara neden olabilir."
#define SGX_DISABLE_SOFTRESET_LABEL_TR "Yazılımdan Sıfırlama Devre Dışı (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_TR "RUN ve SELECT tuşlarına aynı anda basıldığında, yeniden başlatmak yerine iki tuşu da geçici olarak devre dışı bırak."
#define SGX_MULTITAP_LABEL_TR "Multitap 5-port Kontrolcü"
#define SGX_MULTITAP_INFO_0_TR "5 oyuncuya kadar çoklu kontrolcü desteğini etkinleştirin. Bunu devre dışı bırakmak bazı durumlarda gereklidir (örnek. Cho Aniki)."
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR "P1 Varsayılan Joypad Tipi"
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR "Port 1 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define OPTION_VAL_2_BUTTONS_TR "2 Düğmeli"
#define OPTION_VAL_6_BUTTONS_TR "6 Düğmeli"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR "P2 Varsayılan Joypad Tipi"
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR "Port 2 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR "P3 Varsayılan Joypad Tipi"
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR "Port 3 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR "P4 Varsayılan Joypad Tipi"
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR "Port 4 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR "P5 Varsayılan Joypad Tipi"
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR "Port 5 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define SGX_TURBO_TOGGLE_LABEL_TR "Turbo Kısayol Tuşu Kipi"
#define SGX_TURBO_TOGGLE_INFO_0_TR "Turbo düğmelerini etkinleştirin. Kısayol tuşları (düğmeler III ve IV), geçiş anahtarı veya özel (kullanmak için basılı tutun) turbo düğmeleri gibi davranabilir."
#define OPTION_VAL_SWITCH_TR "Değiştir"
#define OPTION_VAL_DEDICATED_TR "Atanmış"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_TR "Alternatif Turbo Kısayol Tuşu"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_TR "RetroPad L3/R3 düğmelerini III ve IV düğmeleri yerine turbo kısayol tuşları olarak atayın. Yalnızca 'Geçiş' kipinde ve L3/R3 düğmelerine hiçbir şey atanmadığı sürece çalışır. Bununla 6 düğmeli denetleyici kipine geçerken III ve IV düğmelerinin yeniden eşlenmesini önleyebilirsiniz."
#define SGX_TURBO_DELAY_LABEL_TR "Turbo Gecikmesi"
#define SGX_TURBO_DELAY_INFO_0_TR "Turbo sinyallerinin zamanlamasını ayarla. (Kare başına)."
#define SGX_CDIMAGECACHE_LABEL_TR "CD Kalıbı Önbelleği (Yeniden Başlatılmalı)"
#define SGX_CDIMAGECACHE_INFO_0_TR "Başlangıç sırasında bütün kalıbı hafızaya yükler. Başlangıç sürecini uzatmak pahasına oyundaki yüklenme sürelerini kısaltabilir."
#define SGX_CDBIOS_LABEL_TR "CD BIOS (Yeniden Başlatılmalı)"
#define SGX_CDBIOS_INFO_0_TR "Oyunların çoğu \"System Card 3\" üzerinde çalışabilir. Birkaç lisanssız oyun, Game Express'e ihtiyaç duyar."
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR "Sistem Kartı 1"
#define OPTION_VAL_SYSTEM_CARD_2_TR "Sistem Kartı 2"
#define OPTION_VAL_SYSTEM_CARD_3_TR "Sistem Kartı 3"
#define SGX_DETECT_GEXPRESS_LABEL_TR "Games Express CD Algıla (Yeniden Başlatılmalı)"
#define SGX_DETECT_GEXPRESS_INFO_0_TR "Games Express CD oyunlarını yüklerken, CD BIOS ayarından bağımsız olarak Games Express BIOS'u otomatik olarak yükleyin."
#define SGX_CDSPEED_LABEL_TR "(CD) CD Hızı"
#define SGX_CDSPEED_LABEL_CAT_TR "CD Hızı"
#define SGX_CDSPEED_INFO_0_TR "Yükseltilen değerler daha hızlı yüklenmeyi etkinleştiririr, birkaç oyunda sorunlara sebep olabilir."
#define SGX_ADPCMVOLUME_LABEL_TR "(CD) ADPCM Ses Seviyesi %"
#define SGX_ADPCMVOLUME_LABEL_CAT_TR "ADPCM Ses Seviyesi %"
#define SGX_ADPCMVOLUME_INFO_0_TR "Sadece CD oyunları için. Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define SGX_ADPCMVOLUME_INFO_1_TR "Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define SGX_CDDAVOLUME_LABEL_TR "(CD) CDDA Ses Seviyesi %"
#define SGX_CDDAVOLUME_LABEL_CAT_TR "CDDA Ses Seviyesi %"
#define SGX_CDPSGVOLUME_LABEL_TR "(CD) PSG Ses Seviyesi %"
#define SGX_CDPSGVOLUME_LABEL_CAT_TR "CD PSG Ses Seviyesi %"
#define SGX_FORCESGX_LABEL_TR "SuperGrafx Taklidine Zorla (Yeniden Başlatılmalı)"
#define SGX_FORCESGX_INFO_0_TR "Bu, özel yapım oyunları çalıştırmak veya SuperGrafx kipinde çalışmayan oyunları (Space Harrier gibi) izole etmek için yararlıdır. Durum kayıtları her kiple uyumlu değildir. Gerekmedikçe bu seçeneği kapalı bırakmak daha iyidir. Bilinen SuperGrafx oyunları (Dai-Makaimura, Aldyns gibi) bu seçeneğe bakılmaksızın otomatik olarak SuperGrafx'a geçecektir."
#define SGX_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır"
#define SGX_NOSPRITELIMIT_INFO_0_TR "Tarama çizgisi başına 16 hareket donanım sınırını kaldırır. UYARI: Bazı oyunlarda bozulmlara sebep olabilir."
#define SGX_OCMULTIPLIER_LABEL_TR "CPU Hız Aşırtma Çarpanı (Yeniden Başlatılmalı)"
#define SGX_OCMULTIPLIER_INFO_0_TR "Yükseltilen değer bazı oyunlardaki yavaşlamaları düşürebilir. UYARI: Bozulmalara ve çökmelere sebep olabilir."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TR,
      CATEGORY_HACKS_INFO_0_TR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_TR,
      CATEGORY_CD_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_TR,
      NULL,
      SGX_PALETTE_INFO_0_TR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_TR },
         { "Composite", OPTION_VAL_COMPOSITE_TR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_TR,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "6:5", OPTION_VAL_6_5_TR },
         { "4:3", OPTION_VAL_4_3_TR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_TR,
      NULL,
      SGX_HOVERSCAN_INFO_0_TR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_TR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_TR,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_TR,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_TR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_TR,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_TR },
         { "0.50", OPTION_VAL_0_50_TR },
         { "0.75", OPTION_VAL_0_75_TR },
         { "1.00", OPTION_VAL_1_00_TR },
         { "1.25", OPTION_VAL_1_25_TR },
         { "1.50", OPTION_VAL_1_50_TR },
         { "1.75", OPTION_VAL_1_75_TR },
         { "2.00", OPTION_VAL_2_00_TR },
         { "2.25", OPTION_VAL_2_25_TR },
         { "2.50", OPTION_VAL_2_50_TR },
         { "2.75", OPTION_VAL_2_75_TR },
         { "3.00", OPTION_VAL_3_00_TR },
         { "3.25", OPTION_VAL_3_25_TR },
         { "3.50", OPTION_VAL_3_50_TR },
         { "3.75", OPTION_VAL_3_75_TR },
         { "4.00", OPTION_VAL_4_00_TR },
         { "4.25", OPTION_VAL_4_25_TR },
         { "4.50", OPTION_VAL_4_50_TR },
         { "4.75", OPTION_VAL_4_75_TR },
         { "5.00", OPTION_VAL_5_00_TR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_TR,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_TR,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_TR,
      NULL,
      SGX_MULTITAP_INFO_0_TR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_TR,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_TR },
         { "dedicated", OPTION_VAL_DEDICATED_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_TR,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_TR,
      NULL,
      SGX_TURBO_DELAY_INFO_0_TR,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_TR,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_TR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_TR,
      NULL,
      SGX_CDBIOS_INFO_0_TR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_TR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_TR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_TR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_TR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_TR,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_TR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_TR,
      SGX_CDSPEED_LABEL_CAT_TR,
      SGX_CDSPEED_INFO_0_TR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_TR,
      SGX_ADPCMVOLUME_LABEL_CAT_TR,
      SGX_ADPCMVOLUME_INFO_0_TR,
      SGX_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_TR,
      SGX_CDDAVOLUME_LABEL_CAT_TR,
      SGX_ADPCMVOLUME_INFO_0_TR,
      SGX_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_TR,
      SGX_CDPSGVOLUME_LABEL_CAT_TR,
      SGX_ADPCMVOLUME_INFO_0_TR,
      SGX_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_TR,
      NULL,
      SGX_FORCESGX_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_TR,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_TR,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_TT */

#define CATEGORY_VIDEO_LABEL_TT "Видео"
#define CATEGORY_VIDEO_INFO_0_TT NULL
#define CATEGORY_INPUT_LABEL_TT NULL
#define CATEGORY_INPUT_INFO_0_TT NULL
#define CATEGORY_HACKS_LABEL_TT NULL
#define CATEGORY_HACKS_INFO_0_TT NULL
#define CATEGORY_CD_LABEL_TT NULL
#define CATEGORY_CD_INFO_0_TT NULL
#define SGX_PALETTE_LABEL_TT NULL
#define SGX_PALETTE_INFO_0_TT NULL
#define OPTION_VAL_RGB_TT NULL
#define OPTION_VAL_COMPOSITE_TT NULL
#define SGX_ASPECT_RATIO_LABEL_TT NULL
#define SGX_ASPECT_RATIO_INFO_0_TT NULL
#define OPTION_VAL_AUTO_TT "Автоматик"
#define OPTION_VAL_6_5_TT NULL
#define OPTION_VAL_4_3_TT NULL
#define SGX_HOVERSCAN_LABEL_TT NULL
#define SGX_HOVERSCAN_INFO_0_TT NULL
#define OPTION_VAL_352_TT NULL
#define SGX_INITIAL_SCANLINE_LABEL_TT NULL
#define SGX_INITIAL_SCANLINE_INFO_0_TT NULL
#define OPTION_VAL_3_TT NULL
#define SGX_LAST_SCANLINE_LABEL_TT NULL
#define SGX_LAST_SCANLINE_INFO_0_TT NULL
#define OPTION_VAL_242_TT NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_TT NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_TT NULL
#define OPTION_VAL_0_25_TT NULL
#define OPTION_VAL_0_50_TT NULL
#define OPTION_VAL_0_75_TT NULL
#define OPTION_VAL_1_00_TT NULL
#define OPTION_VAL_1_25_TT NULL
#define OPTION_VAL_1_50_TT NULL
#define OPTION_VAL_1_75_TT NULL
#define OPTION_VAL_2_00_TT NULL
#define OPTION_VAL_2_25_TT NULL
#define OPTION_VAL_2_50_TT NULL
#define OPTION_VAL_2_75_TT NULL
#define OPTION_VAL_3_00_TT NULL
#define OPTION_VAL_3_25_TT NULL
#define OPTION_VAL_3_50_TT NULL
#define OPTION_VAL_3_75_TT NULL
#define OPTION_VAL_4_00_TT NULL
#define OPTION_VAL_4_25_TT NULL
#define OPTION_VAL_4_50_TT NULL
#define OPTION_VAL_4_75_TT NULL
#define OPTION_VAL_5_00_TT NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_TT NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_TT NULL
#define SGX_DISABLE_SOFTRESET_LABEL_TT NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_TT NULL
#define SGX_MULTITAP_LABEL_TT NULL
#define SGX_MULTITAP_INFO_0_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TT NULL
#define OPTION_VAL_2_BUTTONS_TT NULL
#define OPTION_VAL_6_BUTTONS_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_TT NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TT NULL
#define SGX_TURBO_TOGGLE_LABEL_TT NULL
#define SGX_TURBO_TOGGLE_INFO_0_TT NULL
#define OPTION_VAL_SWITCH_TT NULL
#define OPTION_VAL_DEDICATED_TT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_TT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_TT NULL
#define SGX_TURBO_DELAY_LABEL_TT NULL
#define SGX_TURBO_DELAY_INFO_0_TT NULL
#define SGX_CDIMAGECACHE_LABEL_TT NULL
#define SGX_CDIMAGECACHE_INFO_0_TT NULL
#define SGX_CDBIOS_LABEL_TT NULL
#define SGX_CDBIOS_INFO_0_TT NULL
#define OPTION_VAL_GAMES_EXPRESS_TT NULL
#define OPTION_VAL_SYSTEM_CARD_1_TT NULL
#define OPTION_VAL_SYSTEM_CARD_2_TT NULL
#define OPTION_VAL_SYSTEM_CARD_3_TT NULL
#define SGX_DETECT_GEXPRESS_LABEL_TT NULL
#define SGX_DETECT_GEXPRESS_INFO_0_TT NULL
#define SGX_CDSPEED_LABEL_TT NULL
#define SGX_CDSPEED_LABEL_CAT_TT NULL
#define SGX_CDSPEED_INFO_0_TT NULL
#define SGX_ADPCMVOLUME_LABEL_TT NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_TT NULL
#define SGX_ADPCMVOLUME_INFO_0_TT NULL
#define SGX_ADPCMVOLUME_INFO_1_TT NULL
#define SGX_CDDAVOLUME_LABEL_TT NULL
#define SGX_CDDAVOLUME_LABEL_CAT_TT NULL
#define SGX_CDPSGVOLUME_LABEL_TT NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_TT NULL
#define SGX_FORCESGX_LABEL_TT NULL
#define SGX_FORCESGX_INFO_0_TT NULL
#define SGX_NOSPRITELIMIT_LABEL_TT NULL
#define SGX_NOSPRITELIMIT_INFO_0_TT NULL
#define SGX_OCMULTIPLIER_LABEL_TT NULL
#define SGX_OCMULTIPLIER_INFO_0_TT NULL

struct retro_core_option_v2_category option_cats_tt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TT,
      CATEGORY_VIDEO_INFO_0_TT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TT,
      CATEGORY_INPUT_INFO_0_TT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TT,
      CATEGORY_HACKS_INFO_0_TT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_TT,
      CATEGORY_CD_INFO_0_TT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tt[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_TT,
      NULL,
      SGX_PALETTE_INFO_0_TT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_TT },
         { "Composite", OPTION_VAL_COMPOSITE_TT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_TT,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_TT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TT },
         { "6:5", OPTION_VAL_6_5_TT },
         { "4:3", OPTION_VAL_4_3_TT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_TT,
      NULL,
      SGX_HOVERSCAN_INFO_0_TT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_TT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_TT,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_TT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_TT,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_TT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_TT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_TT,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_TT },
         { "0.50", OPTION_VAL_0_50_TT },
         { "0.75", OPTION_VAL_0_75_TT },
         { "1.00", OPTION_VAL_1_00_TT },
         { "1.25", OPTION_VAL_1_25_TT },
         { "1.50", OPTION_VAL_1_50_TT },
         { "1.75", OPTION_VAL_1_75_TT },
         { "2.00", OPTION_VAL_2_00_TT },
         { "2.25", OPTION_VAL_2_25_TT },
         { "2.50", OPTION_VAL_2_50_TT },
         { "2.75", OPTION_VAL_2_75_TT },
         { "3.00", OPTION_VAL_3_00_TT },
         { "3.25", OPTION_VAL_3_25_TT },
         { "3.50", OPTION_VAL_3_50_TT },
         { "3.75", OPTION_VAL_3_75_TT },
         { "4.00", OPTION_VAL_4_00_TT },
         { "4.25", OPTION_VAL_4_25_TT },
         { "4.50", OPTION_VAL_4_50_TT },
         { "4.75", OPTION_VAL_4_75_TT },
         { "5.00", OPTION_VAL_5_00_TT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_TT,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_TT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_TT,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_TT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_TT,
      NULL,
      SGX_MULTITAP_INFO_0_TT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_TT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_TT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_TT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_TT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_TT,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_TT,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_TT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_TT },
         { "dedicated", OPTION_VAL_DEDICATED_TT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_TT,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_TT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_TT,
      NULL,
      SGX_TURBO_DELAY_INFO_0_TT,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_TT,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_TT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_TT,
      NULL,
      SGX_CDBIOS_INFO_0_TT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_TT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_TT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_TT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_TT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_TT,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_TT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_TT,
      SGX_CDSPEED_LABEL_CAT_TT,
      SGX_CDSPEED_INFO_0_TT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_TT,
      SGX_ADPCMVOLUME_LABEL_CAT_TT,
      SGX_ADPCMVOLUME_INFO_0_TT,
      SGX_ADPCMVOLUME_INFO_1_TT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_TT,
      SGX_CDDAVOLUME_LABEL_CAT_TT,
      SGX_ADPCMVOLUME_INFO_0_TT,
      SGX_ADPCMVOLUME_INFO_1_TT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_TT,
      SGX_CDPSGVOLUME_LABEL_CAT_TT,
      SGX_ADPCMVOLUME_INFO_0_TT,
      SGX_ADPCMVOLUME_INFO_1_TT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_TT,
      NULL,
      SGX_FORCESGX_INFO_0_TT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_TT,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_TT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_TT,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_TT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tt = {
   option_cats_tt,
   option_defs_tt
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK "Налаштувати обрізання екрану, пропуску кадрів та інших параметрів зображення."
#define CATEGORY_INPUT_LABEL_UK "Ввід"
#define CATEGORY_INPUT_INFO_0_UK "Налаштування світлового пістолета, миші та NegCon."
#define CATEGORY_HACKS_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACKS_INFO_0_UK "Налаштування розгону процесора та точності емуляції, що впливають на низькорівневу продуктивність та сумісність."
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK "Налаштуйте параметри, пов’язані з іграми на компакт-дисках."
#define SGX_PALETTE_LABEL_UK "Кольорова палітра"
#define SGX_PALETTE_INFO_0_UK "Композитний намагається відтворити оригінальний вивід консолі та може показати більше деталей у деяких іграх."
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK "Композитний"
#define SGX_ASPECT_RATIO_LABEL_UK "Співвідношення сторін"
#define SGX_ASPECT_RATIO_INFO_0_UK "Виберіть бажане співвідношення сторін контенту. Під час використання ігор, які постійно перемикаються між режимами 256 і 352 і використовують автоматичний формат, найкраще встановити ширину по горизонталі на 342, щоб мінімізувати зміну розміру та додаткові чорні лінії, оскільки ця ширина відповідає режиму ширини 256 (або щось подібне, просто перевірте з Asuka 100%, яка є однією з ігор, які перемикаються між цими режимами)."
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_6_5_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define SGX_HOVERSCAN_LABEL_UK "Горизонтальна розгортка (тільки в режимі ширини 352)"
#define SGX_HOVERSCAN_INFO_0_UK "Виберіть максимальну ширину зображення, яку слід показувати. Менші значення будуть обрізати праву частину зображення (для ігор шириною 352 пікселі)."
#define OPTION_VAL_352_UK "352 (за замовчуванням)"
#define SGX_INITIAL_SCANLINE_LABEL_UK NULL
#define SGX_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK "3 (за замовчуванням)"
#define SGX_LAST_SCANLINE_LABEL_UK NULL
#define SGX_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK "242 (за замовчуванням)"
#define SGX_MOUSE_SENSITIVITY_LABEL_UK "Чутливість миші"
#define SGX_MOUSE_SENSITIVITY_INFO_0_UK "Великі значення змусять курсор миші рухатися швидше."
#define OPTION_VAL_0_25_UK "0,25"
#define OPTION_VAL_0_50_UK NULL
#define OPTION_VAL_0_75_UK NULL
#define OPTION_VAL_1_00_UK NULL
#define OPTION_VAL_1_25_UK NULL
#define OPTION_VAL_1_50_UK NULL
#define OPTION_VAL_1_75_UK NULL
#define OPTION_VAL_2_00_UK NULL
#define OPTION_VAL_2_25_UK NULL
#define OPTION_VAL_2_50_UK NULL
#define OPTION_VAL_2_75_UK NULL
#define OPTION_VAL_3_00_UK NULL
#define OPTION_VAL_3_25_UK NULL
#define OPTION_VAL_3_50_UK NULL
#define OPTION_VAL_3_75_UK NULL
#define OPTION_VAL_4_00_UK NULL
#define OPTION_VAL_4_25_UK NULL
#define OPTION_VAL_4_50_UK NULL
#define OPTION_VAL_4_75_UK NULL
#define OPTION_VAL_5_00_UK NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_UK "Дозволити протилежні напрямки"
#define SGX_UP_DOWN_ALLOWED_INFO_0_UK "Увімкнення цього дозволить одночасно натискати / швидко чергувати/утримувати одночасно ліворуч та праворуч (чи донизу) напрямки. Це може спричинити глітчі руху."
#define SGX_DISABLE_SOFTRESET_LABEL_UK "Вимкнути програмне скидання (РУХ+ВИБІР)"
#define SGX_DISABLE_SOFTRESET_INFO_0_UK "Коли РУХ та ВИБІР одночасно натиснуто, тимчасово вимкнуться обидві кнопки замість скидання."
#define SGX_MULTITAP_LABEL_UK NULL
#define SGX_MULTITAP_INFO_0_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK NULL
#define OPTION_VAL_2_BUTTONS_UK NULL
#define OPTION_VAL_6_BUTTONS_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK NULL
#define SGX_TURBO_TOGGLE_LABEL_UK "Турборежим гарячих клавіш"
#define SGX_TURBO_TOGGLE_INFO_0_UK "Увімкнути турбокнопки. Гарячі клавіші (кнопки III та IV) можуть поводити себе як перемикачі або виділені (утримування) турбокнопки."
#define OPTION_VAL_SWITCH_UK "Перемикач"
#define OPTION_VAL_DEDICATED_UK "Виділений"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_UK "Альтернативні турбокнопки"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_UK NULL
#define SGX_TURBO_DELAY_LABEL_UK NULL
#define SGX_TURBO_DELAY_INFO_0_UK NULL
#define SGX_CDIMAGECACHE_LABEL_UK "Кеш образу CD (потрібен перезапуск)"
#define SGX_CDIMAGECACHE_INFO_0_UK "Завантажувати повне зображення в пам'ять під час запуску. Може зменшувати час завантаження за рахунок збільшення часу запуску."
#define SGX_CDBIOS_LABEL_UK NULL
#define SGX_CDBIOS_INFO_0_UK NULL
#define OPTION_VAL_GAMES_EXPRESS_UK NULL
#define OPTION_VAL_SYSTEM_CARD_1_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_UK NULL
#define SGX_DETECT_GEXPRESS_LABEL_UK NULL
#define SGX_DETECT_GEXPRESS_INFO_0_UK NULL
#define SGX_CDSPEED_LABEL_UK NULL
#define SGX_CDSPEED_LABEL_CAT_UK NULL
#define SGX_CDSPEED_INFO_0_UK NULL
#define SGX_ADPCMVOLUME_LABEL_UK NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_UK NULL
#define SGX_ADPCMVOLUME_INFO_0_UK NULL
#define SGX_ADPCMVOLUME_INFO_1_UK NULL
#define SGX_CDDAVOLUME_LABEL_UK NULL
#define SGX_CDDAVOLUME_LABEL_CAT_UK NULL
#define SGX_CDPSGVOLUME_LABEL_UK NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_UK NULL
#define SGX_FORCESGX_LABEL_UK NULL
#define SGX_FORCESGX_INFO_0_UK NULL
#define SGX_NOSPRITELIMIT_LABEL_UK NULL
#define SGX_NOSPRITELIMIT_INFO_0_UK NULL
#define SGX_OCMULTIPLIER_LABEL_UK NULL
#define SGX_OCMULTIPLIER_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_UK,
      CATEGORY_HACKS_INFO_0_UK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_UK,
      CATEGORY_CD_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_UK,
      NULL,
      SGX_PALETTE_INFO_0_UK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_UK },
         { "Composite", OPTION_VAL_COMPOSITE_UK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_UK,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "6:5", OPTION_VAL_6_5_UK },
         { "4:3", OPTION_VAL_4_3_UK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_UK,
      NULL,
      SGX_HOVERSCAN_INFO_0_UK,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_UK },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_UK,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_UK,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_UK },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_UK,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_UK },
         { "0.50", OPTION_VAL_0_50_UK },
         { "0.75", OPTION_VAL_0_75_UK },
         { "1.00", OPTION_VAL_1_00_UK },
         { "1.25", OPTION_VAL_1_25_UK },
         { "1.50", OPTION_VAL_1_50_UK },
         { "1.75", OPTION_VAL_1_75_UK },
         { "2.00", OPTION_VAL_2_00_UK },
         { "2.25", OPTION_VAL_2_25_UK },
         { "2.50", OPTION_VAL_2_50_UK },
         { "2.75", OPTION_VAL_2_75_UK },
         { "3.00", OPTION_VAL_3_00_UK },
         { "3.25", OPTION_VAL_3_25_UK },
         { "3.50", OPTION_VAL_3_50_UK },
         { "3.75", OPTION_VAL_3_75_UK },
         { "4.00", OPTION_VAL_4_00_UK },
         { "4.25", OPTION_VAL_4_25_UK },
         { "4.50", OPTION_VAL_4_50_UK },
         { "4.75", OPTION_VAL_4_75_UK },
         { "5.00", OPTION_VAL_5_00_UK },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_UK,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_UK,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_UK,
      NULL,
      SGX_MULTITAP_INFO_0_UK,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_UK,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_UK },
         { "dedicated", OPTION_VAL_DEDICATED_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_UK,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_UK,
      NULL,
      SGX_TURBO_DELAY_INFO_0_UK,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_UK,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_UK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_UK,
      NULL,
      SGX_CDBIOS_INFO_0_UK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_UK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_UK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_UK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_UK },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_UK,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_UK,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_UK,
      SGX_CDSPEED_LABEL_CAT_UK,
      SGX_CDSPEED_INFO_0_UK,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_UK,
      SGX_ADPCMVOLUME_LABEL_CAT_UK,
      SGX_ADPCMVOLUME_INFO_0_UK,
      SGX_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_UK,
      SGX_CDDAVOLUME_LABEL_CAT_UK,
      SGX_ADPCMVOLUME_INFO_0_UK,
      SGX_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_UK,
      SGX_CDPSGVOLUME_LABEL_CAT_UK,
      SGX_ADPCMVOLUME_INFO_0_UK,
      SGX_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_UK,
      NULL,
      SGX_FORCESGX_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_UK,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_UK,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL NULL
#define CATEGORY_INPUT_LABEL_VAL "Entrada"
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define CATEGORY_HACKS_LABEL_VAL NULL
#define CATEGORY_HACKS_INFO_0_VAL NULL
#define CATEGORY_CD_LABEL_VAL NULL
#define CATEGORY_CD_INFO_0_VAL NULL
#define SGX_PALETTE_LABEL_VAL NULL
#define SGX_PALETTE_INFO_0_VAL NULL
#define OPTION_VAL_RGB_VAL NULL
#define OPTION_VAL_COMPOSITE_VAL NULL
#define SGX_ASPECT_RATIO_LABEL_VAL "Relació d'aspecte"
#define SGX_ASPECT_RATIO_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define OPTION_VAL_6_5_VAL NULL
#define OPTION_VAL_4_3_VAL NULL
#define SGX_HOVERSCAN_LABEL_VAL NULL
#define SGX_HOVERSCAN_INFO_0_VAL NULL
#define OPTION_VAL_352_VAL NULL
#define SGX_INITIAL_SCANLINE_LABEL_VAL NULL
#define SGX_INITIAL_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_3_VAL NULL
#define SGX_LAST_SCANLINE_LABEL_VAL NULL
#define SGX_LAST_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_242_VAL NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_VAL NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_VAL NULL
#define OPTION_VAL_0_25_VAL "0,25"
#define OPTION_VAL_0_50_VAL "0,50"
#define OPTION_VAL_0_75_VAL "0,75"
#define OPTION_VAL_1_00_VAL "1,00"
#define OPTION_VAL_1_25_VAL "1,25"
#define OPTION_VAL_1_50_VAL "1,50"
#define OPTION_VAL_1_75_VAL "1,75"
#define OPTION_VAL_2_00_VAL "2,00"
#define OPTION_VAL_2_25_VAL "2,25"
#define OPTION_VAL_2_50_VAL "2,50"
#define OPTION_VAL_2_75_VAL "2,75"
#define OPTION_VAL_3_00_VAL "3,00"
#define OPTION_VAL_3_25_VAL "3,25"
#define OPTION_VAL_3_50_VAL "3,50"
#define OPTION_VAL_3_75_VAL "3,75"
#define OPTION_VAL_4_00_VAL "4,00"
#define OPTION_VAL_4_25_VAL "4,25"
#define OPTION_VAL_4_50_VAL "4,50"
#define OPTION_VAL_4_75_VAL "4,75"
#define OPTION_VAL_5_00_VAL "5,00"
#define SGX_UP_DOWN_ALLOWED_LABEL_VAL NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_VAL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_VAL NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_VAL NULL
#define SGX_MULTITAP_LABEL_VAL NULL
#define SGX_MULTITAP_INFO_0_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL NULL
#define OPTION_VAL_2_BUTTONS_VAL NULL
#define OPTION_VAL_6_BUTTONS_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL NULL
#define SGX_TURBO_TOGGLE_LABEL_VAL NULL
#define SGX_TURBO_TOGGLE_INFO_0_VAL NULL
#define OPTION_VAL_SWITCH_VAL NULL
#define OPTION_VAL_DEDICATED_VAL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_VAL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_VAL NULL
#define SGX_TURBO_DELAY_LABEL_VAL NULL
#define SGX_TURBO_DELAY_INFO_0_VAL NULL
#define SGX_CDIMAGECACHE_LABEL_VAL NULL
#define SGX_CDIMAGECACHE_INFO_0_VAL NULL
#define SGX_CDBIOS_LABEL_VAL NULL
#define SGX_CDBIOS_INFO_0_VAL NULL
#define OPTION_VAL_GAMES_EXPRESS_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_1_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_2_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_3_VAL NULL
#define SGX_DETECT_GEXPRESS_LABEL_VAL NULL
#define SGX_DETECT_GEXPRESS_INFO_0_VAL NULL
#define SGX_CDSPEED_LABEL_VAL NULL
#define SGX_CDSPEED_LABEL_CAT_VAL NULL
#define SGX_CDSPEED_INFO_0_VAL NULL
#define SGX_ADPCMVOLUME_LABEL_VAL NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_VAL NULL
#define SGX_ADPCMVOLUME_INFO_0_VAL NULL
#define SGX_ADPCMVOLUME_INFO_1_VAL NULL
#define SGX_CDDAVOLUME_LABEL_VAL NULL
#define SGX_CDDAVOLUME_LABEL_CAT_VAL NULL
#define SGX_CDPSGVOLUME_LABEL_VAL NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_VAL NULL
#define SGX_FORCESGX_LABEL_VAL NULL
#define SGX_FORCESGX_INFO_0_VAL NULL
#define SGX_NOSPRITELIMIT_LABEL_VAL NULL
#define SGX_NOSPRITELIMIT_INFO_0_VAL NULL
#define SGX_OCMULTIPLIER_LABEL_VAL NULL
#define SGX_OCMULTIPLIER_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VAL,
      CATEGORY_VIDEO_INFO_0_VAL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VAL,
      CATEGORY_HACKS_INFO_0_VAL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VAL,
      CATEGORY_CD_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_VAL,
      NULL,
      SGX_PALETTE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VAL },
         { "Composite", OPTION_VAL_COMPOSITE_VAL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_VAL,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_VAL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VAL },
         { "6:5", OPTION_VAL_6_5_VAL },
         { "4:3", OPTION_VAL_4_3_VAL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_VAL,
      NULL,
      SGX_HOVERSCAN_INFO_0_VAL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_VAL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_VAL,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VAL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_VAL,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VAL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_VAL,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_VAL },
         { "0.50", OPTION_VAL_0_50_VAL },
         { "0.75", OPTION_VAL_0_75_VAL },
         { "1.00", OPTION_VAL_1_00_VAL },
         { "1.25", OPTION_VAL_1_25_VAL },
         { "1.50", OPTION_VAL_1_50_VAL },
         { "1.75", OPTION_VAL_1_75_VAL },
         { "2.00", OPTION_VAL_2_00_VAL },
         { "2.25", OPTION_VAL_2_25_VAL },
         { "2.50", OPTION_VAL_2_50_VAL },
         { "2.75", OPTION_VAL_2_75_VAL },
         { "3.00", OPTION_VAL_3_00_VAL },
         { "3.25", OPTION_VAL_3_25_VAL },
         { "3.50", OPTION_VAL_3_50_VAL },
         { "3.75", OPTION_VAL_3_75_VAL },
         { "4.00", OPTION_VAL_4_00_VAL },
         { "4.25", OPTION_VAL_4_25_VAL },
         { "4.50", OPTION_VAL_4_50_VAL },
         { "4.75", OPTION_VAL_4_75_VAL },
         { "5.00", OPTION_VAL_5_00_VAL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_VAL,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_VAL,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_VAL,
      NULL,
      SGX_MULTITAP_INFO_0_VAL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_VAL,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_VAL },
         { "dedicated", OPTION_VAL_DEDICATED_VAL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_VAL,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_VAL,
      NULL,
      SGX_TURBO_DELAY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_VAL,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_VAL,
      NULL,
      SGX_CDBIOS_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VAL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VAL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VAL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VAL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_VAL,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_VAL,
      SGX_CDSPEED_LABEL_CAT_VAL,
      SGX_CDSPEED_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_VAL,
      SGX_ADPCMVOLUME_LABEL_CAT_VAL,
      SGX_ADPCMVOLUME_INFO_0_VAL,
      SGX_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_VAL,
      SGX_CDDAVOLUME_LABEL_CAT_VAL,
      SGX_ADPCMVOLUME_INFO_0_VAL,
      SGX_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_VAL,
      SGX_CDPSGVOLUME_LABEL_CAT_VAL,
      SGX_ADPCMVOLUME_INFO_0_VAL,
      SGX_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_VAL,
      NULL,
      SGX_FORCESGX_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_VAL,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_VAL,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN "Tùy chỉnh crop màn hình, bỏ qua khung hình và các thông số đầu ra hình ảnh khác."
#define CATEGORY_INPUT_LABEL_VN "Input Driver"
#define CATEGORY_INPUT_INFO_0_VN "Định cấu hình đầu vào của súng, chuột và NegCon."
#define CATEGORY_HACKS_LABEL_VN "Hacks giả lập"
#define CATEGORY_HACKS_INFO_0_VN "Định cấu hình các thông số độ chính xác của việc ép xung và mô phỏng bộ xử lý ảnh hưởng đến hiệu suất và khả năng tương thích ở mức thấp."
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN NULL
#define SGX_PALETTE_LABEL_VN "Bảng màu"
#define SGX_PALETTE_INFO_0_VN "Tổng hợp các cố gắng để tạo lại đầu ra bảng điều khiển ban đầu và có thể hiển thị thêm chi tiết trong một số trò chơi."
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN "Kết hợp"
#define SGX_ASPECT_RATIO_LABEL_VN NULL
#define SGX_ASPECT_RATIO_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_6_5_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define SGX_HOVERSCAN_LABEL_VN "Quét theo chiều ngang (Chỉ dành cho chế độ chiều rộng 352)"
#define SGX_HOVERSCAN_INFO_0_VN NULL
#define OPTION_VAL_352_VN "352 (Mặc định)"
#define SGX_INITIAL_SCANLINE_LABEL_VN NULL
#define SGX_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN "3 (Mặc định)"
#define SGX_LAST_SCANLINE_LABEL_VN NULL
#define SGX_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN "242 (Mặc định)"
#define SGX_MOUSE_SENSITIVITY_LABEL_VN NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_VN NULL
#define OPTION_VAL_0_25_VN NULL
#define OPTION_VAL_0_50_VN NULL
#define OPTION_VAL_0_75_VN NULL
#define OPTION_VAL_1_00_VN NULL
#define OPTION_VAL_1_25_VN NULL
#define OPTION_VAL_1_50_VN NULL
#define OPTION_VAL_1_75_VN NULL
#define OPTION_VAL_2_00_VN NULL
#define OPTION_VAL_2_25_VN NULL
#define OPTION_VAL_2_50_VN NULL
#define OPTION_VAL_2_75_VN NULL
#define OPTION_VAL_3_00_VN NULL
#define OPTION_VAL_3_25_VN NULL
#define OPTION_VAL_3_50_VN NULL
#define OPTION_VAL_3_75_VN NULL
#define OPTION_VAL_4_00_VN NULL
#define OPTION_VAL_4_25_VN NULL
#define OPTION_VAL_4_50_VN NULL
#define OPTION_VAL_4_75_VN NULL
#define OPTION_VAL_5_00_VN NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_VN NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_VN NULL
#define SGX_DISABLE_SOFTRESET_LABEL_VN NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_VN NULL
#define SGX_MULTITAP_LABEL_VN NULL
#define SGX_MULTITAP_INFO_0_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN NULL
#define OPTION_VAL_2_BUTTONS_VN NULL
#define OPTION_VAL_6_BUTTONS_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN NULL
#define SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN NULL
#define SGX_TURBO_TOGGLE_LABEL_VN NULL
#define SGX_TURBO_TOGGLE_INFO_0_VN NULL
#define OPTION_VAL_SWITCH_VN NULL
#define OPTION_VAL_DEDICATED_VN NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_VN NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_VN NULL
#define SGX_TURBO_DELAY_LABEL_VN NULL
#define SGX_TURBO_DELAY_INFO_0_VN NULL
#define SGX_CDIMAGECACHE_LABEL_VN NULL
#define SGX_CDIMAGECACHE_INFO_0_VN NULL
#define SGX_CDBIOS_LABEL_VN NULL
#define SGX_CDBIOS_INFO_0_VN NULL
#define OPTION_VAL_GAMES_EXPRESS_VN NULL
#define OPTION_VAL_SYSTEM_CARD_1_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_VN NULL
#define SGX_DETECT_GEXPRESS_LABEL_VN NULL
#define SGX_DETECT_GEXPRESS_INFO_0_VN NULL
#define SGX_CDSPEED_LABEL_VN NULL
#define SGX_CDSPEED_LABEL_CAT_VN NULL
#define SGX_CDSPEED_INFO_0_VN NULL
#define SGX_ADPCMVOLUME_LABEL_VN NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_VN NULL
#define SGX_ADPCMVOLUME_INFO_0_VN NULL
#define SGX_ADPCMVOLUME_INFO_1_VN NULL
#define SGX_CDDAVOLUME_LABEL_VN NULL
#define SGX_CDDAVOLUME_LABEL_CAT_VN NULL
#define SGX_CDPSGVOLUME_LABEL_VN NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_VN NULL
#define SGX_FORCESGX_LABEL_VN NULL
#define SGX_FORCESGX_INFO_0_VN NULL
#define SGX_NOSPRITELIMIT_LABEL_VN NULL
#define SGX_NOSPRITELIMIT_INFO_0_VN NULL
#define SGX_OCMULTIPLIER_LABEL_VN NULL
#define SGX_OCMULTIPLIER_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VN,
      CATEGORY_HACKS_INFO_0_VN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VN,
      CATEGORY_CD_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_VN,
      NULL,
      SGX_PALETTE_INFO_0_VN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VN },
         { "Composite", OPTION_VAL_COMPOSITE_VN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_VN,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "6:5", OPTION_VAL_6_5_VN },
         { "4:3", OPTION_VAL_4_3_VN },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_VN,
      NULL,
      SGX_HOVERSCAN_INFO_0_VN,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_VN },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_VN,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_last_scanline",
      SGX_LAST_SCANLINE_LABEL_VN,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VN },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_VN,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_VN },
         { "0.50", OPTION_VAL_0_50_VN },
         { "0.75", OPTION_VAL_0_75_VN },
         { "1.00", OPTION_VAL_1_00_VN },
         { "1.25", OPTION_VAL_1_25_VN },
         { "1.50", OPTION_VAL_1_50_VN },
         { "1.75", OPTION_VAL_1_75_VN },
         { "2.00", OPTION_VAL_2_00_VN },
         { "2.25", OPTION_VAL_2_25_VN },
         { "2.50", OPTION_VAL_2_50_VN },
         { "2.75", OPTION_VAL_2_75_VN },
         { "3.00", OPTION_VAL_3_00_VN },
         { "3.25", OPTION_VAL_3_25_VN },
         { "3.50", OPTION_VAL_3_50_VN },
         { "3.75", OPTION_VAL_3_75_VN },
         { "4.00", OPTION_VAL_4_00_VN },
         { "4.25", OPTION_VAL_4_25_VN },
         { "4.50", OPTION_VAL_4_50_VN },
         { "4.75", OPTION_VAL_4_75_VN },
         { "5.00", OPTION_VAL_5_00_VN },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_VN,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      SGX_DISABLE_SOFTRESET_LABEL_VN,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_multitap",
      SGX_MULTITAP_LABEL_VN,
      NULL,
      SGX_MULTITAP_INFO_0_VN,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "sgx_default_joypad_type_p1",
      SGX_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p2",
      SGX_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p3",
      SGX_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p4",
      SGX_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_default_joypad_type_p5",
      SGX_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN,
      NULL,
      SGX_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_VN,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_VN },
         { "dedicated", OPTION_VAL_DEDICATED_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_VN,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_delay",
      SGX_TURBO_DELAY_LABEL_VN,
      NULL,
      SGX_TURBO_DELAY_INFO_0_VN,
      NULL,
      "input",
      {
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "30", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "sgx_cdimagecache",
      SGX_CDIMAGECACHE_LABEL_VN,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_VN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      SGX_CDBIOS_LABEL_VN,
      NULL,
      SGX_CDBIOS_INFO_0_VN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VN },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_VN,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_VN,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "sgx_cdspeed",
      SGX_CDSPEED_LABEL_VN,
      SGX_CDSPEED_LABEL_CAT_VN,
      SGX_CDSPEED_INFO_0_VN,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "sgx_adpcmvolume",
      SGX_ADPCMVOLUME_LABEL_VN,
      SGX_ADPCMVOLUME_LABEL_CAT_VN,
      SGX_ADPCMVOLUME_INFO_0_VN,
      SGX_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cddavolume",
      SGX_CDDAVOLUME_LABEL_VN,
      SGX_CDDAVOLUME_LABEL_CAT_VN,
      SGX_ADPCMVOLUME_INFO_0_VN,
      SGX_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_cdpsgvolume",
      SGX_CDPSGVOLUME_LABEL_VN,
      SGX_CDPSGVOLUME_LABEL_CAT_VN,
      SGX_ADPCMVOLUME_INFO_0_VN,
      SGX_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "sgx_forcesgx",
      SGX_FORCESGX_LABEL_VN,
      NULL,
      SGX_FORCESGX_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      SGX_NOSPRITELIMIT_LABEL_VN,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      SGX_OCMULTIPLIER_LABEL_VN,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif