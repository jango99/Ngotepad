#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0001
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jango99
#define PRODUCT         Ngotepad
#define DESCRIPTION     4x2 Macropad with 2 Rotary Encoders

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D0, D1}, \
    { D4, C6}, \
    { D7, E6, B6 }, \
    { B4, B5, B2 } \
}

#define ENCODERS_PAD_A { B7, F1 }
#define ENCODERS_PAD_B { D5, F0 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE