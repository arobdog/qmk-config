#include QMK_KEYBOARD_H


#define _COLEMAK_DHM 0
#define _CODING 1
#define _CONFIG 2
#define _QWERTY 3

enum custom_keycodes {
  COLEMAK_DHM = SAFE_RANGE,
  CODING,
  CONFIG,
  EXTRA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK_DHM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MUTE,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_CAPS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_SPC,           KC_ENT,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, MO(2),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(1),   KC_SPC,                    KC_ENT,  KC_RALT, KC_BSPC    
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_CODING] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TO(0),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MPLY,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_NO,   KC_NO,   KC_TILD, KC_PLUS, KC_LBRC,                            KC_RBRC, KC_MINS, KC_GRV,  KC_F11,  KC_F12,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_NO,   KC_NO,   KC_AMPR, KC_PIPE, KC_LCBR,                            KC_RCBR, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_EQL,  KC_LPRN, KC_SPC,           TO(3),   KC_RPRN, KC_UNDS, KC_NO,   KC_NO,   KC_BSLS,   TO(0),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, TO(0),   KC_SPC,                    TO(3),   KC_RALT,   KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_CONFIG] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_TOG,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE,                            KC_NO,   KC_NO,   BL_STEP, BL_BRTG, BL_TOGG, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   RGB_VAI, RGB_MOD, RGB_SPI, KC_VOLU,                            KC_NO,   KC_NO,   RGB_SAI, RGB_HUI, BL_INC,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   RGB_VAD, RGB_TOG, RGB_SPD, KC_VOLD, KC_NO,            KC_NO,   KC_NO,   KC_NO,   RGB_SAD, RGB_HUD, BL_DEC,  TO(0),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   TO(0),   KC_NO,                     KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MUTE,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_CAPS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,           KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(0),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(1),   KC_SPC,                    KC_ENT,  KC_RALT, KC_BSPC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK_DHM:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK_DHM);
      }
      return false;
      break;
    case CODING:
      if (record->event.pressed) {
        layer_on(_CODING);
        update_tri_layer(_CODING, _CONFIG, _QWERTY);
      } else {
        layer_off(_CODING);
        update_tri_layer(_CODING, _CONFIG, _QWERTY);
      }
      return false;
      break;
    case CONFIG:
      if (record->event.pressed) {
        layer_on(_CONFIG);
        update_tri_layer(_CODING, _CONFIG, _QWERTY);
      } else {
        layer_off(_CONFIG);
        update_tri_layer(_CODING, _CONFIG, _QWERTY);
      }
      return false;
      break;
    case EXTRA:
      if (record->event.pressed) {
        layer_on(_QWERTY);
      } else {
        layer_off(_QWERTY);
      }
      return false;
      break;
  }
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 3) {
        if (layer_state_is(0)){
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (layer_state_is(1)){
            if (clockwise) {
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_MPRV);
            }
        } else if (layer_state_is(2)){
            if (clockwise) {
                rgblight_step();
            } else {
                rgblight_step_reverse();
            }
        }
    }
    return false;
}
