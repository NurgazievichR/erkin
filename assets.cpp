#include "assets.h"

#include "raylib.h"

void load_fonts()
{
    menu_font = LoadFontEx("data/fonts/ARCADECLASSIC.TTF", 256, nullptr, 0);
}

void unload_fonts()
{
    UnloadFont(menu_font);
}

void load_textures()
{
    wall_texture = LoadTexture("data/images/wall.png");
    void_texture = LoadTexture("data/images/void.png");
    block_texture = LoadTexture("data/images/block.png");
    paddle_texture = LoadTexture("data/images/paddle/paddle.png");

    paddle_red_texture = LoadTexture("data/images/paddle/paddle_red.png");
    paddle_blue_texture   = LoadTexture("data/images/paddle/paddle_blue.png");
    paddle_green_texture  = LoadTexture("data/images/paddle/paddle_green.png");
    paddle_yellow_texture = LoadTexture("data/images/paddle/paddle_yellow.png");
    paddle_purple_texture = LoadTexture("data/images/paddle/paddle_purple.png");

    ball_sprite = load_sprite("data/images/ball/ball", ".png", 1, true, 10);
    ball_red_sprite = load_sprite("data/images/ball/ball_red/ball", ".png", 1, true, 10);
    ball_blue_sprite = load_sprite("data/images/ball/ball_blue/ball", ".png", 1, true, 10);
    ball_green_sprite = load_sprite("data/images/ball/ball_green/ball", ".png", 1, true, 10);
    ball_white_sprite = load_sprite("data/images/ball/ball_white/ball", ".png", 1, true, 10);
    ball_orange_sprite = load_sprite("data/images/ball/ball_orange/ball", ".png", 1, true, 10);

}

void unload_textures()
{
    UnloadTexture(wall_texture);
    UnloadTexture(void_texture);
    UnloadTexture(block_texture);

    UnloadTexture(paddle_texture);

    UnloadTexture(paddle_red_texture);
    UnloadTexture(paddle_blue_texture);
    UnloadTexture(paddle_green_texture);
    UnloadTexture(paddle_yellow_texture);
    UnloadTexture(paddle_purple_texture);

    unload_sprite(ball_sprite);
    unload_sprite(ball_red_sprite);
    unload_sprite(ball_blue_sprite);
    unload_sprite(ball_green_sprite);
    unload_sprite(ball_white_sprite);
    unload_sprite(ball_orange_sprite);
}


void load_sounds()
{
    InitAudioDevice();
    win_sound = LoadSound("data/sounds/win.wav");
    lose_sound = LoadSound("data/sounds/lose.wav");
    block_collected_sound = LoadSound("data/sounds/block_collected.wav");
}

void unload_sounds()
{
    UnloadSound(win_sound);
    UnloadSound(lose_sound);
    CloseAudioDevice();
}
