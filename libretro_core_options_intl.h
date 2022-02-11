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
#define CATEGORY_HACKS_LABEL_AST NULL
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CD_LABEL_AST NULL
#define CATEGORY_CD_INFO_0_AST NULL
#define SGX_PALETTE_LABEL_AST NULL
#define SGX_PALETTE_INFO_0_AST NULL
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define SGX_ASPECT_RATIO_LABEL_AST "Proporción d'aspeutu"
#define SGX_ASPECT_RATIO_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_6_5_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define SGX_HOVERSCAN_LABEL_AST NULL
#define SGX_HOVERSCAN_INFO_0_AST NULL
#define OPTION_VAL_352_AST "352 (Por defeutu)"
#define SGX_INITIAL_SCANLINE_LABEL_AST NULL
#define SGX_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_3_AST "3 (Por defeutu)"
#define SGX_LAST_SCANLINE_LABEL_AST NULL
#define SGX_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_242_AST "242 (Por defeutu)"
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
#define SGX_UP_DOWN_ALLOWED_LABEL_AST NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_AST NULL
#define SGX_DISABLE_SOFTRESET_LABEL_AST NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_AST NULL
#define SGX_MULTITAP_LABEL_AST NULL
#define SGX_MULTITAP_INFO_0_AST NULL
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
#define OPTION_VAL_SYSTEM_CARD_1_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_AST NULL
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
#define SGX_FORCESGX_LABEL_AST NULL
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
#define SGX_ASPECT_RATIO_LABEL_CA NULL
#define SGX_ASPECT_RATIO_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
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
#define OPTION_VAL_0_25_CA NULL
#define OPTION_VAL_0_50_CA NULL
#define OPTION_VAL_0_75_CA NULL
#define OPTION_VAL_1_00_CA NULL
#define OPTION_VAL_1_25_CA NULL
#define OPTION_VAL_1_50_CA NULL
#define OPTION_VAL_1_75_CA NULL
#define OPTION_VAL_2_00_CA NULL
#define OPTION_VAL_2_25_CA NULL
#define OPTION_VAL_2_50_CA NULL
#define OPTION_VAL_2_75_CA NULL
#define OPTION_VAL_3_00_CA NULL
#define OPTION_VAL_3_25_CA NULL
#define OPTION_VAL_3_50_CA NULL
#define OPTION_VAL_3_75_CA NULL
#define OPTION_VAL_4_00_CA NULL
#define OPTION_VAL_4_25_CA NULL
#define OPTION_VAL_4_50_CA NULL
#define OPTION_VAL_4_75_CA NULL
#define OPTION_VAL_5_00_CA NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_CA NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CA NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CA NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CA NULL
#define SGX_MULTITAP_LABEL_CA NULL
#define SGX_MULTITAP_INFO_0_CA NULL
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
#define CATEGORY_VIDEO_INFO_0_CHS NULL
#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS NULL
#define CATEGORY_HACKS_LABEL_CHS "模拟修改"
#define CATEGORY_HACKS_INFO_0_CHS "配置处理器超时和模拟精确参数，影响低级性能和兼容性。"
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS NULL
#define SGX_PALETTE_LABEL_CHS "色板"
#define SGX_PALETTE_INFO_0_CHS NULL
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS "合成"
#define SGX_ASPECT_RATIO_LABEL_CHS "纵横比"
#define SGX_ASPECT_RATIO_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_6_5_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define SGX_HOVERSCAN_LABEL_CHS NULL
#define SGX_HOVERSCAN_INFO_0_CHS NULL
#define OPTION_VAL_352_CHS "352 (默认)"
#define SGX_INITIAL_SCANLINE_LABEL_CHS NULL
#define SGX_INITIAL_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_3_CHS "3 (默认)"
#define SGX_LAST_SCANLINE_LABEL_CHS NULL
#define SGX_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_242_CHS "242 (默认)"
#define SGX_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
#define SGX_MOUSE_SENSITIVITY_INFO_0_CHS NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_CHS NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CHS NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CHS NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CHS NULL
#define SGX_MULTITAP_LABEL_CHS NULL
#define SGX_MULTITAP_INFO_0_CHS NULL
#define SGX_TURBO_TOGGLE_LABEL_CHS NULL
#define SGX_TURBO_TOGGLE_INFO_0_CHS NULL
#define OPTION_VAL_SWITCH_CHS "切换"
#define OPTION_VAL_DEDICATED_CHS NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHS NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHS NULL
#define SGX_TURBO_DELAY_LABEL_CHS NULL
#define SGX_TURBO_DELAY_INFO_0_CHS NULL
#define SGX_CDIMAGECACHE_LABEL_CHS NULL
#define SGX_CDIMAGECACHE_INFO_0_CHS NULL
#define SGX_CDBIOS_LABEL_CHS NULL
#define SGX_CDBIOS_INFO_0_CHS NULL
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define SGX_DETECT_GEXPRESS_LABEL_CHS NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CHS NULL
#define SGX_CDSPEED_LABEL_CHS NULL
#define SGX_CDSPEED_LABEL_CAT_CHS NULL
#define SGX_CDSPEED_INFO_0_CHS NULL
#define SGX_ADPCMVOLUME_LABEL_CHS NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_CHS NULL
#define SGX_ADPCMVOLUME_INFO_0_CHS NULL
#define SGX_ADPCMVOLUME_INFO_1_CHS NULL
#define SGX_CDDAVOLUME_LABEL_CHS NULL
#define SGX_CDDAVOLUME_LABEL_CAT_CHS NULL
#define SGX_CDPSGVOLUME_LABEL_CHS NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_CHS NULL
#define SGX_FORCESGX_LABEL_CHS NULL
#define SGX_FORCESGX_INFO_0_CHS NULL
#define SGX_NOSPRITELIMIT_LABEL_CHS NULL
#define SGX_NOSPRITELIMIT_INFO_0_CHS NULL
#define SGX_OCMULTIPLIER_LABEL_CHS NULL
#define SGX_OCMULTIPLIER_INFO_0_CHS NULL

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

