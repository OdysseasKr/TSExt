#include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        -----------------------------------------------------------------------------------------------------
        | Esc | F1 | F2 | F3 | F4 | F5 | F6 |         | F7 | F8 | F9 | F10 | F11 | F12 | Home | End | Delete |
        ------------------------------------------------------------------------------------------------------
        | ~ | ! | @ | # | $ | % | ^ |                            | & | * | ( | ) | _ | + | Backspace | PrtSc |
        ------------------------------------------------------------------------------------------------------
        | Tab | Q | W | E | R | T |                                 | Y | U | I | O | P | { | } | | | Insert |
        ------------------------------------------------------------------------------------------------------
        | Caps Lock | A | S | D | F | G |                             | H | J | K | L | : | " | Enter | PgUp |
        ------------------------------------------------------------------------------------------------------
        | Shift | Z | X | C | V | B |                                 | N | M | < | > | ? | Shift | ↑ | PgDn |
        -------------------------------------------------------------------------------------------------------
        | Ctrl | Fn | Win | Alt | Space |                                   | Space | Alt | Win | ← | ↓ | → |
        ----------------------------------------------------------
    */
    [0] = LAYOUT_fullsize_ansi(
        KC_ESC,    KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
        KC_GRAVE,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,    KC_T,
        KC_CAPS_LOCK, KC_A,   KC_S,   KC_D,   KC_F,    KC_G,
        KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,    KC_B,
        KC_LCTL, MO(1),   KC_LEFT_GUI,   KC_LALT,   KC_SPC,

        KC_F7,   KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_HOME, KC_END, KC_DEL,
        KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, _______, KC_PSCR,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BACKSLASH, KC_INSERT ,
        KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, _______, KC_ENTER, KC_PGUP,
        KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT, _______, KC_UP, KC_PGDN,
        KC_SPACE, _______, KC_RALT, _______, KC_APP, KC_LEFT, _______, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT_fullsize_ansi(
        KC_AUDIO_MUTE,    KC_KB_VOLUME_DOWN,   KC_KB_VOLUME_UP,  KC_MEDIA_PLAY_PAUSE, _______ ,  _______,  _______,
        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,KC_UP,_______,_______,_______,
        _______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,
        _______,_______,_______,_______,_______,KC_NUM,
        _______,KC_TRNS,_______,KC_BSPC,KC_ENTER,

        _______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,
        KC_KP_7,KC_KP_8,KC_KP_9,_______,_______,_______,_______,_______,_______,
        KC_KP_4,KC_KP_5,KC_KP_6,_______,_______,_______,_______,_______,_______,
        KC_KP_1,KC_KP_2,KC_KP_3,_______,_______,_______,_______,KC_PGUP,_______,
        KC_KP_0,_______,KC_RCTL,_______,_______,KC_HOME,_______,KC_PGDN,KC_END
    )
};
