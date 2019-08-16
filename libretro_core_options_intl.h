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
 * VERSION: 1.3
 ********************************
 *
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

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "sgx_cdimagecache",
      "CD Görüntü Önbelleği (Yeniden Başlatma Gerektirir)",
      "Başlangıçta tam görüntüyü belleğe yükler. Artan başlangıç zamanı pahasına yükleme sürelerini potansiyel olarak düşürebilir.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_cdbios",
      "CD BIOS (Yeniden Başlatma Gerektirir)",
      "Hangi PC Engine CD BIOS'unun kullanılacağını seçin.",
      {
         { "System Card 3", NULL },
         { "Games Express", NULL },
         { "System Card 1", NULL },
         { "System Card 2", NULL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "sgx_forcesgx",
      "SuperGrafx Öykünmesini Zorla (Yeniden Başlatma Gerektirir)",
      "Homebrew oyunlarını çalıştırmak veya SuperGrafx modunda çalışmayan oyunları izole etmek için faydalıdır. (Space Harrier gibi). Konum kayıtları, her modla uyumlu değildir. Gerekmedikçe, bu seçeneği varsayılan ayarlarda (Kapalı) bırakmak daha iyidir. Bilinen Supergrafx oyunları (Dai-Makaimura, Aldyns gibi) bu seçeneğe bakılmaksızın otomatik olarak SuperGrafx'e geçecektir.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_nospritelimit",
      "Sprite Sınırı Yok",
      "Tarama başına 16 sprites donanım sınırını kaldırın.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_ocmultiplier",
      "CPU Hızaşırtma Çarpanı (Yeniden Başlatma Gerektirir)",
      "Öykünülmüş CPU'ya Hızaşırtma uygulayın",
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
   {
      "sgx_hoverscan",
      "Yatay Aşırı Tarama (Yalnızca 352 Genişlik Modu)",
      "Yatay aşırı taramayı değiştirin.",
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
         { "352", NULL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "sgx_initial_scanline",
      "İlk tarama çizgisi",
      "İlk tarama çizgisi.",
      {
         { "0", NULL },
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
      "Son tarama çizgisi",
      "Son ekran tarama çizgisini ayarlayın.",
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
         { "242", NULL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "sgx_cddavolume",
      "(CD) CDDA Ses %",
      "CDDA Birimini Değiştir %.",
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
      "sgx_adpcmvolume",
      "(CD) ADPCM Ses %",
      "ADPCM Birimini Değiştir %.",
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
      "(CD) PSG Ses %",
      "PSG Birimini Değiştir %.",
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
      "sgx_cdspeed",
      "(CD) CD Hızı",
      "Öykünülmüş CD sürücüsünün hızını ayarlayın.",
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
      "sgx_turbo_delay",
      "Turbo Gecikmesi",
      "Turbo gecikmeyi ayarlayın.",
      {
         { "2", NULL },
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
      "sgx_turbo_toggle",
      "Turbo AÇMA/KAPAMA Geçişİ",
      "Turbo AÇMA/KAPAMA girişlerini etkinleştirir.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_turbo_toggle_hotkey",
      "Alternatif Turbo Kısayolu",
      "Alternatif Turbo AÇMA/KAPAMA girişlerini etkinleştirir. Bununla, 6 düğmeli gamepad moduna geçerken Button III ve IV tuşlarını yeniden kapamayı önleyebilirsiniz.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_disable_softreset",
      "Yazılım Sıfırlamasını Devre Dışı Bırak (RUN + SELECT)",
      "PCE gamepad'de aynı anda RUN ve SELECT düğmesine basmak, konsolu SOFT RESET yapacaktır. Bu varsayılan bir donanım davranışıdır. Yazılım sıfırlama işlevinin kapalı olmasını istiyorsanız bunu etkin olarak ayarlayın.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_up_down_allowed",
      "Karşı Yönlere İzin Ver",
      "Bunu etkinleştirmek aynı anda hem sola hem de sağa (veya bazı oyunlarda yukarı ve aşağı) yönlere basma / hızlı değiştirme / tutma olanağı sağlar. Bu, bazı oyunlarda harekete dayalı hataların oluşmasına neden olabilir. Bu çekirdek seçeneğinin devre dışı bırakılması en iyisidir.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "sgx_mouse_sensitivity",
      "Fare Hassasiyeti",
      "PCE Mouse cihaz tipinin hassasiyetini yapılandırın.",
      {
         { "0.25", NULL },
         { "0.50", NULL },
         { "0.75", NULL },
         { "1.00", NULL },
         { "1.25", NULL },
         { "1.50", NULL },
         { "1.75", NULL },
         { "2.00", NULL },
         { "2.25", NULL },
         { "2.50", NULL },
         { "2.75", NULL },
         { "3.00", NULL },
         { "3.25", NULL },
         { "3.50", NULL },
         { "3.75", NULL },
         { "4.00", NULL },
         { "4.25", NULL },
         { "4.50", NULL },
         { "4.75", NULL },
         { "5.00", NULL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "sgx_aspect_ratio",
      "En Boy Oranı",
      "Otomatik (PAR) en boy oranı veya 6:5 (varsayılan olarak kullanılır) en boy oranı veya 4:3 TV en boy oranı seçin. Sürekli olarak 256 ve 352 modları arasında geçiş yapan ve otomatik görünüm kullanan oyunlar kullanılırken, bu genişlik 256 genişlik modunun (veya bunun gibi bir şey olduğu için) yeniden boyutlandırma ve ekstra siyah çizgileri en aza indirecek şekilde Yatay genişlik ayarını 342 olarak ayarlamak en iyisidir. Bu modlar arasında geçiş yapan oyunlardan biri olan Asuka 100% ile test edin)",
      {
         { "auto", NULL },
         { "6:5", NULL },
         { "4:3", NULL },
         { NULL, NULL },
      },
      "auto"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif