#pragma once

#include "config_common.h"


/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { GP4 , GP5}
#define MATRIX_ROW_PINS { GP7 }
#define DEBUG_MATRIX_SCAN_RATE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN A1

#define DEBOUNCE 5


#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500


/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 1