#define CATEGORY_VIDEO_LABEL_CHT "視訊"
#define CATEGORY_VIDEO_INFO_0_CHT NULL
#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_HACKS_LABEL_CHT NULL
#define CATEGORY_HACKS_INFO_0_CHT NULL
#define CATEGORY_CD_LABEL_CHT NULL
#define CATEGORY_CD_INFO_0_CHT NULL
#define SGX_PALETTE_LABEL_CHT NULL
#define SGX_PALETTE_INFO_0_CHT NULL
#define OPTION_VAL_RGB_CHT NULL
#define OPTION_VAL_COMPOSITE_CHT NULL
#define SGX_ASPECT_RATIO_LABEL_CHT "長寬比"
#define SGX_ASPECT_RATIO_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_6_5_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define SGX_HOVERSCAN_LABEL_CHT NULL
#define SGX_HOVERSCAN_INFO_0_CHT NULL
#define OPTION_VAL_352_CHT NULL
#define SGX_INITIAL_SCANLINE_LABEL_CHT NULL
#define SGX_INITIAL_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_3_CHT NULL
#define SGX_LAST_SCANLINE_LABEL_CHT NULL
#define SGX_LAST_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_242_CHT NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_CHT NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_CHT NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_CHT NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CHT NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CHT NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CHT NULL
#define SGX_MULTITAP_LABEL_CHT NULL
#define SGX_MULTITAP_INFO_0_CHT NULL
#define SGX_TURBO_TOGGLE_LABEL_CHT NULL
#define SGX_TURBO_TOGGLE_INFO_0_CHT NULL
#define OPTION_VAL_SWITCH_CHT NULL
#define OPTION_VAL_DEDICATED_CHT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CHT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CHT NULL
#define SGX_TURBO_DELAY_LABEL_CHT NULL
#define SGX_TURBO_DELAY_INFO_0_CHT NULL
#define SGX_CDIMAGECACHE_LABEL_CHT NULL
#define SGX_CDIMAGECACHE_INFO_0_CHT NULL
#define SGX_CDBIOS_LABEL_CHT NULL
#define SGX_CDBIOS_INFO_0_CHT NULL
#define OPTION_VAL_GAMES_EXPRESS_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHT NULL
#define SGX_DETECT_GEXPRESS_LABEL_CHT NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CHT NULL
#define SGX_CDSPEED_LABEL_CHT NULL
#define SGX_CDSPEED_LABEL_CAT_CHT NULL
#define SGX_CDSPEED_INFO_0_CHT NULL
#define SGX_ADPCMVOLUME_LABEL_CHT NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_CHT NULL
#define SGX_ADPCMVOLUME_INFO_0_CHT NULL
#define SGX_ADPCMVOLUME_INFO_1_CHT NULL
#define SGX_CDDAVOLUME_LABEL_CHT NULL
#define SGX_CDDAVOLUME_LABEL_CAT_CHT NULL
#define SGX_CDPSGVOLUME_LABEL_CHT NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_CHT NULL
#define SGX_FORCESGX_LABEL_CHT NULL
#define SGX_FORCESGX_INFO_0_CHT NULL
#define SGX_NOSPRITELIMIT_LABEL_CHT NULL
#define SGX_NOSPRITELIMIT_INFO_0_CHT NULL
#define SGX_OCMULTIPLIER_LABEL_CHT NULL
#define SGX_OCMULTIPLIER_INFO_0_CHT NULL

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
#define CATEGORY_VIDEO_INFO_0_CS NULL
#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS NULL
#define CATEGORY_HACKS_LABEL_CS NULL
#define CATEGORY_HACKS_INFO_0_CS NULL
#define CATEGORY_CD_LABEL_CS NULL
#define CATEGORY_CD_INFO_0_CS NULL
#define SGX_PALETTE_LABEL_CS NULL
#define SGX_PALETTE_INFO_0_CS NULL
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS NULL
#define SGX_ASPECT_RATIO_LABEL_CS "Poměr stran"
#define SGX_ASPECT_RATIO_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_6_5_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define SGX_HOVERSCAN_LABEL_CS NULL
#define SGX_HOVERSCAN_INFO_0_CS NULL
#define OPTION_VAL_352_CS NULL
#define SGX_INITIAL_SCANLINE_LABEL_CS NULL
#define SGX_INITIAL_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_3_CS NULL
#define SGX_LAST_SCANLINE_LABEL_CS NULL
#define SGX_LAST_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_242_CS NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_CS NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_CS NULL
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
#define OPTION_VAL_5_00_CS NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_CS NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_CS NULL
#define SGX_DISABLE_SOFTRESET_LABEL_CS NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_CS NULL
#define SGX_MULTITAP_LABEL_CS NULL
#define SGX_MULTITAP_INFO_0_CS NULL
#define SGX_TURBO_TOGGLE_LABEL_CS NULL
#define SGX_TURBO_TOGGLE_INFO_0_CS NULL
#define OPTION_VAL_SWITCH_CS NULL
#define OPTION_VAL_DEDICATED_CS NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_CS NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_CS NULL
#define SGX_TURBO_DELAY_LABEL_CS NULL
#define SGX_TURBO_DELAY_INFO_0_CS NULL
#define SGX_CDIMAGECACHE_LABEL_CS NULL
#define SGX_CDIMAGECACHE_INFO_0_CS NULL
#define SGX_CDBIOS_LABEL_CS NULL
#define SGX_CDBIOS_INFO_0_CS NULL
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CS NULL
#define SGX_DETECT_GEXPRESS_LABEL_CS NULL
#define SGX_DETECT_GEXPRESS_INFO_0_CS NULL
#define SGX_CDSPEED_LABEL_CS NULL
#define SGX_CDSPEED_LABEL_CAT_CS NULL
#define SGX_CDSPEED_INFO_0_CS NULL
#define SGX_ADPCMVOLUME_LABEL_CS NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_CS NULL
#define SGX_ADPCMVOLUME_INFO_0_CS NULL
#define SGX_ADPCMVOLUME_INFO_1_CS NULL
#define SGX_CDDAVOLUME_LABEL_CS NULL
#define SGX_CDDAVOLUME_LABEL_CAT_CS NULL
#define SGX_CDPSGVOLUME_LABEL_CS NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_CS NULL
#define SGX_FORCESGX_LABEL_CS NULL
#define SGX_FORCESGX_INFO_0_CS NULL
#define SGX_NOSPRITELIMIT_LABEL_CS NULL
#define SGX_NOSPRITELIMIT_INFO_0_CS NULL
#define SGX_OCMULTIPLIER_LABEL_CS NULL
#define SGX_OCMULTIPLIER_INFO_0_CS NULL

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
#define CATEGORY_INPUT_LABEL_DE NULL
#define CATEGORY_INPUT_INFO_0_DE "Lightgun-, Maus- und NegCon-Eingabe anpassen."
#define CATEGORY_HACKS_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACKS_INFO_0_DE "Parameter für Prozessorübertaktung und Emulationsgenauigkeit, die sich auf die Low-Level-Leistung und Kompatibilität auswirken, anpassen."
#define CATEGORY_CD_LABEL_DE NULL
#define CATEGORY_CD_INFO_0_DE NULL
#define SGX_PALETTE_LABEL_DE "Farbpalette"
#define SGX_PALETTE_INFO_0_DE "\"Composite\" versucht, die Originalausgabe der Konsole nachzubilden und kann in einigen Spielen mehr Details darstellen."
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define SGX_ASPECT_RATIO_LABEL_DE "Bildseitenverhältnis"
#define SGX_ASPECT_RATIO_INFO_0_DE NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_DE NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_DE NULL
#define SGX_DISABLE_SOFTRESET_LABEL_DE "Neustart-Kombination (RUN+SELECT) deaktivieren"
#define SGX_DISABLE_SOFTRESET_INFO_0_DE "Wenn RUN und SELECT gleichzeitig gedrückt werden, werden beide Tasten vorübergehend deaktiviert, anstatt den Inhalt neu zu starten."
#define SGX_MULTITAP_LABEL_DE NULL
#define SGX_MULTITAP_INFO_0_DE NULL
#define SGX_TURBO_TOGGLE_LABEL_DE NULL
#define SGX_TURBO_TOGGLE_INFO_0_DE NULL
#define OPTION_VAL_SWITCH_DE NULL
#define OPTION_VAL_DEDICATED_DE NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_DE "Alternative Turbo-Hotkeys"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_DE NULL
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
#define SGX_DETECT_GEXPRESS_LABEL_DE NULL
#define SGX_DETECT_GEXPRESS_INFO_0_DE NULL
#define SGX_CDSPEED_LABEL_DE "(CD) CD-Geschwindigkeit"
#define SGX_CDSPEED_LABEL_CAT_DE "CD-Geschwindigkeit"
#define SGX_CDSPEED_INFO_0_DE "Höhere Werte ermöglichen schnellere Ladezeiten, können aber Probleme mit einigen Spielen verursachen."
#define SGX_ADPCMVOLUME_LABEL_DE "(CD) ADPCM Lautstärke %"
#define SGX_ADPCMVOLUME_LABEL_CAT_DE "ADPCM Lautstärke %"
#define SGX_ADPCMVOLUME_INFO_0_DE "Nur für CD-Spiele. Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define SGX_ADPCMVOLUME_INFO_1_DE "Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define SGX_CDDAVOLUME_LABEL_DE "(CD) CDDA Lautstärke %"
#define SGX_CDDAVOLUME_LABEL_CAT_DE "CDDA Lautstärke %"
#define SGX_CDPSGVOLUME_LABEL_DE "(CD) PSG Lautstärke %"
#define SGX_CDPSGVOLUME_LABEL_CAT_DE NULL
#define SGX_FORCESGX_LABEL_DE NULL
#define SGX_FORCESGX_INFO_0_DE NULL
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
#define SGX_TURBO_TOGGLE_LABEL_ES "Modo de la tecla rápida del turbo"
#define SGX_TURBO_TOGGLE_INFO_0_ES "Activa los botones con turbo. Las teclas rápidas (los botones III y IV) pueden hacer de conmutadores o de botones de turbo dedicados (mantenlos pulsados para usarlos)."
#define OPTION_VAL_SWITCH_ES "Activación manual"
#define OPTION_VAL_DEDICATED_ES "Dedicado"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_ES "Tecla rápida alternativa para el turbo"
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
#define SGX_ASPECT_RATIO_LABEL_FA NULL
#define SGX_ASPECT_RATIO_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
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
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI NULL
#define CATEGORY_HACKS_LABEL_FI "Emulointikikat"
#define CATEGORY_HACKS_INFO_0_FI "Määritä prosessorin ylikellotus- ja emuloinnin tarkkuuden asetukset, jotka vaikuttavat matalan tason suorituskykyyn ja yhteensopivuuteen."
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI NULL
#define SGX_PALETTE_LABEL_FI "Väripaletti"
#define SGX_PALETTE_INFO_0_FI NULL
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI "Komposiitti"
#define SGX_ASPECT_RATIO_LABEL_FI "Kuvasuhde"
#define SGX_ASPECT_RATIO_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_6_5_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define SGX_HOVERSCAN_LABEL_FI NULL
#define SGX_HOVERSCAN_INFO_0_FI NULL
#define OPTION_VAL_352_FI "352 (Oletus)"
#define SGX_INITIAL_SCANLINE_LABEL_FI NULL
#define SGX_INITIAL_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_3_FI "3 (Oletus)"
#define SGX_LAST_SCANLINE_LABEL_FI NULL
#define SGX_LAST_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_242_FI "242 (Oletus)"
#define SGX_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
#define SGX_MOUSE_SENSITIVITY_INFO_0_FI NULL
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
#define SGX_DISABLE_SOFTRESET_LABEL_FI NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_FI NULL
#define SGX_MULTITAP_LABEL_FI NULL
#define SGX_MULTITAP_INFO_0_FI NULL
#define SGX_TURBO_TOGGLE_LABEL_FI NULL
#define SGX_TURBO_TOGGLE_INFO_0_FI NULL
#define OPTION_VAL_SWITCH_FI NULL
#define OPTION_VAL_DEDICATED_FI NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_FI NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_FI NULL
#define SGX_TURBO_DELAY_LABEL_FI "Turbon viive"
#define SGX_TURBO_DELAY_INFO_0_FI NULL
#define SGX_CDIMAGECACHE_LABEL_FI NULL
#define SGX_CDIMAGECACHE_INFO_0_FI NULL
#define SGX_CDBIOS_LABEL_FI NULL
#define SGX_CDBIOS_INFO_0_FI NULL
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define SGX_DETECT_GEXPRESS_LABEL_FI NULL
#define SGX_DETECT_GEXPRESS_INFO_0_FI NULL
#define SGX_CDSPEED_LABEL_FI NULL
#define SGX_CDSPEED_LABEL_CAT_FI "CD-nopeus"
#define SGX_CDSPEED_INFO_0_FI NULL
#define SGX_ADPCMVOLUME_LABEL_FI NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_FI NULL
#define SGX_ADPCMVOLUME_INFO_0_FI NULL
#define SGX_ADPCMVOLUME_INFO_1_FI NULL
#define SGX_CDDAVOLUME_LABEL_FI NULL
#define SGX_CDDAVOLUME_LABEL_CAT_FI NULL
#define SGX_CDPSGVOLUME_LABEL_FI NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_FI NULL
#define SGX_FORCESGX_LABEL_FI NULL
#define SGX_FORCESGX_INFO_0_FI NULL
#define SGX_NOSPRITELIMIT_LABEL_FI "Poista sprite-rajoitus"
#define SGX_NOSPRITELIMIT_INFO_0_FI NULL
#define SGX_OCMULTIPLIER_LABEL_FI NULL
#define SGX_OCMULTIPLIER_INFO_0_FI NULL

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
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_HACKS_LABEL_GL "Hacks de emulación"
#define CATEGORY_HACKS_INFO_0_GL "Configurar os parámetros do overclocking e a precisión da emulación do procesador que afecten ó rendemento e á compatibilidade de baixo nivel."
#define CATEGORY_CD_LABEL_GL NULL
#define CATEGORY_CD_INFO_0_GL NULL
#define SGX_PALETTE_LABEL_GL NULL
#define SGX_PALETTE_INFO_0_GL NULL
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_COMPOSITE_GL NULL
#define SGX_ASPECT_RATIO_LABEL_GL NULL
#define SGX_ASPECT_RATIO_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_6_5_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define SGX_HOVERSCAN_LABEL_GL NULL
#define SGX_HOVERSCAN_INFO_0_GL NULL
#define OPTION_VAL_352_GL NULL
#define SGX_INITIAL_SCANLINE_LABEL_GL NULL
#define SGX_INITIAL_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_3_GL NULL
#define SGX_LAST_SCANLINE_LABEL_GL NULL
#define SGX_LAST_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_242_GL NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_GL NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_GL NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_GL NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_GL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_GL NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_GL NULL
#define SGX_MULTITAP_LABEL_GL NULL
#define SGX_MULTITAP_INFO_0_GL NULL
#define SGX_TURBO_TOGGLE_LABEL_GL NULL
#define SGX_TURBO_TOGGLE_INFO_0_GL NULL
#define OPTION_VAL_SWITCH_GL NULL
#define OPTION_VAL_DEDICATED_GL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_GL NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_GL NULL
#define SGX_TURBO_DELAY_LABEL_GL NULL
#define SGX_TURBO_DELAY_INFO_0_GL NULL
#define SGX_CDIMAGECACHE_LABEL_GL NULL
#define SGX_CDIMAGECACHE_INFO_0_GL NULL
#define SGX_CDBIOS_LABEL_GL NULL
#define SGX_CDBIOS_INFO_0_GL NULL
#define OPTION_VAL_GAMES_EXPRESS_GL NULL
#define OPTION_VAL_SYSTEM_CARD_1_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_GL NULL
#define SGX_DETECT_GEXPRESS_LABEL_GL NULL
#define SGX_DETECT_GEXPRESS_INFO_0_GL NULL
#define SGX_CDSPEED_LABEL_GL NULL
#define SGX_CDSPEED_LABEL_CAT_GL NULL
#define SGX_CDSPEED_INFO_0_GL NULL
#define SGX_ADPCMVOLUME_LABEL_GL NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_GL NULL
#define SGX_ADPCMVOLUME_INFO_0_GL NULL
#define SGX_ADPCMVOLUME_INFO_1_GL NULL
#define SGX_CDDAVOLUME_LABEL_GL NULL
#define SGX_CDDAVOLUME_LABEL_CAT_GL NULL
#define SGX_CDPSGVOLUME_LABEL_GL NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_GL NULL
#define SGX_FORCESGX_LABEL_GL NULL
#define SGX_FORCESGX_INFO_0_GL NULL
#define SGX_NOSPRITELIMIT_LABEL_GL NULL
#define SGX_NOSPRITELIMIT_INFO_0_GL NULL
#define SGX_OCMULTIPLIER_LABEL_GL NULL
#define SGX_OCMULTIPLIER_INFO_0_GL NULL

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

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Videó"
#define CATEGORY_VIDEO_INFO_0_HU NULL
#define CATEGORY_INPUT_LABEL_HU "Bevitel"
#define CATEGORY_INPUT_INFO_0_HU NULL
#define CATEGORY_HACKS_LABEL_HU NULL
#define CATEGORY_HACKS_INFO_0_HU NULL
#define CATEGORY_CD_LABEL_HU NULL
#define CATEGORY_CD_INFO_0_HU NULL
#define SGX_PALETTE_LABEL_HU NULL
#define SGX_PALETTE_INFO_0_HU NULL
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU NULL
#define SGX_ASPECT_RATIO_LABEL_HU "Képarány"
#define SGX_ASPECT_RATIO_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_6_5_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define SGX_HOVERSCAN_LABEL_HU NULL
#define SGX_HOVERSCAN_INFO_0_HU NULL
#define OPTION_VAL_352_HU NULL
#define SGX_INITIAL_SCANLINE_LABEL_HU NULL
#define SGX_INITIAL_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_3_HU NULL
#define SGX_LAST_SCANLINE_LABEL_HU NULL
#define SGX_LAST_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_242_HU NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_HU NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_HU NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_HU NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_HU NULL
#define SGX_DISABLE_SOFTRESET_LABEL_HU NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_HU NULL
#define SGX_MULTITAP_LABEL_HU NULL
#define SGX_MULTITAP_INFO_0_HU NULL
#define SGX_TURBO_TOGGLE_LABEL_HU NULL
#define SGX_TURBO_TOGGLE_INFO_0_HU NULL
#define OPTION_VAL_SWITCH_HU NULL
#define OPTION_VAL_DEDICATED_HU NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_HU NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_HU NULL
#define SGX_TURBO_DELAY_LABEL_HU NULL
#define SGX_TURBO_DELAY_INFO_0_HU NULL
#define SGX_CDIMAGECACHE_LABEL_HU NULL
#define SGX_CDIMAGECACHE_INFO_0_HU NULL
#define SGX_CDBIOS_LABEL_HU NULL
#define SGX_CDBIOS_INFO_0_HU NULL
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define SGX_DETECT_GEXPRESS_LABEL_HU NULL
#define SGX_DETECT_GEXPRESS_INFO_0_HU NULL
#define SGX_CDSPEED_LABEL_HU NULL
#define SGX_CDSPEED_LABEL_CAT_HU NULL
#define SGX_CDSPEED_INFO_0_HU NULL
#define SGX_ADPCMVOLUME_LABEL_HU NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_HU NULL
#define SGX_ADPCMVOLUME_INFO_0_HU NULL
#define SGX_ADPCMVOLUME_INFO_1_HU NULL
#define SGX_CDDAVOLUME_LABEL_HU NULL
#define SGX_CDDAVOLUME_LABEL_CAT_HU NULL
#define SGX_CDPSGVOLUME_LABEL_HU NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_HU NULL
#define SGX_FORCESGX_LABEL_HU NULL
#define SGX_FORCESGX_INFO_0_HU NULL
#define SGX_NOSPRITELIMIT_LABEL_HU NULL
#define SGX_NOSPRITELIMIT_INFO_0_HU NULL
#define SGX_OCMULTIPLIER_LABEL_HU NULL
#define SGX_OCMULTIPLIER_INFO_0_HU NULL

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
#define CATEGORY_HACKS_LABEL_ID NULL
#define CATEGORY_HACKS_INFO_0_ID NULL
#define CATEGORY_CD_LABEL_ID NULL
#define CATEGORY_CD_INFO_0_ID NULL
#define SGX_PALETTE_LABEL_ID NULL
#define SGX_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define SGX_ASPECT_RATIO_LABEL_ID "Rasio Aspek"
#define SGX_ASPECT_RATIO_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
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
#define SGX_MOUSE_SENSITIVITY_LABEL_ID NULL
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
#define SGX_TURBO_TOGGLE_LABEL_ID NULL
#define SGX_TURBO_TOGGLE_INFO_0_ID NULL
#define OPTION_VAL_SWITCH_ID NULL
#define OPTION_VAL_DEDICATED_ID NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_ID NULL
#define SGX_TURBO_DELAY_LABEL_ID NULL
#define SGX_TURBO_DELAY_INFO_0_ID NULL
#define SGX_CDIMAGECACHE_LABEL_ID NULL
#define SGX_CDIMAGECACHE_INFO_0_ID NULL
#define SGX_CDBIOS_LABEL_ID NULL
#define SGX_CDBIOS_INFO_0_ID NULL
#define OPTION_VAL_GAMES_EXPRESS_ID NULL
#define OPTION_VAL_SYSTEM_CARD_1_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_ID NULL
#define SGX_DETECT_GEXPRESS_LABEL_ID NULL
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
#define SGX_FORCESGX_LABEL_ID NULL
#define SGX_FORCESGX_INFO_0_ID NULL
#define SGX_NOSPRITELIMIT_LABEL_ID NULL
#define SGX_NOSPRITELIMIT_INFO_0_ID NULL
#define SGX_OCMULTIPLIER_LABEL_ID NULL
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

