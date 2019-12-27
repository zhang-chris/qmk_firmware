#pragma once

// #include "conf	ig_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0001
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    zhang-chris
#define PRODUCT         Dactyl-Manuform 5x5 keyboard
#define DESCRIPTION     An ergonomic split keyboard

/* Key matrix size. Rows are doubled up. */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 } //uncomment this line and comment line above if you need to reverse left-to-right key order

/* COL2ROW or ROW2COL */
// COL2ROW means the black mark on your diode is facing to the rows, and between the switch and the rows.
#define DIODE_DIRECTION COL2ROW

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define USE_I2C