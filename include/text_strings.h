#define _(x) x

#ifndef TEXT_STRINGS_H
#define TEXT_STRINGS_H


#include "text_menu_strings.h"

#if defined(PUPPYCAM)
#define NC_CAMX_EN 				_("Camera X Sensitivity")
#define NC_CAMY_EN 				_("Camera Y Sensitivity")
#define NC_INVERTX_EN			_("Invert X Axis")
#define NC_INVERTY_EN			_("Invert Y Axis")
#define NC_CAMC_EN 				_("Camera Centre Speed")
#define NC_ANALOGUE_EN			_("Analogue Camera")
#define NC_SCHEME_EN			_("Control Scheme")
#define OPTION_ENABLED_EN 		_("Enabled")
#define OPTION_DISABLED_EN 		_("Disabled")
#define OPTION_SCHEME1_EN 		_("Double Tap")
#define OPTION_SCHEME2_EN 		_("Single Press")
#define OPTION_SCHEME3_EN 		_("Classic")
#define OPTION_LANGUAGE_EN 		_("Language")
#define NC_WIDE_EN	 			_("Widescreen")
#define NC_HIGHLIGHT_L 			_(">")
#define NC_HIGHLIGHT_R 			_("<")
#define NC_BUTTON_EN 			_("Ⓡ: Options")
#define NC_BUTTON2_EN 			_("Ⓡ: Return")
#define NC_OPTION_EN 			_("OPTIONS")

#if MULTILANG
#define NC_CAMX_FR 				_("Sensibilite sur l'axe X")
#define NC_CAMY_FR 				_("Sensibilite sur l'axe Y")
#define NC_INVERTX_FR			_("Invertir Axe X")
#define NC_INVERTY_FR			_("Invertir Axe Y")
#define NC_CAMC_FR 				_("Vitesse de Centrage")
#define NC_ANALOGUE_FR			_("Camera Analogue")
#define NC_SCHEME_FR			_("Control Scheme")
#define OPTION_ENABLED_FR	    _("Active")
#define OPTION_DISABLED_FR	    _("Desactive")
#define OPTION_SCHEME1_FR 		_("Double Tap")
#define OPTION_SCHEME2_FR 		_("Single Press")
#define OPTION_SCHEME3_FR 		_("Classic")
#define OPTION_LANGUAGE_FR 		_("Language")
#define NC_WIDE_FR	 			_("Widescreen")
#define NC_BUTTON_FR 			_("Ⓡ: Options")
#define NC_BUTTON2_FR 			_("Ⓡ: Retournez")
#define NC_OPTION_FR 			_("OPTIONS")

#define NC_CAMX_DE 				_("Camera X Sensitivity")
#define NC_CAMY_DE 				_("Camera Y Sensitivity")
#define NC_INVERTY_DE			_("Invert Y Axis")
#define NC_INVERTX_DE			_("Invert X Axis")
#define NC_CAMC_DE 				_("Camera Centre Speed")
#define NC_ANALOGUE_DE			_("Analogue Camera")
#define NC_SCHEME_DE			_("Control Scheme")
#define OPTION_ENABLED_DE 		_("Enabled")
#define OPTION_DISABLED_DE	    _("Disabled")
#define OPTION_SCHEME1_DE 		_("Double Tap")
#define OPTION_SCHEME2_DE 		_("Single Press")
#define OPTION_SCHEME3_DE 		_("Classic")
#define OPTION_LANGUAGE_DE 		_("Language")
#define NC_WIDE_DE	 			_("Widescreen")
#define NC_BUTTON_DE 			_("Ⓡ: Options")
#define NC_BUTTON2_DE 			_("Ⓡ: Return")
#define NC_OPTION_DE 			_("OPTIONS")
#endif
#endif

/**
 * Global Symbols
 */

#define TEXT_ZERO "0"
#define TEXT_COIN "$"
#define TEXT_COIN_X "$×"
#define TEXT_STAR_X "★×"
#define TEXT_VARIABLE_X "×"


/**
 * Global Text
 */
// File Select
#define TEXT_4DASHES "----" // Used in Score File Menu

#if defined(VERSION_JP) || defined(VERSION_SH)

/**
 * File Select Text
 */
// Main Screens
// JPHUD menu strings are defined in "text_menu_strings.h.in"
#define TEXT_MARIO TEXT_JPHUD_MARIO // View Score Menu

#define TEXT_FILE_MARIO_A _("マリオＡ")
#define TEXT_FILE_MARIO_B _("マリオＢ")
#define TEXT_FILE_MARIO_C _("マリオＣ")
#define TEXT_FILE_MARIO_D _("マリオＤ")

// Menu Options
#define TEXT_SCORE _("スコア")
#define TEXT_COPY _("コピー")
#define TEXT_ERASE _("けす")

// Sound Options
#define TEXT_STEREO _("ステレオ")
#define TEXT_MONO _("モノラル")
#define TEXT_HEADSET _("ヘッドホン")

// Misc Menu Text
#define TEXT_SAVED_DATA_EXISTS _("ファイルにデータがはいってます")
#define TEXT_NO_SAVED_DATA_EXISTS _("ファイルにデータがありません")

// Inside a Menu
#define TEXT_RETURN _("もどる")
#define TEXT_CHECK_SCORE _("スコアをみる")
#define TEXT_COPY_FILE_BUTTON _("ファイルコピー")
#define TEXT_ERASE_FILE_BUTTON _("ファイルけす")

// Copy Menu
#define TEXT_COPY_IT_TO_WHERE _("どこにコピーしますか？")
#define TEXT_COPYING_COMPLETED _("コピーおわりました")
#define TEXT_NO_FILE_TO_COPY_FROM _("からのファイルがありません")

// Erase Menu
#define TEXT_SURE _("ほんと？")
#define TEXT_YES _("はい")
#define TEXT_NO _("いいえ")
#define TEXT_FILE_MARIO_A_JUST_ERASED _("マリオＡをけしました")

/**
 * Menus Text (Pause, Course Completed)
 */

// Camera Options
#define TEXT_LAKITU_MARIO _("ジュゲム↔マリオ")
#define TEXT_LAKITU_STOP _("ジュゲム↔ストップ")
#define TEXT_NORMAL_UPCLOSE _("（おすすめ）（リアル）")
#define TEXT_NORMAL_FIXED _("（おすすめ）（とまる）")

// Save Options
#define TEXT_SAVE_AND_CONTINUE _("セーブしてつづける？")
#define TEXT_SAVE_AND_QUIT _("セーブしておわる？")
#define TEXT_CONTINUE_WITHOUT_SAVING _("セーブしないでつづける？")

/**
 * Ending Peach cutscene text.
 */
#define TEXT_FILE_MARIO_EXCLAMATION _("マリオ！！")
#define TEXT_POWER_STARS_RESTORED _("おしろにスターが　もどったのね")
#define TEXT_THANKS_TO_YOU _("みんな　あなたのおかげだわ！")
#define TEXT_THANK_YOU_MARIO _("ありがとう　マリオ")
#define TEXT_SOMETHING_SPECIAL _("なにか　おれいをしなくちゃ・・")
#define TEXT_LISTEN_EVERYBODY _("さあ　みんな")
#define TEXT_LETS_HAVE_CAKE _("おいしいケーキを　やきましょう")
#define TEXT_FOR_MARIO _("マリオの　ために・・・")
#define TEXT_FILE_MARIO_QUESTION _("マリオ？")

#endif

#if defined(VERSION_US) || defined(VERSION_EU)

/**
 * File Select Text
 */
// Main Screens
#define TEXT_MARIO "MARIO" // View Score Menu
#define TEXT_FILE_MARIO_A "MARIO A"
#define TEXT_FILE_MARIO_B "MARIO B"
#define TEXT_FILE_MARIO_C "MARIO C"
#define TEXT_FILE_MARIO_D "MARIO D"

// Menu Options
#define TEXT_SCORE "SCORE"
#define TEXT_COPY "COPY"
#define TEXT_ERASE "ERASE"

// Sound Options
#define TEXT_STEREO "STEREO"
#define TEXT_MONO "MONO"
#define TEXT_HEADSET "HEADSET"

// Misc Menu Text
#define TEXT_SAVED_DATA_EXISTS "SAVED DATA EXISTS"
#define TEXT_NO_SAVED_DATA_EXISTS "NO SAVED DATA EXISTS"

// Inside a Menu
#define TEXT_RETURN "RETURN"
#define TEXT_CHECK_SCORE "CHECK SCORE"
#define TEXT_COPY_FILE_BUTTON "COPY FILE"
#define TEXT_ERASE_FILE_BUTTON "ERASE FILE"

// Copy Menu
#define TEXT_COPY_IT_TO_WHERE "COPY IT TO WHERE?"
#define TEXT_COPYING_COMPLETED "COPYING COMPLETED"
#define TEXT_NO_FILE_TO_COPY_FROM "NO EMPTY FILE"

// Erase Menu
#define TEXT_SURE "SURE?"
#define TEXT_YES "YES"
#define TEXT_NO "NO"
#define TEXT_FILE_MARIO_A_JUST_ERASED "MARIO A JUST ERASED"

/**
 * Menus Text (Pause, Course Completed)
 */

// Save Options
#define TEXT_SAVE_AND_CONTINUE "SAVE & CONTINUE"
#define TEXT_SAVE_AND_QUIT "SAVE & QUIT"
#define TEXT_CONTINUE_WITHOUT_SAVING "CONTINUE, DON'T SAVE"

/**
 * Ending Peach cutscene text.
 */
#define TEXT_FILE_MARIO_EXCLAMATION "Mario!"
#define TEXT_POWER_STARS_RESTORED "The power of the Stars is restored to the castle..."
#define TEXT_THANKS_TO_YOU "...and it's all thanks to you!"
#define TEXT_THANK_YOU_MARIO "Thank you, Mario!"
#define TEXT_SOMETHING_SPECIAL "We have to do something special for you..."
#define TEXT_LISTEN_EVERYBODY "Listen, everybody,"
#define TEXT_LETS_HAVE_CAKE "let's bake a delicious cake..."
#define TEXT_FOR_MARIO "...for Mario..."
#define TEXT_FILE_MARIO_QUESTION "Mario!"

#endif


#define TEXT_ENGLISH "ENGLISH"
#define TEXT_FRENCH "FRANÇAIS"
#define TEXT_GERMAN "DEUTSCH"

#if MULTILANG

/**
 * File Select Text
 */
#define TEXT_RETURN_FR _("RETOUR")
#define TEXT_RETURN_DE _("ZURÜCK")

#define TEXT_CHECK_SCORE_FR _("SCORE")
#define TEXT_CHECK_SCORE_DE _("LEISTUNG")


#define TEXT_SCORE_FR _("SCORE")
#define TEXT_SCORE_DE _("LEISTUNG")

#define TEXT_COPY_FR _("COPIER")
#define TEXT_COPY_DE _("KOPIEREN")

#define TEXT_ERASE_FR _("EFFACER")
#define TEXT_ERASE_DE _("LÖSCHEN")

#define TEXT_OPTION _("OPTION")  // new in EU
#define TEXT_OPTION_FR _("OPTION")
#define TEXT_OPTION_DE _("OPTIONEN")



#define TEXT_NO_SAVED_DATA_EXISTS_FR _("AUCUNE SAUVEGARDE DISPONIBLE")
#define TEXT_NO_SAVED_DATA_EXISTS_DE _("KEIN SPIEL VORHANDEN")

