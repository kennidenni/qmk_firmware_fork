// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef LED_CAPS_LOCK_PIN
#    define LED_CAPS_LOCK_PIN B7
#endif // LED_CAPS_LOCK_PIN

#ifndef LED_PIN_ON_STATE
#    define LED_PIN_ON_STATE 0
#endif // LED_PIN_ON_STATE

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGBLED_NUM
#    define RGBLED_NUM 35
#endif // RGBLED_NUM

#ifndef RGBLIGHT_HUE_STEP
#    define RGBLIGHT_HUE_STEP 10
#endif // RGBLIGHT_HUE_STEP

#ifndef RGBLIGHT_SAT_STEP
#    define RGBLIGHT_SAT_STEP 10
#endif // RGBLIGHT_SAT_STEP

#ifndef RGBLIGHT_SLEEP
#    define RGBLIGHT_SLEEP
#endif // RGBLIGHT_SLEEP

#ifndef RGBLIGHT_VAL_STEP
#    define RGBLIGHT_VAL_STEP 10
#endif // RGBLIGHT_VAL_STEP

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN D2
#endif // WS2812_DI_PIN

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "Assfire"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "Hope75X"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x2003
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x6969
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 15
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 6
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { D4, D6, D7, F7, F6, F5, F4, F1, F0, B0, B1, B2, B3, E6, D1 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { D0, C7, B4, B5, B6, C6 }
#endif // MATRIX_ROW_PINS

#ifndef RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#endif // RGBLIGHT_EFFECT_RAINBOW_MOOD

#ifndef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif // RGBLIGHT_EFFECT_RAINBOW_SWIRL

#ifndef RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_KNIGHT
#endif // RGBLIGHT_EFFECT_KNIGHT

#ifndef RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#endif // RGBLIGHT_EFFECT_STATIC_GRADIENT

#ifndef RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_EFFECT_TWINKLE
#endif // RGBLIGHT_EFFECT_TWINKLE
