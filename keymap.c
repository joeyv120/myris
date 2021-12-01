#include QMK_KEYBOARD_H
#include <print.h>

#define _A 0
#define _B 1
#define _C 2
#define _D 3
#define _E 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_A] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,           KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,            KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   LT(3,KC_SPC),MO(1),                 MO(2),   LT(4,KC_ENT),KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_B] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_NO,   KC_HOME, KC_UP,   KC_PGUP, KC_BSPC, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_NO,   KC_LEFT, KC_TAB,  KC_RGHT, KC_INS,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_ESC,  KC_DOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_END,  KC_DOWN, KC_PGDN, KC_DEL,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_C] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                             KC_MINS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F11,  KC_NO,  KC_NO,    KC_NO,   KC_F12,  KC_NO,            KC_NO,   KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_EQL,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_TRNS, KC_TRNS,                   KC_TRNS, KC_P0,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_D] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NLCK, RGB_MOD,   KC_BRIU, KC_VOLU, RGB_VAI,                            KC_NO,   KC_NO,   KC_LCBR, KC_RCBR, KC_BSLS, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_CAPS, KC_NO,   KC_NO,   KC_MUTE, RGB_TOG,                            KC_APP,  KC_NO,   KC_LPRN, KC_RPRN, KC_QUOT, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_SLCK, RGB_RMOD,   KC_BRID, KC_VOLD, RGB_VAD, KC_NO,            KC_NO,   RESET,   KC_NO,   KC_LBRC, KC_RBRC, KC_GRV,  KC_NO, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_TRNS,                   KC_TRNS,  KC_NO,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  
  [_E] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_TRNS,                   KC_TRNS,  KC_NO,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};


/* the remaining code is for rbg underglow effects */

uint32_t base_mode = RGBLIGHT_MODE_STATIC_LIGHT; // Unlocked animation (solid)
uint32_t lock_mode = RGBLIGHT_MODE_BREATHING + 3; // Locked animation (breathing, fast)

void keyboard_post_init_user(void) {
  rgblight_enable();
  rgblight_mode(base_mode);
  rgblight_sethsv(128, 255, 255);
  rgblight_disable();
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  xprintf("%d", layer);
  led_t led_state = host_keyboard_led_state();
  switch (layer) {
    case _A:
      rgblight_sethsv_noeeprom(148, 255, rgblight_get_val());
      if (led_state.caps_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;
    case _B:
      rgblight_mode_noeeprom(base_mode);
      rgblight_sethsv_noeeprom(85, 255, rgblight_get_val());
      break;
    case _C:
      rgblight_sethsv_noeeprom(180, 255, rgblight_get_val());
      if (led_state.num_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;
    case _D:
      rgblight_mode_noeeprom(base_mode);
      rgblight_sethsv_noeeprom(0, 255, rgblight_get_val());
      break;
    case _E:
      rgblight_mode_noeeprom(base_mode);
      rgblight_sethsv_noeeprom(43, 255, rgblight_get_val());
      break;
    }
  return state;
}

bool led_update_user(led_t led_state) {
    if (layer_state_is(_A)) {
      if (led_state.caps_lock) {
        rgblight_mode_noeeprom(lock_mode);      
      }
      else {
        rgblight_mode_noeeprom(base_mode);      
      }
    }
    if (layer_state_is(_B)) {
      if (led_state.scroll_lock) {
        rgblight_mode_noeeprom(lock_mode);      
      }
      else {
        rgblight_mode_noeeprom(base_mode);      
      }
    }
    if (layer_state_is(_C)) {
      if (led_state.num_lock) {
        rgblight_mode_noeeprom(lock_mode);      
      }
      else {
        rgblight_mode_noeeprom(base_mode);      
      }
    }
    if (layer_state_is(_D)) {
      rgblight_mode_noeeprom(base_mode);
    }
    if (layer_state_is(_E)) {
      rgblight_mode_noeeprom(base_mode);
    }
    return true;
}