/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mob_animation
*/

#include "my.h"

void update_animation(mob_t *mob)
{
    sfIntRect sprite_size = get_sprite_size(mob->my_sprite->sprite);
    if (++mob->my_sprite->state > 3) {
        mob->my_sprite->state = 0;
    }
    int state = mob->my_sprite->state;
    mob->my_sprite->rectangle.width = 160;
    mob->my_sprite->rectangle.height = 172;
    mob->my_sprite->rectangle.left = state * 160;
}