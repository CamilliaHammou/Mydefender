/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** events
*/

#include "my.h"

void left_click(defender_t *my_defender, sfEvent event)
{
    if (event.mouseButton.button != sfMouseLeft) {
        return;
    }
    sfRenderWindow *window = my_defender->window;
    if (mouse_over_sprite(window, my_defender->play_button)) {
        click_play_button(my_defender);
    }
    if (mouse_over_sprite(window, my_defender->close_button)) {
        sfRenderWindow_close(my_defender->window);
    }
    if (mouse_over_sprite(window, my_defender->home_button)) {
        click_home_button(my_defender);
    }
    on_icon_click(my_defender);
}

void escape_key(defender_t *my_defender, sfEvent event)
{
    if (event.key.code != sfKeyEscape) {
        return;
    }
    press_pause_button(my_defender);
}