#define CATEGORY_VIDEO_LABEL_JA "ビデオのドライバ"
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_HACKS_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACKS_INFO_0_JA NULL
#define CATEGORY_CD_LABEL_JA NULL
#define CATEGORY_CD_INFO_0_JA NULL
#define SGX_PALETTE_LABEL_JA NULL
#define SGX_PALETTE_INFO_0_JA NULL
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA NULL
#define SGX_ASPECT_RATIO_LABEL_JA "アスペクト比"
#define SGX_ASPECT_RATIO_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_6_5_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define SGX_HOVERSCAN_LABEL_JA NULL
#define SGX_HOVERSCAN_INFO_0_JA NULL
#define OPTION_VAL_352_JA NULL
#define SGX_INITIAL_SCANLINE_LABEL_JA NULL
#define SGX_INITIAL_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_3_JA NULL
#define SGX_LAST_SCANLINE_LABEL_JA NULL
#define SGX_LAST_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_242_JA NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_JA NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_JA NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_JA NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_JA NULL
#define SGX_DISABLE_SOFTRESET_LABEL_JA NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_JA NULL
#define SGX_MULTITAP_LABEL_JA NULL
#define SGX_MULTITAP_INFO_0_JA NULL
#define SGX_TURBO_TOGGLE_LABEL_JA NULL
#define SGX_TURBO_TOGGLE_INFO_0_JA NULL
#define OPTION_VAL_SWITCH_JA NULL
#define OPTION_VAL_DEDICATED_JA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_JA NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_JA NULL
#define SGX_TURBO_DELAY_LABEL_JA NULL
#define SGX_TURBO_DELAY_INFO_0_JA NULL
#define SGX_CDIMAGECACHE_LABEL_JA NULL
#define SGX_CDIMAGECACHE_INFO_0_JA NULL
#define SGX_CDBIOS_LABEL_JA NULL
#define SGX_CDBIOS_INFO_0_JA NULL
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_JA NULL
#define SGX_DETECT_GEXPRESS_LABEL_JA NULL
#define SGX_DETECT_GEXPRESS_INFO_0_JA NULL
#define SGX_CDSPEED_LABEL_JA NULL
#define SGX_CDSPEED_LABEL_CAT_JA NULL
#define SGX_CDSPEED_INFO_0_JA NULL
#define SGX_ADPCMVOLUME_LABEL_JA NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_JA NULL
#define SGX_ADPCMVOLUME_INFO_0_JA NULL
#define SGX_ADPCMVOLUME_INFO_1_JA NULL
#define SGX_CDDAVOLUME_LABEL_JA NULL
#define SGX_CDDAVOLUME_LABEL_CAT_JA NULL
#define SGX_CDPSGVOLUME_LABEL_JA NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_JA NULL
#define SGX_FORCESGX_LABEL_JA NULL
#define SGX_FORCESGX_INFO_0_JA NULL
#define SGX_NOSPRITELIMIT_LABEL_JA NULL
#define SGX_NOSPRITELIMIT_INFO_0_JA NULL
#define SGX_OCMULTIPLIER_LABEL_JA NULL
#define SGX_OCMULTIPLIER_INFO_0_JA NULL

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
#define CATEGORY_VIDEO_INFO_0_KO NULL
#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO NULL
#define CATEGORY_HACKS_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACKS_INFO_0_KO "성능과 호환성에 영향을 끼치는 프로세서 오버클러킹 및 에뮬레이션 정확도 옵션 등을 설정합니다."
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO NULL
#define SGX_PALETTE_LABEL_KO "색상 팔레트"
#define SGX_PALETTE_INFO_0_KO NULL
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO "컴포지트"
#define SGX_ASPECT_RATIO_LABEL_KO "화면비"
#define SGX_ASPECT_RATIO_INFO_0_KO NULL
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_6_5_KO NULL
#define OPTION_VAL_4_3_KO NULL
#define SGX_HOVERSCAN_LABEL_KO NULL
#define SGX_HOVERSCAN_INFO_0_KO NULL
#define OPTION_VAL_352_KO "352 (기본)"
#define SGX_INITIAL_SCANLINE_LABEL_KO NULL
#define SGX_INITIAL_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_3_KO "3 (기본)"
#define SGX_LAST_SCANLINE_LABEL_KO NULL
#define SGX_LAST_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_242_KO "242 (기본)"
#define SGX_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define SGX_MOUSE_SENSITIVITY_INFO_0_KO NULL
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
#define SGX_DISABLE_SOFTRESET_LABEL_KO NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_KO NULL
#define SGX_MULTITAP_LABEL_KO NULL
#define SGX_MULTITAP_INFO_0_KO NULL
#define SGX_TURBO_TOGGLE_LABEL_KO NULL
#define SGX_TURBO_TOGGLE_INFO_0_KO NULL
#define OPTION_VAL_SWITCH_KO NULL
#define OPTION_VAL_DEDICATED_KO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_KO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_KO NULL
#define SGX_TURBO_DELAY_LABEL_KO NULL
#define SGX_TURBO_DELAY_INFO_0_KO NULL
#define SGX_CDIMAGECACHE_LABEL_KO NULL
#define SGX_CDIMAGECACHE_INFO_0_KO NULL
#define SGX_CDBIOS_LABEL_KO NULL
#define SGX_CDBIOS_INFO_0_KO NULL
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define SGX_DETECT_GEXPRESS_LABEL_KO NULL
#define SGX_DETECT_GEXPRESS_INFO_0_KO NULL
#define SGX_CDSPEED_LABEL_KO NULL
#define SGX_CDSPEED_LABEL_CAT_KO NULL
#define SGX_CDSPEED_INFO_0_KO NULL
#define SGX_ADPCMVOLUME_LABEL_KO NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_KO NULL
#define SGX_ADPCMVOLUME_INFO_0_KO NULL
#define SGX_ADPCMVOLUME_INFO_1_KO NULL
#define SGX_CDDAVOLUME_LABEL_KO NULL
#define SGX_CDDAVOLUME_LABEL_CAT_KO NULL
#define SGX_CDPSGVOLUME_LABEL_KO NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_KO NULL
#define SGX_FORCESGX_LABEL_KO NULL
#define SGX_FORCESGX_INFO_0_KO NULL
#define SGX_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제"
#define SGX_NOSPRITELIMIT_INFO_0_KO NULL
#define SGX_OCMULTIPLIER_LABEL_KO NULL
#define SGX_OCMULTIPLIER_INFO_0_KO NULL

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

/* RETRO_LANGUAGE_MT */

