#ifndef ASSETS_H
#define ASSETS_H

#include "raylib.h"

#include "sprite.h"

inline Font menu_font;

inline Texture2D wall_texture;
inline Texture2D void_texture;
inline Texture2D paddle_texture;
inline Texture2D paddle_red_texture;
inline Texture2D paddle_blue_texture;
inline Texture2D paddle_green_texture;
inline Texture2D paddle_yellow_texture;
inline Texture2D paddle_purple_texture;
inline Texture2D block_texture;

inline sprite ball_sprite;
inline sprite ball_red_sprite;
inline sprite ball_blue_sprite;
inline sprite ball_green_sprite;
inline sprite ball_white_sprite;
inline sprite ball_orange_sprite;


inline Sound win_sound;
inline Sound lose_sound;
inline Sound block_collected_sound;

void load_fonts();
void unload_fonts();

void load_textures();
void unload_textures();

void load_sounds();
void unload_sounds();

#endif // ASSETS_H
