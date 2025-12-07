#include "assets.h"
#include "ball.h"
#include "game.h"
#include "graphics.h"
#include "level.h"
#include "paddle.h"

#include "raylib.h"
#include <ctime>


void update()
{
    // TODO

    if (IsKeyPressed(KEY_ESCAPE)) {
        game_state = paused_state;
    }
    if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
        move_paddle(-paddle_speed);
    }
    if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
        move_paddle(paddle_speed);
    }
    move_ball();
    if (!is_ball_inside_level()) {
        load_level();
        PlaySound(lose_sound);
    } else if (current_level_blocks == 0) {
        load_level(1);
        PlaySound(win_sound);
    }
}

void draw()
{
    // TODO

    draw_level();
    draw_paddle();
    draw_ball();
    draw_ui();
}

int main()
{
    srand(time(nullptr));
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(1280, 720, "Breakout");
    SetTargetFPS(60);

    load_fonts();
    load_textures();
    load_sounds();
    load_level();


    while (!WindowShouldClose()) {
        BeginDrawing();
        game_frame++;
        draw();
        update();

        EndDrawing();
    }
    CloseWindow();

    unload_level();
    unload_sounds();
    unload_textures();
    unload_fonts();

    return 0;
}