#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_INPUT_LABEL_MT NULL
#define CATEGORY_INPUT_INFO_0_MT NULL
#define CATEGORY_HACKS_LABEL_MT NULL
#define CATEGORY_HACKS_INFO_0_MT NULL
#define CATEGORY_CD_LABEL_MT NULL
#define CATEGORY_CD_INFO_0_MT NULL
#define SGX_PALETTE_LABEL_MT NULL
#define SGX_PALETTE_INFO_0_MT NULL
#define OPTION_VAL_RGB_MT NULL
#define OPTION_VAL_COMPOSITE_MT NULL
#define SGX_ASPECT_RATIO_LABEL_MT NULL
#define SGX_ASPECT_RATIO_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_6_5_MT NULL
#define OPTION_VAL_4_3_MT NULL
#define SGX_HOVERSCAN_LABEL_MT NULL
#define SGX_HOVERSCAN_INFO_0_MT NULL
#define OPTION_VAL_352_MT NULL
#define SGX_INITIAL_SCANLINE_LABEL_MT NULL
#define SGX_INITIAL_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_3_MT NULL
#define SGX_LAST_SCANLINE_LABEL_MT NULL
#define SGX_LAST_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_242_MT NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_MT NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_MT NULL
#define OPTION_VAL_0_25_MT NULL
#define OPTION_VAL_0_50_MT NULL
#define OPTION_VAL_0_75_MT NULL
#define OPTION_VAL_1_00_MT NULL
#define OPTION_VAL_1_25_MT NULL
#define OPTION_VAL_1_50_MT NULL
#define OPTION_VAL_1_75_MT NULL
#define OPTION_VAL_2_00_MT NULL
#define OPTION_VAL_2_25_MT NULL
#define OPTION_VAL_2_50_MT NULL
#define OPTION_VAL_2_75_MT NULL
#define OPTION_VAL_3_00_MT NULL
#define OPTION_VAL_3_25_MT NULL
#define OPTION_VAL_3_50_MT NULL
#define OPTION_VAL_3_75_MT NULL
#define OPTION_VAL_4_00_MT NULL
#define OPTION_VAL_4_25_MT NULL
#define OPTION_VAL_4_50_MT NULL
#define OPTION_VAL_4_75_MT NULL
#define OPTION_VAL_5_00_MT NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_MT NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_MT NULL
#define SGX_DISABLE_SOFTRESET_LABEL_MT NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_MT NULL
#define SGX_MULTITAP_LABEL_MT NULL
#define SGX_MULTITAP_INFO_0_MT NULL
#define SGX_TURBO_TOGGLE_LABEL_MT NULL
#define SGX_TURBO_TOGGLE_INFO_0_MT NULL
#define OPTION_VAL_SWITCH_MT NULL
#define OPTION_VAL_DEDICATED_MT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_MT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_MT NULL
#define SGX_TURBO_DELAY_LABEL_MT NULL
#define SGX_TURBO_DELAY_INFO_0_MT NULL
#define SGX_CDIMAGECACHE_LABEL_MT NULL
#define SGX_CDIMAGECACHE_INFO_0_MT NULL
#define SGX_CDBIOS_LABEL_MT NULL
#define SGX_CDBIOS_INFO_0_MT NULL
#define OPTION_VAL_GAMES_EXPRESS_MT NULL
#define OPTION_VAL_SYSTEM_CARD_1_MT NULL
#define OPTION_VAL_SYSTEM_CARD_2_MT NULL
#define OPTION_VAL_SYSTEM_CARD_3_MT NULL
#define SGX_DETECT_GEXPRESS_LABEL_MT NULL
#define SGX_DETECT_GEXPRESS_INFO_0_MT NULL
#define SGX_CDSPEED_LABEL_MT NULL
#define SGX_CDSPEED_LABEL_CAT_MT NULL
#define SGX_CDSPEED_INFO_0_MT NULL
#define SGX_ADPCMVOLUME_LABEL_MT NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_MT NULL
#define SGX_ADPCMVOLUME_INFO_0_MT NULL
#define SGX_ADPCMVOLUME_INFO_1_MT NULL
#define SGX_CDDAVOLUME_LABEL_MT NULL
#define SGX_CDDAVOLUME_LABEL_CAT_MT NULL
#define SGX_CDPSGVOLUME_LABEL_MT NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_MT NULL
#define SGX_FORCESGX_LABEL_MT NULL
#define SGX_FORCESGX_INFO_0_MT NULL
#define SGX_NOSPRITELIMIT_LABEL_MT NULL
#define SGX_NOSPRITELIMIT_INFO_0_MT NULL
#define SGX_OCMULTIPLIER_LABEL_MT NULL
#define SGX_OCMULTIPLIER_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
      CATEGORY_VIDEO_INFO_0_MT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_MT,
      CATEGORY_INPUT_INFO_0_MT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_MT,
      CATEGORY_HACKS_INFO_0_MT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_MT,
      CATEGORY_CD_INFO_0_MT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_MT,
      NULL,
      SGX_PALETTE_INFO_0_MT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_MT },
         { "Composite", OPTION_VAL_COMPOSITE_MT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_MT,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_MT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_MT },
         { "6:5", OPTION_VAL_6_5_MT },
         { "4:3", OPTION_VAL_4_3_MT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_MT,
      NULL,
      SGX_HOVERSCAN_INFO_0_MT,
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
         { "352", OPTION_VAL_352_MT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_MT,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_MT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_MT },
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
      SGX_LAST_SCANLINE_LABEL_MT,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_MT,
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
         { "242", OPTION_VAL_242_MT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_MT,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_MT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_MT },
         { "0.50", OPTION_VAL_0_50_MT },
         { "0.75", OPTION_VAL_0_75_MT },
         { "1.00", OPTION_VAL_1_00_MT },
         { "1.25", OPTION_VAL_1_25_MT },
         { "1.50", OPTION_VAL_1_50_MT },
         { "1.75", OPTION_VAL_1_75_MT },
         { "2.00", OPTION_VAL_2_00_MT },
         { "2.25", OPTION_VAL_2_25_MT },
         { "2.50", OPTION_VAL_2_50_MT },
         { "2.75", OPTION_VAL_2_75_MT },
         { "3.00", OPTION_VAL_3_00_MT },
         { "3.25", OPTION_VAL_3_25_MT },
         { "3.50", OPTION_VAL_3_50_MT },
         { "3.75", OPTION_VAL_3_75_MT },
         { "4.00", OPTION_VAL_4_00_MT },
         { "4.25", OPTION_VAL_4_25_MT },
         { "4.50", OPTION_VAL_4_50_MT },
         { "4.75", OPTION_VAL_4_75_MT },
         { "5.00", OPTION_VAL_5_00_MT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_MT,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_MT,
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
      SGX_DISABLE_SOFTRESET_LABEL_MT,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_MT,
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
      SGX_MULTITAP_LABEL_MT,
      NULL,
      SGX_MULTITAP_INFO_0_MT,
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
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_MT,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_MT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_MT },
         { "dedicated", OPTION_VAL_DEDICATED_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_MT,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_MT,
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
      SGX_TURBO_DELAY_LABEL_MT,
      NULL,
      SGX_TURBO_DELAY_INFO_0_MT,
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
      SGX_CDIMAGECACHE_LABEL_MT,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_MT,
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
      SGX_CDBIOS_LABEL_MT,
      NULL,
      SGX_CDBIOS_INFO_0_MT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_MT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_MT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_MT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_MT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_MT,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_MT,
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
      SGX_CDSPEED_LABEL_MT,
      SGX_CDSPEED_LABEL_CAT_MT,
      SGX_CDSPEED_INFO_0_MT,
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
      SGX_ADPCMVOLUME_LABEL_MT,
      SGX_ADPCMVOLUME_LABEL_CAT_MT,
      SGX_ADPCMVOLUME_INFO_0_MT,
      SGX_ADPCMVOLUME_INFO_1_MT,
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
      SGX_CDDAVOLUME_LABEL_MT,
      SGX_CDDAVOLUME_LABEL_CAT_MT,
      SGX_ADPCMVOLUME_INFO_0_MT,
      SGX_ADPCMVOLUME_INFO_1_MT,
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
      SGX_CDPSGVOLUME_LABEL_MT,
      SGX_CDPSGVOLUME_LABEL_CAT_MT,
      SGX_ADPCMVOLUME_INFO_0_MT,
      SGX_ADPCMVOLUME_INFO_1_MT,
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
      SGX_FORCESGX_LABEL_MT,
      NULL,
      SGX_FORCESGX_INFO_0_MT,
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
      SGX_NOSPRITELIMIT_LABEL_MT,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_MT,
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
      SGX_OCMULTIPLIER_LABEL_MT,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_MT,
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
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
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

/* RETRO_LANGUAGE_OC */

#define CATEGORY_VIDEO_LABEL_OC "Vidèo"
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_INPUT_LABEL_OC NULL
#define CATEGORY_INPUT_INFO_0_OC NULL
#define CATEGORY_HACKS_LABEL_OC NULL
#define CATEGORY_HACKS_INFO_0_OC NULL
#define CATEGORY_CD_LABEL_OC NULL
#define CATEGORY_CD_INFO_0_OC NULL
#define SGX_PALETTE_LABEL_OC NULL
#define SGX_PALETTE_INFO_0_OC NULL
#define OPTION_VAL_RGB_OC NULL
#define OPTION_VAL_COMPOSITE_OC NULL
#define SGX_ASPECT_RATIO_LABEL_OC NULL
#define SGX_ASPECT_RATIO_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_6_5_OC NULL
#define OPTION_VAL_4_3_OC NULL
#define SGX_HOVERSCAN_LABEL_OC NULL
#define SGX_HOVERSCAN_INFO_0_OC NULL
#define OPTION_VAL_352_OC NULL
#define SGX_INITIAL_SCANLINE_LABEL_OC NULL
#define SGX_INITIAL_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_3_OC NULL
#define SGX_LAST_SCANLINE_LABEL_OC NULL
#define SGX_LAST_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_242_OC NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_OC NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_OC NULL
#define OPTION_VAL_0_25_OC NULL
#define OPTION_VAL_0_50_OC NULL
#define OPTION_VAL_0_75_OC NULL
#define OPTION_VAL_1_00_OC NULL
#define OPTION_VAL_1_25_OC NULL
#define OPTION_VAL_1_50_OC NULL
#define OPTION_VAL_1_75_OC NULL
#define OPTION_VAL_2_00_OC NULL
#define OPTION_VAL_2_25_OC NULL
#define OPTION_VAL_2_50_OC NULL
#define OPTION_VAL_2_75_OC NULL
#define OPTION_VAL_3_00_OC NULL
#define OPTION_VAL_3_25_OC NULL
#define OPTION_VAL_3_50_OC NULL
#define OPTION_VAL_3_75_OC NULL
#define OPTION_VAL_4_00_OC NULL
#define OPTION_VAL_4_25_OC NULL
#define OPTION_VAL_4_50_OC NULL
#define OPTION_VAL_4_75_OC NULL
#define OPTION_VAL_5_00_OC NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_OC NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_OC NULL
#define SGX_DISABLE_SOFTRESET_LABEL_OC NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_OC NULL
#define SGX_MULTITAP_LABEL_OC NULL
#define SGX_MULTITAP_INFO_0_OC NULL
#define SGX_TURBO_TOGGLE_LABEL_OC NULL
#define SGX_TURBO_TOGGLE_INFO_0_OC NULL
#define OPTION_VAL_SWITCH_OC NULL
#define OPTION_VAL_DEDICATED_OC NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_OC NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_OC NULL
#define SGX_TURBO_DELAY_LABEL_OC NULL
#define SGX_TURBO_DELAY_INFO_0_OC NULL
#define SGX_CDIMAGECACHE_LABEL_OC NULL
#define SGX_CDIMAGECACHE_INFO_0_OC NULL
#define SGX_CDBIOS_LABEL_OC NULL
#define SGX_CDBIOS_INFO_0_OC NULL
#define OPTION_VAL_GAMES_EXPRESS_OC NULL
#define OPTION_VAL_SYSTEM_CARD_1_OC NULL
#define OPTION_VAL_SYSTEM_CARD_2_OC NULL
#define OPTION_VAL_SYSTEM_CARD_3_OC NULL
#define SGX_DETECT_GEXPRESS_LABEL_OC NULL
#define SGX_DETECT_GEXPRESS_INFO_0_OC NULL
#define SGX_CDSPEED_LABEL_OC NULL
#define SGX_CDSPEED_LABEL_CAT_OC NULL
#define SGX_CDSPEED_INFO_0_OC NULL
#define SGX_ADPCMVOLUME_LABEL_OC NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_OC NULL
#define SGX_ADPCMVOLUME_INFO_0_OC NULL
#define SGX_ADPCMVOLUME_INFO_1_OC NULL
#define SGX_CDDAVOLUME_LABEL_OC NULL
#define SGX_CDDAVOLUME_LABEL_CAT_OC NULL
#define SGX_CDPSGVOLUME_LABEL_OC NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_OC NULL
#define SGX_FORCESGX_LABEL_OC NULL
#define SGX_FORCESGX_INFO_0_OC NULL
#define SGX_NOSPRITELIMIT_LABEL_OC NULL
#define SGX_NOSPRITELIMIT_INFO_0_OC NULL
#define SGX_OCMULTIPLIER_LABEL_OC NULL
#define SGX_OCMULTIPLIER_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
      CATEGORY_VIDEO_INFO_0_OC
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OC,
      CATEGORY_INPUT_INFO_0_OC
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OC,
      CATEGORY_HACKS_INFO_0_OC
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OC,
      CATEGORY_CD_INFO_0_OC
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_OC,
      NULL,
      SGX_PALETTE_INFO_0_OC,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OC },
         { "Composite", OPTION_VAL_COMPOSITE_OC },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_OC,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_OC,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OC },
         { "6:5", OPTION_VAL_6_5_OC },
         { "4:3", OPTION_VAL_4_3_OC },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_OC,
      NULL,
      SGX_HOVERSCAN_INFO_0_OC,
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
         { "352", OPTION_VAL_352_OC },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_OC,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_OC,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OC },
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
      SGX_LAST_SCANLINE_LABEL_OC,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_OC,
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
         { "242", OPTION_VAL_242_OC },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_OC,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_OC,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_OC },
         { "0.50", OPTION_VAL_0_50_OC },
         { "0.75", OPTION_VAL_0_75_OC },
         { "1.00", OPTION_VAL_1_00_OC },
         { "1.25", OPTION_VAL_1_25_OC },
         { "1.50", OPTION_VAL_1_50_OC },
         { "1.75", OPTION_VAL_1_75_OC },
         { "2.00", OPTION_VAL_2_00_OC },
         { "2.25", OPTION_VAL_2_25_OC },
         { "2.50", OPTION_VAL_2_50_OC },
         { "2.75", OPTION_VAL_2_75_OC },
         { "3.00", OPTION_VAL_3_00_OC },
         { "3.25", OPTION_VAL_3_25_OC },
         { "3.50", OPTION_VAL_3_50_OC },
         { "3.75", OPTION_VAL_3_75_OC },
         { "4.00", OPTION_VAL_4_00_OC },
         { "4.25", OPTION_VAL_4_25_OC },
         { "4.50", OPTION_VAL_4_50_OC },
         { "4.75", OPTION_VAL_4_75_OC },
         { "5.00", OPTION_VAL_5_00_OC },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_OC,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_OC,
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
      SGX_DISABLE_SOFTRESET_LABEL_OC,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_OC,
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
      SGX_MULTITAP_LABEL_OC,
      NULL,
      SGX_MULTITAP_INFO_0_OC,
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
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_OC,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_OC,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_OC },
         { "dedicated", OPTION_VAL_DEDICATED_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_OC,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_OC,
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
      SGX_TURBO_DELAY_LABEL_OC,
      NULL,
      SGX_TURBO_DELAY_INFO_0_OC,
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
      SGX_CDIMAGECACHE_LABEL_OC,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_OC,
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
      SGX_CDBIOS_LABEL_OC,
      NULL,
      SGX_CDBIOS_INFO_0_OC,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OC },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OC },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OC },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OC },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_OC,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_OC,
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
      SGX_CDSPEED_LABEL_OC,
      SGX_CDSPEED_LABEL_CAT_OC,
      SGX_CDSPEED_INFO_0_OC,
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
      SGX_ADPCMVOLUME_LABEL_OC,
      SGX_ADPCMVOLUME_LABEL_CAT_OC,
      SGX_ADPCMVOLUME_INFO_0_OC,
      SGX_ADPCMVOLUME_INFO_1_OC,
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
      SGX_CDDAVOLUME_LABEL_OC,
      SGX_CDDAVOLUME_LABEL_CAT_OC,
      SGX_ADPCMVOLUME_INFO_0_OC,
      SGX_ADPCMVOLUME_INFO_1_OC,
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
      SGX_CDPSGVOLUME_LABEL_OC,
      SGX_CDPSGVOLUME_LABEL_CAT_OC,
      SGX_ADPCMVOLUME_INFO_0_OC,
      SGX_ADPCMVOLUME_INFO_1_OC,
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
      SGX_FORCESGX_LABEL_OC,
      NULL,
      SGX_FORCESGX_INFO_0_OC,
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
      SGX_NOSPRITELIMIT_LABEL_OC,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_OC,
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
      SGX_OCMULTIPLIER_LABEL_OC,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_OC,
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
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
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
#define OPTION_VAL_COMPOSITE_PT_BR "Composto"
#define SGX_ASPECT_RATIO_LABEL_PT_BR "Proporção de tela"
#define SGX_ASPECT_RATIO_INFO_0_PT_BR "Escolhe a proporção de tela preferida do conteúdo. Em jogos que constantemente alteram-se entre os modos de 352 e 256 e usam a proporção automática, é melhor configurar a largura para 342, para minimizar o redimensionamento e o excesso de linhas pretas, pois essa largura está na proporção do modo de 256 de largura (em algo semelhante, basta testar com Asuka 100%, que é um dos jogos que tem alteração de modos)."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_6_5_PT_BR NULL
#define OPTION_VAL_4_3_PT_BR NULL
#define SGX_HOVERSCAN_LABEL_PT_BR "Overscan horizontal (somente no modo 352 de largura)"
#define SGX_HOVERSCAN_INFO_0_PT_BR "Seleciona a largura máxima da imagem que será exibida. Valores menores cortam o lado direito da imagem (em jogos com largura de 352px)."
#define OPTION_VAL_352_PT_BR "352 (padrão)"
#define SGX_INITIAL_SCANLINE_LABEL_PT_BR "Linha de verificação inicial"
#define SGX_INITIAL_SCANLINE_INFO_0_PT_BR "Primeira linha de verificação renderizada. Valores maiores cortarão a parte superior da imagem."
#define OPTION_VAL_3_PT_BR "3 (padrão)"
#define SGX_LAST_SCANLINE_LABEL_PT_BR "Linha de verificação final"
#define SGX_LAST_SCANLINE_INFO_0_PT_BR "Última linha de verificação renderizada. Valores menores cortarão a parte inferior da imagem."
#define OPTION_VAL_242_PT_BR "242 (padrão)"
#define SGX_MOUSE_SENSITIVITY_LABEL_PT_BR "Sensibilidade do mouse"
#define SGX_MOUSE_SENSITIVITY_INFO_0_PT_BR "Valores maiores tornarão a movimentação do cursor do mouse mais rápida."
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
#define SGX_UP_DOWN_ALLOWED_INFO_0_PT_BR "Esta opção permitirá pressionar, alternar ou segurar rapidamente as direções esquerda e direita (ou cima e baixo) ao mesmo tempo. Pode causar falhas de movimento."
#define SGX_DISABLE_SOFTRESET_LABEL_PT_BR "Desativar a reinicialização suave (RUN+SELECT)"
#define SGX_DISABLE_SOFTRESET_INFO_0_PT_BR "Ao pressionar RUN e SELECT simultaneamente, desativa ambos os botões temporariamente em vez de reinicializar."
#define SGX_MULTITAP_LABEL_PT_BR "Multitap de 5 portas"
#define SGX_MULTITAP_INFO_0_PT_BR "Ativa emulação de multitap de até 5 jogadores. A desativação é necessária em alguns casos (por ex. Cho Aniki)."
#define SGX_TURBO_TOGGLE_LABEL_PT_BR "Modo de atalho do turbo"
#define SGX_TURBO_TOGGLE_INFO_0_PT_BR "Habilita os botões turbo. Os atalhos (botões III e IV) podem comportar-se como interruptores ou como botões dedicados (segure para usar)."
#define OPTION_VAL_SWITCH_PT_BR "Interruptor"
#define OPTION_VAL_DEDICATED_PT_BR "Dedicado"
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR "Atalho alternativo do turbo"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR "Atribui os botões L3 e R3 do RetroPad como atalhos do turbo, em vez dos botões III e IV. Somente funciona no modo interruptor e enquanto não tiver outras atribuições aos botões L3 e R3. Você pode evitar o remapeamento dos botões III e IV ao alterar para o modo de controle de 6 botões com isso."
#define SGX_TURBO_DELAY_LABEL_PT_BR "Atraso do turbo"
#define SGX_TURBO_DELAY_INFO_0_PT_BR "Ajusta o intervalo entre as ativações do turbo (em quadros)."
#define SGX_CDIMAGECACHE_LABEL_PT_BR "Cache de imagens do CD (requer reinício)"
#define SGX_CDIMAGECACHE_INFO_0_PT_BR "Carrega a imagem completa na memória na inicialização. Eventualmente, pode diminuir o tempo de carregamento ao custo de um tempo de inicialização maior."
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
#define SGX_NOSPRITELIMIT_LABEL_PT_BR "Sem limite de sprite"
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
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_6_5_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define SGX_HOVERSCAN_LABEL_PT_PT NULL
#define SGX_HOVERSCAN_INFO_0_PT_PT NULL
#define OPTION_VAL_352_PT_PT NULL
#define SGX_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define SGX_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT NULL
#define SGX_LAST_SCANLINE_LABEL_PT_PT NULL
#define SGX_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT NULL
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
#define SGX_TURBO_TOGGLE_LABEL_PT_PT NULL
#define SGX_TURBO_TOGGLE_INFO_0_PT_PT NULL
#define OPTION_VAL_SWITCH_PT_PT NULL
#define OPTION_VAL_DEDICATED_PT_PT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT NULL
#define SGX_TURBO_DELAY_LABEL_PT_PT NULL
#define SGX_TURBO_DELAY_INFO_0_PT_PT NULL
#define SGX_CDIMAGECACHE_LABEL_PT_PT NULL
#define SGX_CDIMAGECACHE_INFO_0_PT_PT NULL
#define SGX_CDBIOS_LABEL_PT_PT NULL
#define SGX_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT NULL
#define SGX_DETECT_GEXPRESS_LABEL_PT_PT NULL
#define SGX_DETECT_GEXPRESS_INFO_0_PT_PT NULL
#define SGX_CDSPEED_LABEL_PT_PT NULL
#define SGX_CDSPEED_LABEL_CAT_PT_PT NULL
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

