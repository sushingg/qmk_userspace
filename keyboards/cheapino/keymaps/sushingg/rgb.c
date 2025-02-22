
uint8_t get_hue(uint8_t layer) {
    switch (layer) {
        case 6:
            return 169;
        case 5:
            return 43;
        case 4:
            return 85;
        case 3:
            return 120;
        case 2:
            return 180;
        case 1:
            return 220;
        default:
            return 0;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);
    if (layer == 0) {
        rgblight_sethsv_noeeprom(0, 0, 0);
    } else {
        uint8_t sat = 255;//rgblight_get_sat();
        uint8_t val = 50;//rgblight_get_val();
        uint8_t hue = get_hue(layer);
        rgblight_sethsv_noeeprom(hue, sat, val);
    }
    return state;
}
