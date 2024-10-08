#include "centromere_plus.h"

enum layer_names
{
    _QWERTY,
    _LOWER,
    _RAISE,
};

enum custom_keycodes
{
    LOWER = SAFE_RANGE,
    RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT( /*QWERTY*/
        /* ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ */
            KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,     KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,     KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL, \
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_SCLN,     KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_GRV,  KC_BSLS,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘   └────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
        /* └────────┴────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┴────────┘ */
                              KC_LALT, LOWER,   KC_HOME, KC_SPC,                        KC_CAPS,  KC_END, LOWER,   KC_LGUI\
        /*                   └────────┴────────┴────────┴────────┘                     └────────┴────────┴────────┴────────┘                   */
            ),

    [_LOWER] = LAYOUT(/*LOWER*/
        /* ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ */
            _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,      KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            _______, XXXXXXX, KC_UP,   XXXXXXX, RESET,   KC_MNXT, KC_VOLU,     KC_BRIU, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX, KC_WH_U, _______,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            _______, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_MPRV, KC_VOLD,     KC_BRID, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_L, KC_WH_D, KC_WH_R,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘   └────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_MUTE, KC_MPLY,                       KC_BTN3, KC_BTN4, KC_BTN5, KC_ACL0, KC_ACL1, _______,\
        /* └────────┴────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┴────────┘ */
                              _______, _______, KC_PGUP, _______,                       _______, KC_PGDN, _______, _______\
        /*                   └────────┴────────┴────────┴────────┘                     └────────┴────────┴────────┴────────┘                   */
            ),

    [_RAISE] = LAYOUT(/*RAISE*/
        /* ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ */
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
        /* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘   └────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
        /* └────────┴────────┼────────┼────────┼────────┼────────┤                     ├────────┼────────┼────────┼────────┼────────┴────────┘ */
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX\
        /*                   └────────┴────────┴────────┴────────┘                     └────────┴────────┴────────┴────────┘                   */
            ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
            } else {
                layer_off(_LOWER);
            }
            return false;
            break;

        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
            }
            return false;
            break;
    }
    return true;
}

void matrix_scan_user(void) {
    return;
};
