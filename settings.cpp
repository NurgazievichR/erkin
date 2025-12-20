#include "settings.h"

size_t paddle_color_index = COLOR_RED;
size_t ball_color_index   = BALL_RED;
size_t ball_speed_index  = SPEED_NORMAL;

int settings_selected = 0;

const float ball_speeds[SPEED_OPTION_COUNT] = {
    0.05f,
    0.10f,
    0.15f,
    0.20f,
    0.25f
};

const char* speed_names[SPEED_OPTION_COUNT] = {
    "Very Slow",
    "Slow",
    "Normal",
    "Fast",
    "Very Fast"
};