/* RETRO_LANGUAGE_RO */

#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_INPUT_LABEL_RO NULL
#define CATEGORY_INPUT_INFO_0_RO NULL
#define CATEGORY_HACKS_LABEL_RO NULL
#define CATEGORY_HACKS_INFO_0_RO NULL
#define CATEGORY_CD_LABEL_RO NULL
#define CATEGORY_CD_INFO_0_RO NULL
#define SGX_PALETTE_LABEL_RO NULL
#define SGX_PALETTE_INFO_0_RO NULL
#define OPTION_VAL_RGB_RO NULL
#define OPTION_VAL_COMPOSITE_RO NULL
#define SGX_ASPECT_RATIO_LABEL_RO NULL
#define SGX_ASPECT_RATIO_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_6_5_RO NULL
#define OPTION_VAL_4_3_RO NULL
#define SGX_HOVERSCAN_LABEL_RO NULL
#define SGX_HOVERSCAN_INFO_0_RO NULL
#define OPTION_VAL_352_RO NULL
#define SGX_INITIAL_SCANLINE_LABEL_RO NULL
#define SGX_INITIAL_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_3_RO NULL
#define SGX_LAST_SCANLINE_LABEL_RO NULL
#define SGX_LAST_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_242_RO NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_RO NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_RO NULL
#define OPTION_VAL_0_25_RO NULL
#define OPTION_VAL_0_50_RO NULL
#define OPTION_VAL_0_75_RO NULL
#define OPTION_VAL_1_00_RO NULL
#define OPTION_VAL_1_25_RO NULL
#define OPTION_VAL_1_50_RO NULL
#define OPTION_VAL_1_75_RO NULL
#define OPTION_VAL_2_00_RO NULL
#define OPTION_VAL_2_25_RO NULL
#define OPTION_VAL_2_50_RO NULL
#define OPTION_VAL_2_75_RO NULL
#define OPTION_VAL_3_00_RO NULL
#define OPTION_VAL_3_25_RO NULL
#define OPTION_VAL_3_50_RO NULL
#define OPTION_VAL_3_75_RO NULL
#define OPTION_VAL_4_00_RO NULL
#define OPTION_VAL_4_25_RO NULL
#define OPTION_VAL_4_50_RO NULL
#define OPTION_VAL_4_75_RO NULL
#define OPTION_VAL_5_00_RO NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_RO NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_RO NULL
#define SGX_DISABLE_SOFTRESET_LABEL_RO NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_RO NULL
#define SGX_MULTITAP_LABEL_RO NULL
#define SGX_MULTITAP_INFO_0_RO NULL
#define SGX_TURBO_TOGGLE_LABEL_RO NULL
#define SGX_TURBO_TOGGLE_INFO_0_RO NULL
#define OPTION_VAL_SWITCH_RO NULL
#define OPTION_VAL_DEDICATED_RO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_RO NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_RO NULL
#define SGX_TURBO_DELAY_LABEL_RO NULL
#define SGX_TURBO_DELAY_INFO_0_RO NULL
#define SGX_CDIMAGECACHE_LABEL_RO NULL
#define SGX_CDIMAGECACHE_INFO_0_RO NULL
#define SGX_CDBIOS_LABEL_RO NULL
#define SGX_CDBIOS_INFO_0_RO NULL
#define OPTION_VAL_GAMES_EXPRESS_RO NULL
#define OPTION_VAL_SYSTEM_CARD_1_RO NULL
#define OPTION_VAL_SYSTEM_CARD_2_RO NULL
#define OPTION_VAL_SYSTEM_CARD_3_RO NULL
#define SGX_DETECT_GEXPRESS_LABEL_RO NULL
#define SGX_DETECT_GEXPRESS_INFO_0_RO NULL
#define SGX_CDSPEED_LABEL_RO NULL
#define SGX_CDSPEED_LABEL_CAT_RO NULL
#define SGX_CDSPEED_INFO_0_RO NULL
#define SGX_ADPCMVOLUME_LABEL_RO NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_RO NULL
#define SGX_ADPCMVOLUME_INFO_0_RO NULL
#define SGX_ADPCMVOLUME_INFO_1_RO NULL
#define SGX_CDDAVOLUME_LABEL_RO NULL
#define SGX_CDDAVOLUME_LABEL_CAT_RO NULL
#define SGX_CDPSGVOLUME_LABEL_RO NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_RO NULL
#define SGX_FORCESGX_LABEL_RO NULL
#define SGX_FORCESGX_INFO_0_RO NULL
#define SGX_NOSPRITELIMIT_LABEL_RO NULL
#define SGX_NOSPRITELIMIT_INFO_0_RO NULL
#define SGX_OCMULTIPLIER_LABEL_RO NULL
#define SGX_OCMULTIPLIER_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
      CATEGORY_VIDEO_INFO_0_RO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RO,
      CATEGORY_INPUT_INFO_0_RO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RO,
      CATEGORY_HACKS_INFO_0_RO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RO,
      CATEGORY_CD_INFO_0_RO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_RO,
      NULL,
      SGX_PALETTE_INFO_0_RO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RO },
         { "Composite", OPTION_VAL_COMPOSITE_RO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_RO,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_RO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RO },
         { "6:5", OPTION_VAL_6_5_RO },
         { "4:3", OPTION_VAL_4_3_RO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_RO,
      NULL,
      SGX_HOVERSCAN_INFO_0_RO,
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
         { "352", OPTION_VAL_352_RO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_RO,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_RO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RO },
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
      SGX_LAST_SCANLINE_LABEL_RO,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_RO,
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
         { "242", OPTION_VAL_242_RO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_RO,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_RO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_RO },
         { "0.50", OPTION_VAL_0_50_RO },
         { "0.75", OPTION_VAL_0_75_RO },
         { "1.00", OPTION_VAL_1_00_RO },
         { "1.25", OPTION_VAL_1_25_RO },
         { "1.50", OPTION_VAL_1_50_RO },
         { "1.75", OPTION_VAL_1_75_RO },
         { "2.00", OPTION_VAL_2_00_RO },
         { "2.25", OPTION_VAL_2_25_RO },
         { "2.50", OPTION_VAL_2_50_RO },
         { "2.75", OPTION_VAL_2_75_RO },
         { "3.00", OPTION_VAL_3_00_RO },
         { "3.25", OPTION_VAL_3_25_RO },
         { "3.50", OPTION_VAL_3_50_RO },
         { "3.75", OPTION_VAL_3_75_RO },
         { "4.00", OPTION_VAL_4_00_RO },
         { "4.25", OPTION_VAL_4_25_RO },
         { "4.50", OPTION_VAL_4_50_RO },
         { "4.75", OPTION_VAL_4_75_RO },
         { "5.00", OPTION_VAL_5_00_RO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_RO,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_RO,
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
      SGX_DISABLE_SOFTRESET_LABEL_RO,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_RO,
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
      SGX_MULTITAP_LABEL_RO,
      NULL,
      SGX_MULTITAP_INFO_0_RO,
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
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_RO,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_RO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_RO },
         { "dedicated", OPTION_VAL_DEDICATED_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_RO,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_RO,
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
      SGX_TURBO_DELAY_LABEL_RO,
      NULL,
      SGX_TURBO_DELAY_INFO_0_RO,
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
      SGX_CDIMAGECACHE_LABEL_RO,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_RO,
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
      SGX_CDBIOS_LABEL_RO,
      NULL,
      SGX_CDBIOS_INFO_0_RO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_RO,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_RO,
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
      SGX_CDSPEED_LABEL_RO,
      SGX_CDSPEED_LABEL_CAT_RO,
      SGX_CDSPEED_INFO_0_RO,
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
      SGX_ADPCMVOLUME_LABEL_RO,
      SGX_ADPCMVOLUME_LABEL_CAT_RO,
      SGX_ADPCMVOLUME_INFO_0_RO,
      SGX_ADPCMVOLUME_INFO_1_RO,
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
      SGX_CDDAVOLUME_LABEL_RO,
      SGX_CDDAVOLUME_LABEL_CAT_RO,
      SGX_ADPCMVOLUME_INFO_0_RO,
      SGX_ADPCMVOLUME_INFO_1_RO,
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
      SGX_CDPSGVOLUME_LABEL_RO,
      SGX_CDPSGVOLUME_LABEL_CAT_RO,
      SGX_ADPCMVOLUME_INFO_0_RO,
      SGX_ADPCMVOLUME_INFO_1_RO,
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
      SGX_FORCESGX_LABEL_RO,
      NULL,
      SGX_FORCESGX_INFO_0_RO,
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
      SGX_NOSPRITELIMIT_LABEL_RO,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_RO,
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
      SGX_OCMULTIPLIER_LABEL_RO,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_RO,
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
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU NULL
#define CATEGORY_INPUT_LABEL_RU "Ввод"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для светового пистолета, мыши и NegCon."
#define CATEGORY_HACKS_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACKS_INFO_0_RU "Настройка разгона процессора и параметров точности эмуляции, влияющих на производительность и совместимость."
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU NULL
#define SGX_PALETTE_LABEL_RU "Цветовая палитра"
#define SGX_PALETTE_INFO_0_RU NULL
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU "Композитный"
#define SGX_ASPECT_RATIO_LABEL_RU "Соотношение сторон"
#define SGX_ASPECT_RATIO_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_6_5_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define SGX_HOVERSCAN_LABEL_RU NULL
#define SGX_HOVERSCAN_INFO_0_RU NULL
#define OPTION_VAL_352_RU "352 (по умолчанию)"
#define SGX_INITIAL_SCANLINE_LABEL_RU NULL
#define SGX_INITIAL_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_3_RU "3 (по умолчанию)"
#define SGX_LAST_SCANLINE_LABEL_RU NULL
#define SGX_LAST_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_242_RU "242 (по умолчанию)"
#define SGX_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define SGX_MOUSE_SENSITIVITY_INFO_0_RU NULL
#define OPTION_VAL_0_25_RU NULL
#define OPTION_VAL_0_50_RU NULL
#define OPTION_VAL_0_75_RU NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_RU "Разрешить противоположные направления"
#define SGX_UP_DOWN_ALLOWED_INFO_0_RU "Позволяет нажимать / быстро менять / зажимать одновременно направления влево и вправо (или вверх и вниз). Может вызывать глитчи, связанные с перемещением."
#define SGX_DISABLE_SOFTRESET_LABEL_RU NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_RU NULL
#define SGX_MULTITAP_LABEL_RU NULL
#define SGX_MULTITAP_INFO_0_RU NULL
#define SGX_TURBO_TOGGLE_LABEL_RU NULL
#define SGX_TURBO_TOGGLE_INFO_0_RU NULL
#define OPTION_VAL_SWITCH_RU NULL
#define OPTION_VAL_DEDICATED_RU NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_RU NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_RU NULL
#define SGX_TURBO_DELAY_LABEL_RU "Задержка турбо"
#define SGX_TURBO_DELAY_INFO_0_RU NULL
#define SGX_CDIMAGECACHE_LABEL_RU NULL
#define SGX_CDIMAGECACHE_INFO_0_RU NULL
#define SGX_CDBIOS_LABEL_RU NULL
#define SGX_CDBIOS_INFO_0_RU NULL
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define SGX_DETECT_GEXPRESS_LABEL_RU NULL
#define SGX_DETECT_GEXPRESS_INFO_0_RU NULL
#define SGX_CDSPEED_LABEL_RU NULL
#define SGX_CDSPEED_LABEL_CAT_RU NULL
#define SGX_CDSPEED_INFO_0_RU NULL
#define SGX_ADPCMVOLUME_LABEL_RU NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_RU NULL
#define SGX_ADPCMVOLUME_INFO_0_RU NULL
#define SGX_ADPCMVOLUME_INFO_1_RU NULL
#define SGX_CDDAVOLUME_LABEL_RU NULL
#define SGX_CDDAVOLUME_LABEL_CAT_RU NULL
#define SGX_CDPSGVOLUME_LABEL_RU NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_RU NULL
#define SGX_FORCESGX_LABEL_RU NULL
#define SGX_FORCESGX_INFO_0_RU NULL
#define SGX_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов"
#define SGX_NOSPRITELIMIT_INFO_0_RU NULL
#define SGX_OCMULTIPLIER_LABEL_RU NULL
#define SGX_OCMULTIPLIER_INFO_0_RU NULL

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

/* RETRO_LANGUAGE_SI */

#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_INPUT_LABEL_SI NULL
#define CATEGORY_INPUT_INFO_0_SI NULL
#define CATEGORY_HACKS_LABEL_SI NULL
#define CATEGORY_HACKS_INFO_0_SI NULL
#define CATEGORY_CD_LABEL_SI NULL
#define CATEGORY_CD_INFO_0_SI NULL
#define SGX_PALETTE_LABEL_SI NULL
#define SGX_PALETTE_INFO_0_SI NULL
#define OPTION_VAL_RGB_SI NULL
#define OPTION_VAL_COMPOSITE_SI NULL
#define SGX_ASPECT_RATIO_LABEL_SI NULL
#define SGX_ASPECT_RATIO_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_6_5_SI NULL
#define OPTION_VAL_4_3_SI NULL
#define SGX_HOVERSCAN_LABEL_SI NULL
#define SGX_HOVERSCAN_INFO_0_SI NULL
#define OPTION_VAL_352_SI NULL
#define SGX_INITIAL_SCANLINE_LABEL_SI NULL
#define SGX_INITIAL_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_3_SI NULL
#define SGX_LAST_SCANLINE_LABEL_SI NULL
#define SGX_LAST_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_242_SI NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_SI NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_SI NULL
#define OPTION_VAL_0_25_SI NULL
#define OPTION_VAL_0_50_SI NULL
#define OPTION_VAL_0_75_SI NULL
#define OPTION_VAL_1_00_SI NULL
#define OPTION_VAL_1_25_SI NULL
#define OPTION_VAL_1_50_SI NULL
#define OPTION_VAL_1_75_SI NULL
#define OPTION_VAL_2_00_SI NULL
#define OPTION_VAL_2_25_SI NULL
#define OPTION_VAL_2_50_SI NULL
#define OPTION_VAL_2_75_SI NULL
#define OPTION_VAL_3_00_SI NULL
#define OPTION_VAL_3_25_SI NULL
#define OPTION_VAL_3_50_SI NULL
#define OPTION_VAL_3_75_SI NULL
#define OPTION_VAL_4_00_SI NULL
#define OPTION_VAL_4_25_SI NULL
#define OPTION_VAL_4_50_SI NULL
#define OPTION_VAL_4_75_SI NULL
#define OPTION_VAL_5_00_SI NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_SI NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_SI NULL
#define SGX_DISABLE_SOFTRESET_LABEL_SI NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_SI NULL
#define SGX_MULTITAP_LABEL_SI NULL
#define SGX_MULTITAP_INFO_0_SI NULL
#define SGX_TURBO_TOGGLE_LABEL_SI NULL
#define SGX_TURBO_TOGGLE_INFO_0_SI NULL
#define OPTION_VAL_SWITCH_SI NULL
#define OPTION_VAL_DEDICATED_SI NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SI NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SI NULL
#define SGX_TURBO_DELAY_LABEL_SI NULL
#define SGX_TURBO_DELAY_INFO_0_SI NULL
#define SGX_CDIMAGECACHE_LABEL_SI NULL
#define SGX_CDIMAGECACHE_INFO_0_SI NULL
#define SGX_CDBIOS_LABEL_SI NULL
#define SGX_CDBIOS_INFO_0_SI NULL
#define OPTION_VAL_GAMES_EXPRESS_SI NULL
#define OPTION_VAL_SYSTEM_CARD_1_SI NULL
#define OPTION_VAL_SYSTEM_CARD_2_SI NULL
#define OPTION_VAL_SYSTEM_CARD_3_SI NULL
#define SGX_DETECT_GEXPRESS_LABEL_SI NULL
#define SGX_DETECT_GEXPRESS_INFO_0_SI NULL
#define SGX_CDSPEED_LABEL_SI NULL
#define SGX_CDSPEED_LABEL_CAT_SI NULL
#define SGX_CDSPEED_INFO_0_SI NULL
#define SGX_ADPCMVOLUME_LABEL_SI NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_SI NULL
#define SGX_ADPCMVOLUME_INFO_0_SI NULL
#define SGX_ADPCMVOLUME_INFO_1_SI NULL
#define SGX_CDDAVOLUME_LABEL_SI NULL
#define SGX_CDDAVOLUME_LABEL_CAT_SI NULL
#define SGX_CDPSGVOLUME_LABEL_SI NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_SI NULL
#define SGX_FORCESGX_LABEL_SI NULL
#define SGX_FORCESGX_INFO_0_SI NULL
#define SGX_NOSPRITELIMIT_LABEL_SI NULL
#define SGX_NOSPRITELIMIT_INFO_0_SI NULL
#define SGX_OCMULTIPLIER_LABEL_SI NULL
#define SGX_OCMULTIPLIER_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
      CATEGORY_VIDEO_INFO_0_SI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SI,
      CATEGORY_INPUT_INFO_0_SI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SI,
      CATEGORY_HACKS_INFO_0_SI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SI,
      CATEGORY_CD_INFO_0_SI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "sgx_palette",
      SGX_PALETTE_LABEL_SI,
      NULL,
      SGX_PALETTE_INFO_0_SI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SI },
         { "Composite", OPTION_VAL_COMPOSITE_SI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "sgx_aspect_ratio",
      SGX_ASPECT_RATIO_LABEL_SI,
      NULL,
      SGX_ASPECT_RATIO_INFO_0_SI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SI },
         { "6:5", OPTION_VAL_6_5_SI },
         { "4:3", OPTION_VAL_4_3_SI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "sgx_hoverscan",
      SGX_HOVERSCAN_LABEL_SI,
      NULL,
      SGX_HOVERSCAN_INFO_0_SI,
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
         { "352", OPTION_VAL_352_SI },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      SGX_INITIAL_SCANLINE_LABEL_SI,
      NULL,
      SGX_INITIAL_SCANLINE_INFO_0_SI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SI },
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
      SGX_LAST_SCANLINE_LABEL_SI,
      NULL,
      SGX_LAST_SCANLINE_INFO_0_SI,
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
         { "242", OPTION_VAL_242_SI },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_mouse_sensitivity",
      SGX_MOUSE_SENSITIVITY_LABEL_SI,
      NULL,
      SGX_MOUSE_SENSITIVITY_INFO_0_SI,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SI },
         { "0.50", OPTION_VAL_0_50_SI },
         { "0.75", OPTION_VAL_0_75_SI },
         { "1.00", OPTION_VAL_1_00_SI },
         { "1.25", OPTION_VAL_1_25_SI },
         { "1.50", OPTION_VAL_1_50_SI },
         { "1.75", OPTION_VAL_1_75_SI },
         { "2.00", OPTION_VAL_2_00_SI },
         { "2.25", OPTION_VAL_2_25_SI },
         { "2.50", OPTION_VAL_2_50_SI },
         { "2.75", OPTION_VAL_2_75_SI },
         { "3.00", OPTION_VAL_3_00_SI },
         { "3.25", OPTION_VAL_3_25_SI },
         { "3.50", OPTION_VAL_3_50_SI },
         { "3.75", OPTION_VAL_3_75_SI },
         { "4.00", OPTION_VAL_4_00_SI },
         { "4.25", OPTION_VAL_4_25_SI },
         { "4.50", OPTION_VAL_4_50_SI },
         { "4.75", OPTION_VAL_4_75_SI },
         { "5.00", OPTION_VAL_5_00_SI },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_up_down_allowed",
      SGX_UP_DOWN_ALLOWED_LABEL_SI,
      NULL,
      SGX_UP_DOWN_ALLOWED_INFO_0_SI,
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
      SGX_DISABLE_SOFTRESET_LABEL_SI,
      NULL,
      SGX_DISABLE_SOFTRESET_INFO_0_SI,
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
      SGX_MULTITAP_LABEL_SI,
      NULL,
      SGX_MULTITAP_INFO_0_SI,
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
      "sgx_turbo_toggle",
      SGX_TURBO_TOGGLE_LABEL_SI,
      NULL,
      SGX_TURBO_TOGGLE_INFO_0_SI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "switch", OPTION_VAL_SWITCH_SI },
         { "dedicated", OPTION_VAL_DEDICATED_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      SGX_TURBO_TOGGLE_HOTKEY_LABEL_SI,
      NULL,
      SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SI,
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
      SGX_TURBO_DELAY_LABEL_SI,
      NULL,
      SGX_TURBO_DELAY_INFO_0_SI,
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
      SGX_CDIMAGECACHE_LABEL_SI,
      NULL,
      SGX_CDIMAGECACHE_INFO_0_SI,
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
      SGX_CDBIOS_LABEL_SI,
      NULL,
      SGX_CDBIOS_INFO_0_SI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SI },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_detect_gexpress",
      SGX_DETECT_GEXPRESS_LABEL_SI,
      NULL,
      SGX_DETECT_GEXPRESS_INFO_0_SI,
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
      SGX_CDSPEED_LABEL_SI,
      SGX_CDSPEED_LABEL_CAT_SI,
      SGX_CDSPEED_INFO_0_SI,
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
      SGX_ADPCMVOLUME_LABEL_SI,
      SGX_ADPCMVOLUME_LABEL_CAT_SI,
      SGX_ADPCMVOLUME_INFO_0_SI,
      SGX_ADPCMVOLUME_INFO_1_SI,
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
      SGX_CDDAVOLUME_LABEL_SI,
      SGX_CDDAVOLUME_LABEL_CAT_SI,
      SGX_ADPCMVOLUME_INFO_0_SI,
      SGX_ADPCMVOLUME_INFO_1_SI,
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
      SGX_CDPSGVOLUME_LABEL_SI,
      SGX_CDPSGVOLUME_LABEL_CAT_SI,
      SGX_ADPCMVOLUME_INFO_0_SI,
      SGX_ADPCMVOLUME_INFO_1_SI,
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
      SGX_FORCESGX_LABEL_SI,
      NULL,
      SGX_FORCESGX_INFO_0_SI,
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
      SGX_NOSPRITELIMIT_LABEL_SI,
      NULL,
      SGX_NOSPRITELIMIT_INFO_0_SI,
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
      SGX_OCMULTIPLIER_LABEL_SI,
      NULL,
      SGX_OCMULTIPLIER_INFO_0_SI,
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
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK NULL
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define SGX_PALETTE_LABEL_SK NULL
#define SGX_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK NULL
#define SGX_ASPECT_RATIO_LABEL_SK "Pomer strán"
#define SGX_ASPECT_RATIO_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_6_5_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define SGX_HOVERSCAN_LABEL_SK NULL
#define SGX_HOVERSCAN_INFO_0_SK NULL
#define OPTION_VAL_352_SK NULL
#define SGX_INITIAL_SCANLINE_LABEL_SK NULL
#define SGX_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK NULL
#define SGX_LAST_SCANLINE_LABEL_SK NULL
#define SGX_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_SK NULL
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
#define SGX_TURBO_TOGGLE_LABEL_SK NULL
#define SGX_TURBO_TOGGLE_INFO_0_SK NULL
#define OPTION_VAL_SWITCH_SK NULL
#define OPTION_VAL_DEDICATED_SK NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SK NULL
#define SGX_TURBO_DELAY_LABEL_SK NULL
#define SGX_TURBO_DELAY_INFO_0_SK NULL
#define SGX_CDIMAGECACHE_LABEL_SK NULL
#define SGX_CDIMAGECACHE_INFO_0_SK NULL
#define SGX_CDBIOS_LABEL_SK NULL
#define SGX_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK NULL
#define OPTION_VAL_SYSTEM_CARD_2_SK NULL
#define OPTION_VAL_SYSTEM_CARD_3_SK NULL
#define SGX_DETECT_GEXPRESS_LABEL_SK NULL
#define SGX_DETECT_GEXPRESS_INFO_0_SK NULL
#define SGX_CDSPEED_LABEL_SK NULL
#define SGX_CDSPEED_LABEL_CAT_SK NULL
#define SGX_CDSPEED_INFO_0_SK NULL
#define SGX_ADPCMVOLUME_LABEL_SK NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_SK NULL
#define SGX_ADPCMVOLUME_INFO_0_SK NULL
#define SGX_ADPCMVOLUME_INFO_1_SK NULL
#define SGX_CDDAVOLUME_LABEL_SK NULL
#define SGX_CDDAVOLUME_LABEL_CAT_SK NULL
#define SGX_CDPSGVOLUME_LABEL_SK NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_SK NULL
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