#define TEXT_COPY_FILE_BUTTON_FR _("COPIER  FICHIER")
#define TEXT_COPY_FILE_BUTTON_DE _("SPIEL KOPIEREN")

#define TEXT_COPY_IT_TO_WHERE_FR _("COPIER SUR?")
#define TEXT_COPY_IT_TO_WHERE_DE _("WOHIN KOPIEREN?")

#define TEXT_COPYING_COMPLETED_FR _("COPIE ACHEVEÉ")
#define TEXT_COPYING_COMPLETED_DE _("SPIEL KOPIERT")

#define TEXT_SAVED_DATA_EXISTS_FR _("SAVEGARDE EXISTANTE")
#define TEXT_SAVED_DATA_EXISTS_DE _("BEREITS BELEGT")

#define TEXT_NO_FILE_TO_COPY_FROM_FR _("AUCUN FICHIER VIDE")
#define TEXT_NO_FILE_TO_COPY_FROM_DE _("KEIN PLATZ VORHANDEN")

#define TEXT_YES_FR _("OUI")
#define TEXT_YES_DE _("JA")

#define TEXT_NO_FR _("NON")
#define TEXT_NO_DE _("NEIN")

#define TEXT_ERASE_FILE_BUTTON_FR _("EFFACER  FICHIER")
#define TEXT_ERASE_FILE_BUTTON_DE _("SPIEL LxSCHEN")

#define TEXT_SURE_FR _("OK?")
#define TEXT_SURE_DE _("SICHER?")

#define TEXT_FILE_MARIO_A_JUST_ERASED_FR _("MARIO A EFFACÉ")
#define TEXT_FILE_MARIO_A_JUST_ERASED_DE _("MARIO A GELÖSCHT")

#define TEXT_SOUND_SELECT_FR _("SON")
#define TEXT_SOUND_SELECT_DE _("SOUND")

#define TEXT_STEREO_FR _("STÉRÉO")
#define TEXT_MONO_FR _("MONO")
#define TEXT_HEADSET_FR _("CASQUE")

#define TEXT_STEREO_DE _("STEREO")
#define TEXT_MONO_DE _("MONO")
#define TEXT_HEADSET_DE _("PHONES")


/**
 * Menus Text (Pause, Course Completed)
 */
// Main Courses
// English, "R" text is different

// Save Options
// French
#define TEXT_SAVE_AND_CONTINUE_FR       _("SAUVEGARDER & CONTINUER")
#define TEXT_SAVE_AND_QUIT_FR           _("SAUVEGARDER & QUITTER")
#define TEXT_CONTINUE_WITHOUT_SAVING_FR _("CONTINUER SANS SAUVEGARDER")
// German
#define TEXT_SAVE_AND_CONTINUE_DE       _("SPEICHERN & WEITER")
#define TEXT_SAVE_AND_QUIT_DE           _("SPEICHERN & ENDE")
#define TEXT_CONTINUE_WITHOUT_SAVING_DE _("WEITER OHNE ZU SPEICHERN")

/**
 * Ending Peach cutscene text.
 */
// French
#define TEXT_POWER_STARS_RESTORED_FR _("Grâce aux étoiles, le château a retrouvé ses pouvoirs...")
#define TEXT_THANKS_TO_YOU_FR        _("...et ceci grâce à toi!")
#define TEXT_THANK_YOU_MARIO_FR      _("Merci, Mario!")
#define TEXT_SOMETHING_SPECIAL_FR    _("Tu mérites une récompense...")
#define TEXT_COME_ON_EVERYBODY_FR    _("Venez les amis...")
#define TEXT_LETS_HAVE_CAKE_FR       _("Allons préparer un délicieux gâteau...")
#define TEXT_FOR_MARIO_FR            _("...pour Mario...")
// German
#define TEXT_POWER_STARS_RESTORED_DE _("Die Macht der Sterne ruht wieder sicher im Schloss...")
#define TEXT_THANKS_TO_YOU_DE        _("...und alles dank Deiner Hilfe!")
#define TEXT_THANK_YOU_MARIO_DE      _("Vielen Dank, Mario!")
#define TEXT_SOMETHING_SPECIAL_DE    _("Wir haben eine Überraschung für Dich...")
#define TEXT_COME_ON_EVERYBODY_DE    _("Hört alle her...")
#define TEXT_LETS_HAVE_CAKE_DE       _("Laßt uns einen leckeren Kuchen backen...")
#define TEXT_FOR_MARIO_DE            _("...für Mario...")

