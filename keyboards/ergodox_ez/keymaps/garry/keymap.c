#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"

#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  GH_CTRL_U,
  GH_CTRL_D,
  GH_ELIXIR_PIPE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_DELETE,                                    KC_DELETE,              KC_6,           KC_7,           KC_8,           KC_9,           KC_0,             KC_MINUS,
    KC_TAB,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_BSPACE,                                    KC_BSPACE,              KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,             KC_BSLASH,
    KC_GRAVE,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                                 KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,        KC_QUOTE,
    KC_LSHIFT,        LCTL_T(KC_Z),   KC_X,           KC_C,           KC_V,           KC_B,           MT(MOD_HYPR, KC_ENTER),                       MT(MOD_HYPR, KC_ENTER), KC_N,           KC_M,           KC_COMMA,       KC_DOT,         RCTL_T(KC_SLASH), KC_RSHIFT,
    LT(1,KC_GRAVE),   KC_SPACE,       KC_LEAD,        KC_LALT,        LT(3,KC_END),                                                                                                         KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,   MO(1),
                                                                                                      KC_LCTL, TG(1),                               KC_LOCK,        LCTL_T(KC_ESCAPE),
                                                                                                               KC_HOME,                             KC_PGUP,
                                                                      LGUI_T(KC_SPACE), LT(4, KC_ESCAPE), LT(3,KC_END),                             KC_PGDOWN,      LT(4, KC_ESCAPE), KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT,   KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT,   KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,                                                                                                     KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_G,                                                                           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_D),      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_PGUP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_6),      LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     KC_UNDERSCORE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        GH_ELIXIR_PIPE, KC_RBRC,        KC_BSLASH,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERCENT,      KC_LBRC,        KC_UNDERSCORE,  KC_RBRC,        LSFT(KC_5),     GH_ELIXIR_PIPE,
    KC_TILDE,       KC_COLON,       KC_LCBR,        KC_PIPE,        KC_RCBR,        KC_PERCENT,                                                                     KC_UNDERSCORE,   KC_LEFT_PAREN,  KC_EQUAL,       KC_RIGHT_PAREN, KC_COLON,       KC_DOUBLE_QUOTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_PAREN,  KC_TRANSPARENT, KC_RIGHT_PAREN, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PLUS,         KC_LT,          KC_MINUS,       KC_GT,          KC_QUESTION,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                  KC_LCBR,        KC_PIPE,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_PGUP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT
  ),
  /* [4] = LAYOUT_ergodox_pretty( */
  /*   KC_TRANSPARENT, LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_6),      LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     KC_UNDERSCORE, */
  /*   KC_TRANSPARENT, KC_Q,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_5),      LSFT(KC_4),     LSFT(KC_3),     LSFT(KC_2),     LSFT(KC_1),     KC_TRANSPARENT, */
  /*   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LCBR,         KC_LEFT_PAREN,  KC_EQUAL,       KC_RIGHT_PAREN, KC_RCBR,        KC_DOUBLE_QUOTE, */
  /*   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PLUS,         KC_LBRC,        GH_ELIXIR_PIPE, KC_RBRC,        KC_PIPE,        KC_TRANSPARENT, */
  /*   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
  /*                                                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
  /*                                                                                                                   KC_TRANSPARENT, KC_PGUP, */
  /*                                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT */
  /* ), */
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case GH_CTRL_U:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("u"));
        }
        break;
    case GH_CTRL_D:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("d"));
        }
        break;
  case GH_ELIXIR_PIPE:
      if (record->event.pressed) {
          SEND_STRING("|>");
      }
      break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

LEADER_EXTERNS();

void matrix_scan_user(void) {
     LEADER_DICTIONARY() {
        leading = false;
        leader_end();
        SEQ_ONE_KEY(KC_A) {
            SEND_STRING(SS_LCTRL("a") SS_LCTRL("a"));
        }

        SEQ_ONE_KEY(KC_U) {
            SEND_STRING(SS_LCTRL("a") "[");
        }
    }
}
