#include QMK_KEYBOARD_H

enum layer {
    LAYER_ONE,
    LAYER_TWO,
};

enum custom_keycodes {
    SHRUG,
    DISFACE,
    FU,
    TFLIP,
    TFLIP2,
    SAD_EYES,
    TPUT,
    HAPPYFACE,
    HEARTFACE,
    CLOUD,
    CHANFACE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case CLOUD:       // (っ◕‿◕)っ
                if(record->event.pressed){
                    //UC(send_unicode_hex_string("0028 3063 25D5 203F 25D5 0029 3063");
                    UC(0x0028);    
                }
                return false;
                break;
            case FU:       // t(-_-t)
                if(record->event.pressed){
                    SEND_STRING("t(-_-t)");
                }
                return false;
                break;  
            case HAPPYFACE:       // ʘ‿ʘ 
                if(record->event.pressed){
                     send_unicode_hex_string("0298 203F 0298");
                }
                return false;
                break; 
            case SHRUG: // ¯\_(ツ)_/¯
                if (record->event.pressed) {
                    send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
                }
                return false; 
                break;
            case HEARTFACE:       // ♥‿♥
                if(record->event.pressed){
                    send_unicode_hex_string("2665 203F 2665");
                }
                return false;
                break;  
            case DISFACE:       // ಠ_ಠ 
                if(record->event.pressed){
                    send_unicode_hex_string("0CA0 005F 0CA0");
                }
                return false;
                break;
            case TFLIP:         // (╯°□°)╯ ︵ ┻━┻ 
                if(record->event.pressed){
                    send_unicode_hex_string("0028 256F 00B0 25A1 00B0 0029 256F 0020 FE35 0020 253B 2501 253B");
                }
                return false;
                break;
            case TFLIP2:         // ┻━┻︵ \(°□°)/ ︵ ┻━┻  
                if(record->event.pressed){
                    send_unicode_hex_string("253B 2501 253B FE35 0020 005C 0028 00B0 25A1 00B0 0029 002F 0020 FE35 0020 253B 2501 253B");
                }
                return false;
                break;
                } 
    }
    return true;
}




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
        CLOUD , SHRUG, \
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
