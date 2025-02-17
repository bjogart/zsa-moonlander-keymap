#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_NO, TD(DANCE_0), TD(DANCE_1), TD(DANCE_2), TD(DANCE_3), TD(DANCE_4), KC_LBRC, KC_RBRC, TD(DANCE_6), TD(DANCE_7), TD(DANCE_8), TD(DANCE_9), TD(DANCE_10), KC_GRAVE,
        KC_NO, MT(MOD_LGUI, KC_W), KC_L, KC_Y, KC_P, KC_B, KC_LCBR, KC_RCBR, KC_Z, KC_F, KC_U, KC_O, KC_QUOTE, KC_EQUAL,
        KC_BSLS, KC_C, MT(MOD_LALT, KC_R), MT(MOD_LSFT, KC_S), MT(MOD_LCTL, KC_T), KC_G, KC_LPRN, KC_RPRN, KC_M, MT(MOD_LCTL, KC_N), MT(MOD_LSFT, KC_E), MT(MOD_LALT, KC_I), KC_A, KC_SCLN,
        KC_DELETE, KC_Q, KC_J, KC_V, KC_D, KC_K, KC_X, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_MINUS,
        KC_ESCAPE, LCTL(KC_Z), LCTL(KC_A), TD(DANCE_5), LCTL(KC_V), LGUI(LSFT(KC_S)), KC_CAPS, TD(DANCE_11), KC_DOWN, KC_UP, TD(DANCE_12), KC_F13,
        KC_SPACE, KC_ENTER, KC_NO, TD(DANCE_13), KC_BSPC, KC_SPACE),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_T, KC_TAB, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_T, KC_TAB, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP, KC_RIGHT, KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0), KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,250,183}, {0,0,0}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {9,218,204}, {9,218,204}, {9,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,218,204}, {0,0,0} },

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
        rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
  const bool is_combo = record->event.type == COMBO_EVENT;
  uprintf(
      "0x%04X,%u,%u,%u,%b,0x%02X,0x%02X,%u\n",
      keycode,
      is_combo ? 254 : record->event.key.row,
      is_combo ? 254 : record->event.key.col,
      get_highest_layer(layer_state),
      record->event.pressed,
      get_mods(),
      get_oneshot_mods(),
      record->tap.count);
#endif

  switch (keycode)
  {

  case TD(DANCE_0):
  case TD(DANCE_1):
  case TD(DANCE_2):
  case TD(DANCE_3):
  case TD(DANCE_4):
  case TD(DANCE_5):
  case TD(DANCE_6):
  case TD(DANCE_7):
  case TD(DANCE_8):
  case TD(DANCE_9):
  case TD(DANCE_10):
  case TD(DANCE_11):
  case TD(DANCE_12):
    action = &tap_dance_actions[TD_INDEX(keycode)];
    if (!record->event.pressed && action->state.count && !action->state.finished)
    {
      tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
      tap_code16(tap_hold->tap);
    }
    break;
  case RGB_SLD:
    if (rawhid_state.rgb_control)
    {
      return false;
    }
    if (record->event.pressed)
    {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: layer_move(1); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_TAP_HOLD(KC_1, KC_F1),
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_2, KC_F2),
        [DANCE_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_3, KC_F3),
        [DANCE_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_4, KC_F4),
        [DANCE_4] = ACTION_TAP_DANCE_TAP_HOLD(KC_5, KC_F5),
        [DANCE_5] = ACTION_TAP_DANCE_TAP_HOLD(LCTL(KC_C), LCTL(KC_X)),
        [DANCE_6] = ACTION_TAP_DANCE_TAP_HOLD(KC_6, KC_F6),
        [DANCE_7] = ACTION_TAP_DANCE_TAP_HOLD(KC_7, KC_F7),
        [DANCE_8] = ACTION_TAP_DANCE_TAP_HOLD(KC_8, KC_F8),
        [DANCE_9] = ACTION_TAP_DANCE_TAP_HOLD(KC_9, KC_F9),
        [DANCE_10] = ACTION_TAP_DANCE_TAP_HOLD(KC_0, KC_F10),
        [DANCE_11] = ACTION_TAP_DANCE_TAP_HOLD(KC_LEFT, KC_HOME),
        [DANCE_12] = ACTION_TAP_DANCE_TAP_HOLD(KC_RIGHT, KC_END),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
};