#define CATEGORY_VIDEO_LABEL_SV "Bild"
#define CATEGORY_VIDEO_INFO_0_SV NULL
#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV NULL
#define CATEGORY_HACKS_LABEL_SV NULL
#define CATEGORY_HACKS_INFO_0_SV NULL
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV NULL
#define SGX_PALETTE_LABEL_SV "Färgpalett"
#define SGX_PALETTE_INFO_0_SV NULL
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV "Komposit"
#define SGX_ASPECT_RATIO_LABEL_SV "Bildförhållande"
#define SGX_ASPECT_RATIO_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV "Automatiskt"
#define OPTION_VAL_6_5_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define SGX_HOVERSCAN_LABEL_SV NULL
#define SGX_HOVERSCAN_INFO_0_SV NULL
#define OPTION_VAL_352_SV NULL
#define SGX_INITIAL_SCANLINE_LABEL_SV NULL
#define SGX_INITIAL_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_3_SV NULL
#define SGX_LAST_SCANLINE_LABEL_SV NULL
#define SGX_LAST_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_242_SV NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_SV NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_SV NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_SV NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_SV NULL
#define SGX_DISABLE_SOFTRESET_LABEL_SV NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_SV NULL
#define SGX_MULTITAP_LABEL_SV NULL
#define SGX_MULTITAP_INFO_0_SV NULL
#define SGX_TURBO_TOGGLE_LABEL_SV NULL
#define SGX_TURBO_TOGGLE_INFO_0_SV NULL
#define OPTION_VAL_SWITCH_SV NULL
#define OPTION_VAL_DEDICATED_SV NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_SV NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_SV NULL
#define SGX_TURBO_DELAY_LABEL_SV NULL
#define SGX_TURBO_DELAY_INFO_0_SV NULL
#define SGX_CDIMAGECACHE_LABEL_SV NULL
#define SGX_CDIMAGECACHE_INFO_0_SV NULL
#define SGX_CDBIOS_LABEL_SV NULL
#define SGX_CDBIOS_INFO_0_SV NULL
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define SGX_DETECT_GEXPRESS_LABEL_SV NULL
#define SGX_DETECT_GEXPRESS_INFO_0_SV NULL
#define SGX_CDSPEED_LABEL_SV "(CD) CD-hastighet"
#define SGX_CDSPEED_LABEL_CAT_SV "CD-hastighet"
#define SGX_CDSPEED_INFO_0_SV NULL
#define SGX_ADPCMVOLUME_LABEL_SV "(CD) ADPCM Volym %"
#define SGX_ADPCMVOLUME_LABEL_CAT_SV NULL
#define SGX_ADPCMVOLUME_INFO_0_SV NULL
#define SGX_ADPCMVOLUME_INFO_1_SV NULL
#define SGX_CDDAVOLUME_LABEL_SV "(CD) CDDA Volym %"
#define SGX_CDDAVOLUME_LABEL_CAT_SV NULL
#define SGX_CDPSGVOLUME_LABEL_SV "(CD) PSG Volym %"
#define SGX_CDPSGVOLUME_LABEL_CAT_SV NULL
#define SGX_FORCESGX_LABEL_SV NULL
#define SGX_FORCESGX_INFO_0_SV NULL
#define SGX_NOSPRITELIMIT_LABEL_SV NULL
#define SGX_NOSPRITELIMIT_INFO_0_SV NULL
#define SGX_OCMULTIPLIER_LABEL_SV NULL
#define SGX_OCMULTIPLIER_INFO_0_SV NULL

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
#define SGX_PALETTE_INFO_0_TR NULL
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_COMPOSITE_TR NULL
#define SGX_ASPECT_RATIO_LABEL_TR "En Boy Oranı"
#define SGX_ASPECT_RATIO_INFO_0_TR NULL
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_6_5_TR NULL
#define OPTION_VAL_4_3_TR NULL
#define SGX_HOVERSCAN_LABEL_TR "Yatay Aşırı Tarama (Yalnızca 352 Genişlik Kipi)"
#define SGX_HOVERSCAN_INFO_0_TR NULL
#define OPTION_VAL_352_TR "352 (Varsayılan)"
#define SGX_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define SGX_INITIAL_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_3_TR "3 (Varsayılan)"
#define SGX_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define SGX_LAST_SCANLINE_INFO_0_TR NULL
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
#define SGX_DISABLE_SOFTRESET_LABEL_TR NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_TR NULL
#define SGX_MULTITAP_LABEL_TR NULL
#define SGX_MULTITAP_INFO_0_TR NULL
#define SGX_TURBO_TOGGLE_LABEL_TR NULL
#define SGX_TURBO_TOGGLE_INFO_0_TR NULL
#define OPTION_VAL_SWITCH_TR NULL
#define OPTION_VAL_DEDICATED_TR NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_TR "Alternatif Turbo Kısayol Tuşu"
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_TR NULL
#define SGX_TURBO_DELAY_LABEL_TR "Turbo Gecikmesi"
#define SGX_TURBO_DELAY_INFO_0_TR NULL
#define SGX_CDIMAGECACHE_LABEL_TR NULL
#define SGX_CDIMAGECACHE_INFO_0_TR NULL
#define SGX_CDBIOS_LABEL_TR "CD BIOS (Yeniden Başlatılmalı)"
#define SGX_CDBIOS_INFO_0_TR NULL
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR "Sistem Kartı 1"
#define OPTION_VAL_SYSTEM_CARD_2_TR "Sistem Kartı 2"
#define OPTION_VAL_SYSTEM_CARD_3_TR "Sistem Kartı 3"
#define SGX_DETECT_GEXPRESS_LABEL_TR NULL
#define SGX_DETECT_GEXPRESS_INFO_0_TR NULL
#define SGX_CDSPEED_LABEL_TR "(CD) CD Hızı"
#define SGX_CDSPEED_LABEL_CAT_TR "CD Hızı"
#define SGX_CDSPEED_INFO_0_TR NULL
#define SGX_ADPCMVOLUME_LABEL_TR NULL
#define SGX_ADPCMVOLUME_LABEL_CAT_TR NULL
#define SGX_ADPCMVOLUME_INFO_0_TR NULL
#define SGX_ADPCMVOLUME_INFO_1_TR NULL
#define SGX_CDDAVOLUME_LABEL_TR NULL
#define SGX_CDDAVOLUME_LABEL_CAT_TR NULL
#define SGX_CDPSGVOLUME_LABEL_TR NULL
#define SGX_CDPSGVOLUME_LABEL_CAT_TR NULL
#define SGX_FORCESGX_LABEL_TR NULL
#define SGX_FORCESGX_INFO_0_TR NULL
#define SGX_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır"
#define SGX_NOSPRITELIMIT_INFO_0_TR NULL
#define SGX_OCMULTIPLIER_LABEL_TR NULL
#define SGX_OCMULTIPLIER_INFO_0_TR NULL

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

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_INPUT_LABEL_UK "Ввід"
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_HACKS_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACKS_INFO_0_UK "Налаштування розгону процесора та точності емуляції, що впливають на низькорівневу продуктивність та сумісність."
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK NULL
#define SGX_PALETTE_LABEL_UK NULL
#define SGX_PALETTE_INFO_0_UK NULL
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK NULL
#define SGX_ASPECT_RATIO_LABEL_UK "Співвідношення сторін"
#define SGX_ASPECT_RATIO_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_6_5_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define SGX_HOVERSCAN_LABEL_UK NULL
#define SGX_HOVERSCAN_INFO_0_UK NULL
#define OPTION_VAL_352_UK NULL
#define SGX_INITIAL_SCANLINE_LABEL_UK NULL
#define SGX_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK NULL
#define SGX_LAST_SCANLINE_LABEL_UK NULL
#define SGX_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK NULL
#define SGX_MOUSE_SENSITIVITY_LABEL_UK NULL
#define SGX_MOUSE_SENSITIVITY_INFO_0_UK NULL
#define OPTION_VAL_0_25_UK NULL
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
#define SGX_UP_DOWN_ALLOWED_LABEL_UK NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_UK NULL
#define SGX_DISABLE_SOFTRESET_LABEL_UK NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_UK NULL
#define SGX_MULTITAP_LABEL_UK NULL
#define SGX_MULTITAP_INFO_0_UK NULL
#define SGX_TURBO_TOGGLE_LABEL_UK NULL
#define SGX_TURBO_TOGGLE_INFO_0_UK NULL
#define OPTION_VAL_SWITCH_UK NULL
#define OPTION_VAL_DEDICATED_UK NULL
#define SGX_TURBO_TOGGLE_HOTKEY_LABEL_UK NULL
#define SGX_TURBO_TOGGLE_HOTKEY_INFO_0_UK NULL
#define SGX_TURBO_DELAY_LABEL_UK NULL
#define SGX_TURBO_DELAY_INFO_0_UK NULL
#define SGX_CDIMAGECACHE_LABEL_UK NULL
#define SGX_CDIMAGECACHE_INFO_0_UK NULL
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
#define SGX_ASPECT_RATIO_LABEL_VAL NULL
#define SGX_ASPECT_RATIO_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL NULL
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
#define OPTION_VAL_0_25_VAL NULL
#define OPTION_VAL_0_50_VAL NULL
#define OPTION_VAL_0_75_VAL NULL
#define OPTION_VAL_1_00_VAL NULL
#define OPTION_VAL_1_25_VAL NULL
#define OPTION_VAL_1_50_VAL NULL
#define OPTION_VAL_1_75_VAL NULL
#define OPTION_VAL_2_00_VAL NULL
#define OPTION_VAL_2_25_VAL NULL
#define OPTION_VAL_2_50_VAL NULL
#define OPTION_VAL_2_75_VAL NULL
#define OPTION_VAL_3_00_VAL NULL
#define OPTION_VAL_3_25_VAL NULL
#define OPTION_VAL_3_50_VAL NULL
#define OPTION_VAL_3_75_VAL NULL
#define OPTION_VAL_4_00_VAL NULL
#define OPTION_VAL_4_25_VAL NULL
#define OPTION_VAL_4_50_VAL NULL
#define OPTION_VAL_4_75_VAL NULL
#define OPTION_VAL_5_00_VAL NULL
#define SGX_UP_DOWN_ALLOWED_LABEL_VAL NULL
#define SGX_UP_DOWN_ALLOWED_INFO_0_VAL NULL
#define SGX_DISABLE_SOFTRESET_LABEL_VAL NULL
#define SGX_DISABLE_SOFTRESET_INFO_0_VAL NULL
#define SGX_MULTITAP_LABEL_VAL NULL
#define SGX_MULTITAP_INFO_0_VAL NULL
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
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_INPUT_LABEL_VN "Input Driver"
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_HACKS_LABEL_VN NULL
#define CATEGORY_HACKS_INFO_0_VN NULL
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN NULL
#define SGX_PALETTE_LABEL_VN NULL
#define SGX_PALETTE_INFO_0_VN NULL
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN NULL
#define SGX_ASPECT_RATIO_LABEL_VN NULL
#define SGX_ASPECT_RATIO_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_6_5_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define SGX_HOVERSCAN_LABEL_VN NULL
#define SGX_HOVERSCAN_INFO_0_VN NULL
#define OPTION_VAL_352_VN NULL
#define SGX_INITIAL_SCANLINE_LABEL_VN NULL
#define SGX_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN NULL
#define SGX_LAST_SCANLINE_LABEL_VN NULL
#define SGX_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN NULL
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