#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x125F
#define DEVICE_VER      0x0001
#define MANUFACTURER    ThunderRust
#define PRODUCT         mjolner
#define DESCRIPTION     First ThunderRust company keeboard

#define MATRIX_ROWS 5
#define MATRIX_COLS 13

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { B1, B3, B2, B6, B5 }
#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6, B4, F4, F5, F6, F7 }
#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE