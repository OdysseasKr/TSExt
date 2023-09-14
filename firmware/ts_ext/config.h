// Copyright 2022 OdysseasKr (@OdysseasKr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define BACKLIGHT_PIN B5
#define SOFT_SERIAL_PIN D3
#define EE_HANDS
#define MATRIX_ROWS 12
#define MATRIX_COLS 9
// The following line is only for my own build due to quirks in my pinout
// #define MATRIX_ROW_PINS { D2, B3, D0, D4, C6, D7 }
#define MATRIX_ROW_PINS { D2, D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { E6, B4, B5, F5, F6, F7, B1 }
#define MATRIX_ROW_PINS_RIGHT { D2, D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS_RIGHT { E6, B4, B5, F5, F6, F7, B1, B3, B2 }
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B6 }
