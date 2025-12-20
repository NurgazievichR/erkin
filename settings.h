#ifndef SETTINGS_H
#define SETTINGS_H

#include <cstddef>

enum color_option {
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_YELLOW,
    COLOR_PURPLE,
    COLOR_OPTION_COUNT
};

enum ball_color_option {
    BALL_RED,
    BALL_BLUE,
    BALL_GREEN,
    BALL_WHITE,
    BALL_ORANGE,
    BALL_COLOR_OPTION_COUNT
};

enum speed_option {
    SPEED_VERY_SLOW,
    SPEED_SLOW,
    SPEED_NORMAL,
    SPEED_FAST,
    SPEED_VERY_FAST,
    SPEED_OPTION_COUNT
};

extern size_t paddle_color_index;
extern size_t ball_color_index;
extern size_t ball_speed_index;

extern int settings_selected;

extern const char* speed_names[SPEED_OPTION_COUNT];


extern const float ball_speeds[SPEED_OPTION_COUNT];

#endif
