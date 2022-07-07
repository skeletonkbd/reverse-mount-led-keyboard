#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ - │ - │ - │
     * ├───┼───┼───┤
     * │ - │ - │ r │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x3(
        KC_A,   KC_B,   KC_C,
        RGB_TOG,RGB_MOD,RGB_RMOD,
        RGB_VAI,RGB_VAD,QK_REBOOT
    )
};
