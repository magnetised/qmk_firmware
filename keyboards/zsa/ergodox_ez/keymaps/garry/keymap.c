#include QMK_KEYBOARD_H
#include "version.h"

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

#define MOD_G_HYPR (MOD_LCTL | MOD_LALT | MOD_LGUI)

enum custom_keycodes {
#ifdef ORYX_CONFIGURATOR
    VRSN = EZ_SAFE_RANGE,
#else
    VRSN = SAFE_RANGE,
#endif
    RGB_SLD = EZ_SAFE_RANGE,
    GH_CTRL_U,
    GH_CTRL_D,
    GH_ELIXIR_PIPE,
};

const uint16_t PROGMEM underscore_combo[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM ctrl_a_combo[] = {KC_A, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM sq_brackets_combo[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM percent_combo[] = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM paren_combo[] = {KC_S, KC_L, COMBO_END};

// COMBO_COUNT defined in ./config.h
combo_t key_combos[COMBO_COUNT] = {
    COMBO(underscore_combo, KC_UNDERSCORE),
    COMBO(ctrl_a_combo, LCTL(KC_A)),
    COMBO(sq_brackets_combo, KC_LBRC),
    COMBO(percent_combo, KC_PERCENT),
    COMBO(paren_combo, KC_LEFT_PAREN),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESC,         KC_1,         KC_2,    KC_3,    KC_4,         KC_5, KC_DELETE,                                                                   KC_DELETE,              KC_6, KC_7,     KC_8,        KC_9,        KC_0,             KC_MINUS,
    KC_TAB,         KC_Q,         KC_W,    KC_E,    KC_R,         KC_T, KC_BACKSPACE,                                                                   KC_BACKSPACE,              KC_Y, KC_U,     KC_I,        KC_O,        KC_P,             KC_BACKSLASH,
    KC_GRAVE,       KC_A,         KC_S,    KC_D,    KC_F,         KC_G,                                                                                                      KC_H, KC_J,     KC_K,        KC_L,        KC_SEMICOLON,        KC_QUOTE,
    KC_LSFT,        LCTL_T(KC_Z), KC_X,    KC_C,    KC_V,         KC_B, MT(MOD_G_HYPR, KC_ENTER),                                                      MT(MOD_G_HYPR, KC_ENTER), KC_N, KC_M,     KC_COMMA,    KC_DOT,      RCTL_T(KC_SLASH), KC_RIGHT_SHIFT,
    LT(1,KC_GRAVE), KC_SPC,       QK_LEAD, KC_LALT, LT(3,KC_END),                                                                                                                  KC_EQUAL, KC_LALT,     KC_TRNS,     KC_RCTL,          MO(1),
                                                                                        LT(2, KC_ESC), TG(1),             KC_CAPS_LOCK,   LCTL_T(KC_ESC),
                                                                                        KC_HOME,           KC_PGUP,
                                                                        LGUI_T(KC_SPC), LT(4, KC_ESC), LT(3,KC_END),      KC_PAGE_DOWN, LT(4, KC_ESC),  KC_SPC
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESC,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRNS,                                 KC_TRNS, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRNS,   KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRNS,                                 KC_TRNS, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRNS,   KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRNS,
    KC_TRNS,   KC_PERC,        KC_CIRC,        KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,    KC_TILD,        KC_TRNS,                                 KC_TRNS, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BACKSLASH,      KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                                                 KC_TRNS, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRNS,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                                    KC_TRNS, KC_TRNS,
                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS, KC_TRNS,                     KC_AUDIO_MUTE,     KC_TRNS,    KC_TRNS,         KC_TRNS,             KC_TRNS,             KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_MS_UP,   KC_TRNS,     KC_TRNS, KC_TRNS,                     KC_AUDIO_VOL_UP,   KC_TRNS,    KC_TRNS,         KC_TRNS,             KC_TRNS,             KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS,                                                 KC_MS_LEFT, KC_MS_DOWN,      KC_MS_UP,            KC_MS_RIGHT,         KC_TRNS, KC_MEDIA_PLAY_PAUSE,
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS, KC_TRNS,                     KC_AUDIO_VOL_DOWN, KC_TRNS,    KC_TRNS,         KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_MS_BTN1, KC_MS_BTN2,                                                                       KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN,   KC_AUDIO_MUTE,       KC_TRNS, KC_TRNS,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                                    KC_TRNS, KC_TRNS,
                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WWW_BACK
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_Q,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS, LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_G,                                                                           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS, KC_TRNS, LCTL(KC_D),      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                                    KC_TRNS, KC_PGUP,
                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_PAGE_DOWN,      KC_TRNS, KC_TRNS

  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRNS,  LSFT(KC_1), LSFT(KC_2),    LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5), KC_TRNS,                                            KC_TRNS, LSFT(KC_6),    LSFT(KC_7),    LSFT(KC_8),    LSFT(KC_9),     LSFT(KC_0),  KC_UNDERSCORE,
    KC_TRNS,  KC_TRNS,    KC_LBRC,       GH_ELIXIR_PIPE, KC_RBRC,        KC_BACKSLASH,  KC_TRNS,                                            KC_TRNS, KC_LBRC,       KC_LCBR,       KC_UNDERSCORE, KC_RCBR,        KC_RBRC,     GH_ELIXIR_PIPE,
    KC_TILDE, KC_COLON,   KC_LCBR,       KC_PIPE,        KC_RCBR,        KC_PERCENT,                                                              KC_UNDERSCORE, KC_LEFT_PAREN, KC_EQUAL,      KC_RIGHT_PAREN, KC_COLON,    KC_DOUBLE_QUOTE,
    KC_TRNS,  KC_LCTL,    KC_LEFT_PAREN, KC_TRNS,        KC_RIGHT_PAREN, KC_TRNS,    KC_TRNS,                                            KC_TRNS, KC_PLUS,       KC_LT,         KC_MINUS,      KC_GT,          KC_QUESTION, KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,       KC_TRNS,        KC_TRNS,                                                                                                KC_LCBR,       KC_PIPE,       KC_RCBR,        KC_TRNS,     KC_TRNS,
                                                                                              KC_TRNS, KC_TRNS,      KC_TRNS,   KC_TRNS,
                                                                                                       KC_TRNS,      KC_PGUP,
                                                                                     KC_TRNS, KC_TRNS, KC_TRNS,      KC_PAGE_DOWN, KC_TRNS, KC_TRNS
  ),
  /* [4] = LAYOUT_ergodox_pretty( */
  /*   KC_TRNS, LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     KC_TRNS,                                 KC_TRNS, LSFT(KC_6),      LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     KC_UNDERSCORE, */
  /*   KC_TRNS, KC_Q,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS, LSFT(KC_5),      LSFT(KC_4),     LSFT(KC_3),     LSFT(KC_2),     LSFT(KC_1),     KC_TRNS, */
  /*   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                 KC_LCBR,         KC_LEFT_PAREN,  KC_EQUAL,       KC_RIGHT_PAREN, KC_RCBR,        KC_DOUBLE_QUOTE, */
  /*   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS, KC_PLUS,         KC_LBRC,        GH_ELIXIR_PIPE, KC_RBRC,        KC_PIPE,        KC_TRNS, */
  /*   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                                                                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
  /*                                                                                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
  /*                                                                                                                   KC_TRNS, KC_PGUP, */
  /*                                                                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_PAGE_DOWN,      KC_TRNS, KC_TRNS */
  /* ), */
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case GH_CTRL_U:
                if (record->event.pressed) {
                    SEND_STRING(SS_LCTL("u"));
                }
                break;
            case GH_CTRL_D:
                if (record->event.pressed) {
                    SEND_STRING(SS_LCTL("d"));
                }
                break;
            case GH_ELIXIR_PIPE:
                if (record->event.pressed) {
                    SEND_STRING("|>");
                }
                break;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};

/* LEADER_EXTERNS(); */

/* void matrix_scan_user(void) { */
/*      LEADER_DICTIONARY() { */
/*         leading = false; */
/*         leader_end(); */
/*         SEQ_ONE_KEY(KC_A) { */
/*             SEND_STRING(SS_LCTL("a") SS_LCTL("a")); */
/*         } */

/*         SEQ_ONE_KEY(KC_U) { */
/*             SEND_STRING(SS_LCTL("a") "["); */
/*         } */
/*     } */
/* } */
