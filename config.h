#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Rottay
#define PRODUCT         R22C
#define DESCRIPTION     22 Key Rottay Numpad

/* Define pins and resolution for rotary encoder */
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }
#define ENCODER_RESOLUTION 2

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { D6, B6, B5, E6, C6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B7
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 1
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
