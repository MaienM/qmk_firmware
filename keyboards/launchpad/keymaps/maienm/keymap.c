// Below layout is based upon /u/That-Canadian's planck layout
#include "launchpad.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _MAIN 0
#define _ALT 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT( \
    MO(_ALT),     MEH(KC_MUTE), \
	MEH(KC_VOLD), MEH(KC_VOLU), \
	MEH(KC_MPRV), MEH(KC_MNXT), \
	MEH(KC_MPLY), _______ \
),

[_ALT] = LAYOUT( \
    _______,       HYPR(KC_MUTE), \
	HYPR(KC_VOLD), HYPR(KC_VOLU), \
	HYPR(KC_MPRV), HYPR(KC_MNXT), \
	HYPR(KC_MPLY), _______ \
)

};

void matrix_init_user(void) {

}