/**
 * Course Table names for Score Menu Save view
 */
#define TEXT_MENU_BOB _(" 1 BOB-OMB BATTLEFIELD")
#define TEXT_MENU_WF _(" 2 WHOMP'S FORTRESS")
#define TEXT_MENU_JRB _(" 3 JOLLY ROGER BAY")
#define TEXT_MENU_CCM _(" 4 COOL, COOL MOUNTAIN")
#define TEXT_MENU_BBH _(" 5 BIG BOO'S HAUNT")
#define TEXT_MENU_HMC _(" 6 HAZY MAZE CAVE")
#define TEXT_MENU_LLL _(" 7 LETHAL LAVA LAND")
#define TEXT_MENU_SSL _(" 8 SHIFTING SAND LAND")
#define TEXT_MENU_DDD _(" 9 DIRE, DIRE DOCKS")
#define TEXT_MENU_SL _("10 SNOWMAN'S LAND")
#define TEXT_MENU_WDW _("11 WET-DRY WORLD")
#define TEXT_MENU_TTM _("12 TALL, TALL MOUNTAIN")
#define TEXT_MENU_THI _("13 TINY-HUGE ISLAND")
#define TEXT_MENU_TTC _("14 TICK TOCK CLOCK")
#define TEXT_MENU_RR _("15 RAINBOW RIDE")
#define TEXT_MENU_BITDW _("   BOWSER IN THE DARK WORLD")
#define TEXT_MENU_BITFS _("   BOWSER IN THE FIRE SEA")
#define TEXT_MENU_BITS _("   BOWSER IN THE SKY")
#define TEXT_MENU_PSS _("   THE PRINCESS'S SECRET SLIDE")
#define TEXT_MENU_COTMC _("   CAVERN OF THE METAL CAP")
#define TEXT_MENU_TOTWC _("   TOWER OF THE WING CAP")
#define TEXT_MENU_VCUTM _("   VANISH CAP UNDER THE MOAT")
#define TEXT_MENU_WMOTR _("   WING MARIO OVER THE RAINBOW")
#define TEXT_MENU_SA _("   THE SECRET AQUARIUM")
#define TEXT_MENU_NONE _("")
#define TEXT_MENU_STARS _("   CASTLE SECRET STARS")

