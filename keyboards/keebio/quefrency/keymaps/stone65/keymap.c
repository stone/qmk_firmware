#include QMK_KEYBOARD_H
#include "keymap_nordic.h"
#include "keymap_swedish.h"

#define _____ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65(
    KC_GESC,  KC_1,     KC_2,   KC_3,     KC_4,    KC_5,    KC_6,    KC_7,     KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_DEL,   KC_BSPC,  KC_HOME,  \
    KC_TAB,   KC_Q,     KC_W,   KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,  KC_END,   \
    KC_CAPS,  KC_A,     KC_S,   KC_D,     KC_F,    KC_G,    KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,    KC_PGUP,  \
    KC_LSFT,  KC_Z,     KC_X,   KC_C,     KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  KC_UP,     KC_PGDN,  \
    KC_LCTL,  KC_LGUI,  MO(1),  KC_LALT,  KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT,  KC_RGUI,  MO(1),   KC_LEFT,  KC_DOWN,  KC_RGHT \
    ),
	[1] = LAYOUT_65(
    KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,  KC_F5,  KC_F6,    KC_F7,    KC_F8,  KC_F9,    KC_F10,   KC_F11,   KC_F12,    KC_DEL,   KC_BSPC,  _____,  \
    RGB_TOG,  RGB_VAI,  RGB_SPI,  _____,    _____,  _____,  _____,    _____,    _____,  _____,    _____,    _____,    _____,     _____,    _____,    \
    RGB_MOD,  RGB_VAD,  RGB_SPD,  _____,    _____,  _____,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  _____,    _____,    _____,     _____,    \
    _____,    _____,    _____,    _____,    _____,  _____,  _____,    _____,    _____,  _____,    _____,    KC_BTN1,  KC_MS_U,   KC_BTN2,  \
    _____,    _____,    _____,    KC_TRNS,  _____,  _____,  _____,    _____,    _____,  KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R \
    )
};
