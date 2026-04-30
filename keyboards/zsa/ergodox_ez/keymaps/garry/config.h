/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define LEADER_TIMEOUT 400
// https://docs.qmk.fm/#/feature_advanced_keycodes?id=permissive-hold
#define PERMISSIVE_HOLD
#define COMBO_COUNT 5
// amount of time before a tap becomes a hold, default is 200
#define TAPPING_TERM 250
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
