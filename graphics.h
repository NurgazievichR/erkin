#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <cstddef>

extern size_t game_frame;

void derive_graphics_metrics();

void draw_menu();
void draw_ui();
void draw_level();
void draw_paddle();
void draw_ball();
void draw_pause_menu();
void init_victory_menu();
void draw_victory_menu();
void draw_select_menu();
void draw_settings();

#endif // GRAPHICS_H
