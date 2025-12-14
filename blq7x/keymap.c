#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  // Macros invoked through the Magic (Alternate Repeat) key
  M_THE,
  M_ION,
  M_MENT,
  M_QUEN,
  M_TMENT,
};

#define MAGIC_STRING(str, repeat_keycode) \
  magic_send_string_P(PSTR(str), (repeat_keycode))

static void magic_send_string_P(const char *str, uint16_t repeat_keycode) {
  send_string_P(str);
  set_last_keycode(repeat_keycode);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_NO,          LCTL(KC_V),     LCTL(KC_A),     LCTL(KC_C),     LCTL(KC_X),     KC_MS_BTN1,                                     KC_TRANSPARENT, KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         LGUI(KC_TAB),   KC_NO,
    KC_TAB,         KC_V,           KC_M,           KC_L,           KC_C,           KC_P,           KC_MS_BTN2,                                 KC_TRANSPARENT, KC_B,           QK_AREP,          KC_U,           KC_O,           KC_Q,           KC_SLASH,
    KC_BSPC,        MT(MOD_LALT, KC_S),LT(1, KC_T),    MT(MOD_LSFT, KC_R),LT(2, KC_D),    KC_Y,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F,           LT(3, KC_N),    MT(MOD_LSFT, KC_E),LT(1, KC_A),    MT(MOD_LALT, KC_I),KC_MINUS,
    KC_COLN,        MT(MOD_LGUI, KC_X),KC_K,           KC_J,           MT(MOD_LCTL, KC_G),KC_W,                                           KC_Z,           MT(MOD_LCTL, KC_H),KC_COMMA,       LT(4, KC_DOT),  MT(MOD_LGUI, KC_QUOTE),KC_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOWN,        KC_UP,          LGUI(LSFT(KC_S)),                                                                                                KC_CAPS,        KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_SPACE,       KC_UNDS,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_ESCAPE,      QK_REP
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_LABK,        KC_RABK,        KC_MINUS,       KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_ASTR,        KC_SLASH,       KC_EQUAL,       KC_AMPR,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_HASH,        KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_DQUO,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_PLUS,        KC_LBRC,        KC_RBRC,        KC_PERC,                                        KC_AT,          KC_COLN,        KC_TRANSPARENT, KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,          KC_MS_BTN1,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_Z),     KC_NO,          KC_NO,          KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LGUI(KC_TAB),   KC_WWW_BACK,    KC_TRANSPARENT,                 KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SLASH,       KC_9,           KC_8,           KC_7,           KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MINUS,       KC_3,           KC_2,           KC_1,           KC_PLUS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_6,           KC_5,           KC_4,           KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, QK_LLCK,        KC_0
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_CAPS),  KC_AUDIO_MUTE,  LGUI(KC_DOWN),  LGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_CAPS),  KC_AUDIO_VOL_UP,LGUI(KC_LEFT),  LGUI(KC_RIGHT), LALT(LGUI(LCTL(KC_0))),LGUI(LSFT(KC_GRAVE)),                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_CAPS),  KC_AUDIO_VOL_DOWN,LALT(LGUI(LCTL(KC_DOWN))),LALT(LGUI(LCTL(KC_UP))),LALT(LGUI(LCTL(KC_1))),                                KC_TRANSPARENT, LALT(LSFT(KC_TAB)),LALT(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_ENTER),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_LEFT))),LALT(LGUI(LCTL(KC_RIGHT))),KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LGUI(KC_SPACE), KC_NO,          KC_TRANSPARENT,                 KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_F12,         KC_F9,          KC_F8,          KC_F7,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_F3,          KC_F2,          KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F6,          KC_F5,          KC_F4,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                 'L', 'L', 'L', 'R', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_COMMA, LT(4, KC_DOT), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, LT(3, KC_N), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSLS),
    COMBO(combo1, KC_SCLN),
    COMBO(combo2, OSL(5)),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }

  const uint8_t mods = get_mods();
  const uint8_t all_mods = mods | get_weak_mods();
  if (get_repeat_key_count() < 0 && (all_mods & ~MOD_MASK_SHIFT) == 0 &&
    (keycode == KC_A || keycode == KC_E || keycode == KC_I ||
      keycode == KC_O || keycode == KC_U || keycode == KC_Y)) {
    set_last_keycode(KC_N);
    set_last_mods(0);
  }

  if (record->event.pressed) {
    switch (keycode) {
      case M_THE: MAGIC_STRING(/* */"the", KC_N); break;
      case M_ION: MAGIC_STRING(/*i*/"on", KC_S); break;
      case M_MENT: MAGIC_STRING(/*m*/"ent", KC_S); break;
      case M_QUEN: MAGIC_STRING(/*q*/"uen", KC_S); break;
      case M_TMENT: MAGIC_STRING(/*t*/"ment", KC_S); break;
    }
  }

  return true;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  keycode = get_tap_keycode(keycode);

  if ((mods & ~MOD_MASK_SHIFT) == 0) {
    switch (keycode) {
      case KC_SPC:
      case KC_ENT:
      case KC_TAB: return M_THE;
      case KC_A: return KC_O;
      case KC_O: return KC_A;
      case KC_E: return KC_U;
      case KC_U: return KC_E;
      case KC_I:
        if ((mods & MOD_MASK_SHIFT) == 0) {
          return M_ION;
        } else {
          return KC_QUOT;
        }
      case KC_M: return M_MENT;
      case KC_Q: return M_QUEN;
      case KC_T: return M_TMENT;
      case KC_C:
      case KC_D:
      case KC_G:
      case KC_P: return KC_Y;
      case KC_Y: return KC_P;
      case KC_L: return KC_K;
      case KC_S: return KC_K;    }
  }

  return KC_TRNS;
}