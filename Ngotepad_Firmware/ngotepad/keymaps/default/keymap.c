#include QMK_KEYBOARD_H

enum layer {
    LAYER_ONE,
    LAYER_TWO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        |   F13    |   F14    |
        |   F15    |   F16    |
        |   F17    |   F18    |  Knob 1: Page Dn/Up   |
        |          |          |      Press: F19       |
        |   F20    |   F21    |  Knob 2: Page         |
        |          |          |      Press: F22       |
     */

    [LAYER_ONE] = LAYOUT_default(
        KC_F13 , KC_F14, \
        KC_F15, KC_F16, \
        KC_F17 , KC_F18, KC_F19, \
        KC_F20  , KC_F21 , KC_F22 \
    ),

    /*
        |   F13    |   F14    |
        |   F15    |   F16    |
        |   F17    |   F18    |  Knob 1: Page Dn/Up   |
        |          |          |      Press: F19       |
        |   F20    |   F21    |  Knob 2: Page         |
        |          |          |      Press: F22       |
     */

    [LAYER_TWO] = LAYOUT_default(
        KC_F13 , KC_F14, \
        KC_F15, KC_F16, \
        KC_F17 , KC_F18, KC_F19, \
        KC_F20  , KC_F21 , KC_F22 \
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) 
{
    if (index == 0) 
	{
        if (clockwise) 
		{    
			tap_code(KC_WH_D);
        } 
		else 
		{
            tap_code(KC_WH_U);
        }
    }
	else if (index == 1)
	{
		if (clockwise) 
		{    
			tap_code(KC_WH_R);
        } 
		else 
		{
            tap_code(KC_WH_L);
        }
	}
}
