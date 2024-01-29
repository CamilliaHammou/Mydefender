/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** background_renderer
*/

#include "my.h"

void render_background(defender_t *my_defender)
{
    draw_my_sprite(my_defender->window, my_defender->game_background);
    draw_my_sprite(my_defender->window, my_defender->menu_background);
    draw_my_sprite(my_defender->window, my_defender->play_button);
    draw_my_sprite(my_defender->window, my_defender->close_button);
    draw_my_sprite(my_defender->window, my_defender->home_title);
    if (my_defender->pause) {
        draw_my_sprite(my_defender->window, my_defender->home_button);
    }
}
