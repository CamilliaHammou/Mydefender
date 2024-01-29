/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** icon_renderer
*/

#include "my.h"

void render_icons(defender_t *my_defender)
{
    if (my_defender->player->playing) {
        draw_my_sprite(my_defender->window, my_defender->fire_icon->my_sprite);
        draw_my_sprite(my_defender->window, my_defender->freeze_icon->my_sprite);
        draw_my_sprite(my_defender->window, my_defender->light_icon->my_sprite);
        draw_my_sprite(my_defender->window, my_defender->fire_icon->copy);
        draw_my_sprite(my_defender->window, my_defender->freeze_icon->copy);
        draw_my_sprite(my_defender->window, my_defender->light_icon->copy);
    }   
}