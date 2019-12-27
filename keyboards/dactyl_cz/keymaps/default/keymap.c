#include QMK_KEYBOARD_H
// #include "dactyl_cz.h"

// extern keymap_config_t keymap_config;

/* Layers */
#define _QWERTY 0
#define _FN     1
#define _NAV    2

#define TAPPING_TOGGLE 1

// https://docs.qmk.fm/#/keycodes
// https://docs.qmk.fm/#/feature_advanced_keycodes
// https://docs.qmk.fm/#/keycodes_basic
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = KEYMAP_5x5(
    // left hand
  	KC_1,    KC_2,    KC_3,   KC_4,   KC_5, 
  	KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
  	KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
  	KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
             CTL_T(_______),    ALT_T(KC_GRV),
                              CMD_T(KC_ENT),  SFT_T(KC_SPC),
                              KC_ESC,   TT(_FN), 
                              KC_LBRC,   LSFT(KC_9),

    // right hand
  	KC_6,    KC_7,   KC_8,    KC_9,    KC_0,
    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,
    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, 
    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,
    				 KC_SLSH,    _______,	
    SFT_T(KC_BSPC), CMD_T(KC_TAB),
    TT(_NAV), KC_DEL,
    LSFT(KC_0), KC_RBRC
  ),

        // KC_SPC, LT(_FN, KC_BSPC), 
   // KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5, 
   // KC_GRV,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
   // KC_TAB,    KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
   // KC_LSHIFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
                       // KC_TAB,  KC_BSLS,
                       //         LT(_FN, KC_DEL), KC_LSFT, 
                       //         KC_SPC,   KC_LCTRL,
                       //         KC_ENTER, KC_LALT,
        // right hand
                     // KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
                     // KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_EQL,
                     // KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
                     // KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
                     //                  KC_LBRC, KC_RBRC,
        // KC_SPC, LT(_FN, KC_BSPC), 
        // CTL_T(KC_PGUP), KC_PGDN,
        // KC_LALT, KC_LGUI),
[_FN] = KEYMAP_5x5(
  // left hand
	  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5, 
    KC_F11,  KC_HOME,  KC_UP,    KC_END,   KC_PGUP,
    KC_F12,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,
    _______,  _______,  _______,  _______,  _______,
                       _______,  _______, 
                               KC_BRIU, KC_BRID, 
                               _______,   _______,
                               _______, _______,
    // right hand
    KC_F6,    KC_F7,  KC_F8,  KC_F9,   KC_F10,
    KC_PGUP,  KC_P7,  KC_P8,  KC_P9,   _______,
    KC_PGDN,  KC_P4,  KC_P5,  KC_P6,   _______,
    KC_CALC,  KC_P1,  KC_P2,  KC_P3,   _______,
              _______,  KC_P0,
    KC_VOLD, KC_VOLU, 
    KC_MUTE, _______,
    _______, _______
    ),
   // _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5, 
   // _______,  _______,  KC_HOME,  KC_UP,    KC_END,   KC_PGUP,
   // _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,
   // RESET,    _______,  _______,  _______,  _______,  _______,
   //                     _______,  _______, 
   //                             LT(_FN, KC_DEL), KC_LSFT, 
   //                             KC_SPC,   KC_LCTRL,
   //                             KC_ENTER, KC_LALT,
        // right hand
        //              KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,  KC_F11,
        //              KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   _______,  KC_F12,
        //              KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RIGHT, _______, _______,
        //              KC_CALC,  KC_MAIL,  KC_MYCM,  KC_WHOM,  _______,   RESET,
        //                                  _______,  _______,
        // KC_SPC, LT(_FN, KC_BSPC), 
        // CTL_T(KC_PGUP), KC_PGDN,
        // KC_LALT, KC_LGUI),
};

// layer template
// [_QWERTY] = KEYMAP_5x5(
//     // left hand
// 	KC_1,    KC_2,    KC_3,   KC_4,   KC_5, 
// 	KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
// 	KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
// 	KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
//           ______,  ______,
//                            ______, ______,
//                            ______, ______,
//                            ______, ______,

//     // right hand
// 	KC_6,    KC_7,   KC_8,    KC_9,    KC_0,
//     KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,
//     KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, 
//     KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,
//     				 ASDF,    ASDF,	
//     ASDF, ASDF
//     ASDF, ASDF
//     ASDF, ASDF
//     ),