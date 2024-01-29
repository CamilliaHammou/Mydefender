/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mob_renderer
*/

#include "my.h"

void render_mobs(defender_t *my_defender)
{
    for (int i = 0; i < my_defender->mobs_size; i++) {
        my_sprite_t *my_sprite = my_defender->mobs[i]->my_sprite;
        sfSprite_setTextureRect(my_sprite->sprite, my_sprite->rectangle);
        draw_my_sprite(my_defender->window, my_sprite);
    }
}