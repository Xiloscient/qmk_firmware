#include "krilo_2.h"
#include QMK_KEYBOARD_H

void board_init(void) {
}

void keyboard_post_init_user(void) {
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse    = true;
}
