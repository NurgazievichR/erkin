#ifndef SELECT_MENU_H
#define SELECT_MENU_H

#include <cstddef>

enum select_menu_item {
    MENU_PLAY,
    MENU_2_PLAYERS,
    MENU_SETTINGS,
    MENU_EXIT,
    MENU_ITEM_COUNT
};

extern size_t selected_menu_item;

void update_select_menu();
void draw_select_menu();
void handle_select_menu_action();

#endif // SELECT_MENU_H