#define TEXT_MENU_BOB_FR _(" 1 BATAILLE DE BOB-OMB")
#define TEXT_MENU_WF_FR _(" 2 FORTERESSE DE WHOMP")
#define TEXT_MENU_JRB_FR _(" 3 BAIE DES PIRATES")
#define TEXT_MENU_CCM_FR _(" 4 MONTAGNE GLA-GLA")
#define TEXT_MENU_BBH_FR _(" 5 MANOIR DE BIG BOO")
#define TEXT_MENU_HMC_FR _(" 6 CAVERNE BRUMEUSE")
#define TEXT_MENU_LLL_FR _(" 7 LAVES FATALES")
#define TEXT_MENU_SSL_FR _(" 8 SABLES TROP MOUVANTS")
#define TEXT_MENU_DDD_FR _(" 9 AFFREUX BASSIN")
#define TEXT_MENU_SL_FR _("10 CHEZ LE ROI DES NEIGES")
#define TEXT_MENU_WDW_FR _("11 MONDE TREMPE-SECHE")
#define TEXT_MENU_TTM_FR _("12 TROP HAUTE MONTAGNE")
#define TEXT_MENU_THI_FR _("13 ILE GRANDS-PETITS")
#define TEXT_MENU_TTC_FR _("14 HORLOGE TIC-TAC")
#define TEXT_MENU_RR_FR _("15 COURSE ARC-EN-CIEL")
#define TEXT_MENU_BITDW_FR _("   BOWSER DES TENEBRES")
#define TEXT_MENU_BITFS_FR _("   BOWSER DES LAVES")
#define TEXT_MENU_BITS_FR _("   BOWSER DES CIEUX")
#define TEXT_MENU_PSS_FR _("   GLISSADE DE LA PRINCESSE")
#define TEXT_MENU_COTMC_FR _("   MINE DES CASQUETTES-METAL")
#define TEXT_MENU_TOTWC_FR _("   INTERRUPTEUR DE LA TOUR AILEE")
#define TEXT_MENU_VCUTM_FR _("   INVISIBLE SOUS LES DOUVES")
#define TEXT_MENU_WMOTR_FR _("   AU-DELA DE L'ARC-EN-CIEL")
#define TEXT_MENU_SA_FR _("   AQUARIUM SECRET")
#define TEXT_MENU_NONE_FR _("")
#define TEXT_MENU_STARS_FR _("   ETOILES SECRETES")

#define TEXT_MENU_BOB_DE _(" 1 BOB-OMBS BOMBENBERG")
#define TEXT_MENU_WF_DE _(" 2 WUMMPS WUCHTWALL")
#define TEXT_MENU_JRB_DE _(" 3 PIRATENBUCHT PANIK")
#define TEXT_MENU_CCM_DE _(" 4 BIBBERBERG BOB")
#define TEXT_MENU_BBH_DE _(" 5 BIG BOOS BURG")
#define TEXT_MENU_HMC_DE _(" 6 GRÜNE GIFTGROTTE")
#define TEXT_MENU_LLL_DE _(" 7 LAVA LAGUNE")
#define TEXT_MENU_SSL_DE _(" 8 WOBIWABA WÜSTE")
#define TEXT_MENU_DDD_DE _(" 9 WILDE WASSERWERFT")
#define TEXT_MENU_SL_DE _("10 FROSTBEULEN FRUST")
#define TEXT_MENU_WDW_DE _("11 ATLANTIS AQUARIA")
#define TEXT_MENU_TTM_DE _("12 FLIEGENPILZ FIASKO")
#define TEXT_MENU_THI_DE _("13 GULLIVER GUMBA")
#define TEXT_MENU_TTC_DE _("14 TICK TACK TRAUMA")
#define TEXT_MENU_RR_DE _("15 REGENBOGEN RASEREI")
#define TEXT_MENU_BITDW_DE _("   BOWSERS SCHATTENWELT")
#define TEXT_MENU_BITFS_DE _("   BOWSERS LAVASEE")
#define TEXT_MENU_BITS_DE _("   BOWSERS LUFTSCHLOSS")
#define TEXT_MENU_PSS_DE _("   TOADSTOOLS RUTSCHBAHN")
#define TEXT_MENU_COTMC_DE _("   GRÜNER SCHALTERPALAST")
#define TEXT_MENU_TOTWC_DE _("   ROTER SCHALTERPALAST")
#define TEXT_MENU_VCUTM_DE _("   BLAUER SCHALTERPALAST")
#define TEXT_MENU_WMOTR_DE _("   REGENBOGEN FEUERWERK")
#define TEXT_MENU_SA_DE _("   VERSTECKTES AQUARIUM")
#define TEXT_MENU_NONE_DE _("")
#define TEXT_MENU_STARS_DE _("   GEHEIME STERNE")
#endif // VERSION_EU

#undef _

#endif // TEXT_STRINGS_H