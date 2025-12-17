#include "select_menu.h"
#include "game.h"
#include "level.h"

#include "raylib.h"

size_t selected_menu_item = 0;

void handle_select_menu_action()
{
    switch (selected_menu_item) {
    case MENU_PLAY:
        game_state = in_game_state;
        load_level();
        break;

    case MENU_2_PLAYERS:
            break;

    case MENU_SETTINGS:
            break;

    case MENU_EXIT:
        CloseWindow();
        break;
    }
}
