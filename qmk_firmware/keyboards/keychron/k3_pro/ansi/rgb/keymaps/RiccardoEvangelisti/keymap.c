/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_84(
     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNAP,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),


[WIN_BASE] = LAYOUT_ansi_84(
     KC_ESC,               KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_NO,    KC_HOME,  KC_END,
     KC_GRV,               KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_DEL,
     KC_TAB,               KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_NO,              KC_NO,
     LT(WIN_FN, KC_CAPS),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_PGUP,
     KC_LSFT,                        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_PGDN,
     KC_LCTL,              KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,        KC_VOLD,  KC_VOLU,  KC_PSCR,        KC_TRNS,  KC_TRNS,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,
     KC_TRNS,  RGB_MOD,  RGB_VAI,  KC_LBRC,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_BSLS,  KC_TRNS,  KC_SCLN,  KC_TRNS,        KC_TRNS,  KC_TRNS,  LCTL(KC_BSLS),            RGB_TOG,
     KC_TRNS,  KC_QUOT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,            KC_TRNS,                  KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_NUBS,  LSFT(KC_NUBS),  KC_TRNS,            KC_TRNS,        KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS)
};



bool process_record_user(uint16_t keycode, keyrecord_t * record) {
    static bool windows_pressed = false;
    static bool in_combo = false;

    // GUI
    if(keycode == KC_LGUI) {
        if (record -> event.pressed) {
            // on press
            windows_pressed = true;
            return false; // do not register GUI
        } else {
            // on release
            windows_pressed = false;
            if(!in_combo){ // if not in combo with ANY other key, register
                register_code(KC_LGUI);
            }
            in_combo = false;
            return true; // unregister GUI
        }
    }
    // KC_RIGHT
    else if(keycode == KC_RIGHT) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_END);
                in_combo = true;
            } else {
                unregister_code(KC_END);
            }
            return false; // do not register
        }
    }
    // KC_LEFT
    else if(keycode == KC_LEFT) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_HOME);
                in_combo = true;
            } else {
                unregister_code(KC_HOME);
            }
            return false; // do not register
        }
    }
    // KC_UP
    else if(keycode == KC_UP) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_PGUP);
                in_combo = true;
            } else {
                unregister_code(KC_PGUP);
            }
            return false; // do not register
        }
    }
    // KC_DOWN
    else if(keycode == KC_DOWN) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_PGDN);
                in_combo = true;
            } else {
                unregister_code(KC_PGDN);
            }
            return false; // do not register
        }
    }
    // KC_BSPC
    else if(keycode == KC_BSPC) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_HOME);
                unregister_code(KC_HOME);
                unregister_code(KC_LSFT);
                register_code(KC_BSPC);
                in_combo = true;
            } else {
                unregister_code(KC_BSPC);
            }
            return false; // do not register
        }
    }
    // KC_DEL
    else if(keycode == KC_DEL) {
        if (windows_pressed) {
            if (record -> event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_END);
                unregister_code(KC_END);
                unregister_code(KC_LSFT);
                register_code(KC_DEL);
                in_combo = true;
            } else {
                unregister_code(KC_DEL);
            }
            return false; // do not register
        }
    }

    // for all other keys
    else {
        // if not left control (for combos: CTRL+PageUp or PageDwn or Home ecc...)
        // if not left shift (for combos: SHIFT+PageUp or PageDwn or Home ecc...)
        // if not left alt (for combos: ALT+PageUp or PageDwn or Home ecc...)
        if (keycode != KC_LCTL && keycode != KC_LSFT && keycode != KC_LALT && keycode != KC_CAPS) {
            if (windows_pressed) {
                register_code(KC_LGUI); // register GUI
                in_combo = true;
            }
        }
    }

    return true;

}
