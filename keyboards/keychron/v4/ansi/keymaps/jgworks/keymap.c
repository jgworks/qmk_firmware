/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [MAC_BASE] = LAYOUT_60_ansi(
    //     KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
    //     KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
    //     KC_ESC, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
    //     KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
    //     KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN1), MO(_FN3), KC_RCTL),
    [MAC_BASE] = LAYOUT_60_ansi(
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_ESC,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT),

    [WIN_BASE] = LAYOUT_60_ansi(
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_ESC,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            MT(MOD_RSFT, KC_UP),
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  LT(_FN1, KC_LEFT),  LT(_FN3, KC_DOWN),  MT(MOD_RCTL, KC_RIGHT)),

    [_FN1] = LAYOUT_60_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU, KC_NO,   KC_NO,   RM_VALD, RM_VALU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  RM_NEXT,
        RM_TOGG, RM_NEXT,  RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, _______, _______, _______, _______, KC_INS,   KC_PGUP,  KC_HOME,  _______,
        _______, RM_PREV,  RM_VALD, RM_HUED, RM_SATD, RM_SPDD, _______, _______, KC_UP,   _______, KC_PGDN,  KC_END,             _______,
        _______,           _______, _______, _______, _______, _______, NK_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,             _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_FN2] = LAYOUT_60_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU, KC_TASK, KC_FLXP, RM_VALD, RM_VALU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  RM_NEXT,
        RM_TOGG, RM_NEXT,  RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, _______, _______, KC_APP,  KC_SCRL, KC_INS,   KC_PGUP,  KC_HOME,  _______,
        _______, RM_PREV,  RM_VALD, RM_HUED, RM_SATD, RM_SPDD, _______, _______, KC_UP,   KC_PSCR, KC_PGDN,  KC_END,             _______,
        _______,           _______, _______, _______, _______, _______, NK_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,             _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_FN3] = LAYOUT_60_ansi(
        KC_TILD, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DELETE,
        RM_TOGG, RM_NEXT,  RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, RM_PREV,  RM_VALD, RM_HUED, RM_SATD, RM_SPDD, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______)
};
