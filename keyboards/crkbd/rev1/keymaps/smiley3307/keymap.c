/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Thumb layer taps
#define LTH LT(1, KC_SPC)
#define LTH_3 LT(3, KC_SPC)
#define RTH LT(2, KC_BSPC)
#define RTH_3 LT(3, KC_BSPC)

// Left-hand home row mods
#define HOME_A GUI_T(KC_A)
#define HOME_S ALT_T(KC_S)
#define HOME_D SFT_T(KC_D)
#define HOME_F CTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L ALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// Left-hand Layer-1 home row mods
#define HOME_1 GUI_T(KC_1)
#define HOME_2 ALT_T(KC_2)
#define HOME_3 SFT_T(KC_3)
#define HOME_4 CTL_T(KC_4)

// Right-hand Layer-1 home row mods
#define HOME_7 RCTL_T(KC_7)
#define HOME_8 RSFT_T(KC_8)
#define HOME_9 ALT_T(KC_9)
#define HOME_0 RGUI_T(KC_0)

// Symbols
#define HASH KC_NUHS
#define PLUS KC_RBRC
#define DEGR LSFT(KC_GRV)
#define EXCL LSFT(KC_1)
#define QUOT LSFT(KC_2)
#define PARA LSFT(KC_3)
#define DOLR LSFT(KC_4)
#define PRCT LSFT(KC_5)
#define AND  LSFT(KC_6)
#define SLSH LSFT(KC_7)
#define LPAR LSFT(KC_8)
#define RPAR LSFT(KC_9)
#define EQUL LSFT(KC_0)
#define QMRK LSFT(KC_MINS)
#define ACSN LSFT(KC_EQL)
#define STAR LSFT(KC_RBRC)
#define SQOT LSFT(KC_NUHS)
#define LBRK RALT(KC_8)
#define RBRK RALT(KC_9)
#define LBRC RALT(KC_7)
#define RBRC RALT(KC_0)
#define BSLH RALT(KC_MINS)
#define AT RALT(KC_Q)
#define EURO RALT(KC_E)
#define TILD RALT(KC_RBRC)
#define PIPE RALT(KC_NUBS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_MINS,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Z,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_INS,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,                         KC_H,  HOME_J,  HOME_K, HOME_L,HOME_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NUBS,    KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_ALGR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC,     LTH,  KC_TAB,     KC_ENT,     RTH,  KC_DEL
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_INS,  HOME_1,  HOME_2,  HOME_3,  HOME_4,    KC_5,                         KC_6,  HOME_7,  HOME_8,  HOME_9,  HOME_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC, _______,  KC_TAB,     KC_ENT,   RTH_3,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    SQOT,      AT,    EURO, XXXXXXX,                      XXXXXXX,    BSLH,    LBRC,    RBRC, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	 DEGR,    EXCL,    QUOT,    PARA,    DOLR,    PRCT, 			     AND,    SLSH,    LPAR,    RPAR,    EQUL,    QMRK,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    ACSN,    HASH,    PLUS,    STAR,                         TILD,    PIPE,    LBRK,    RBRK, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC,   LTH_3,  KC_TAB,     KC_ENT, _______,  KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
