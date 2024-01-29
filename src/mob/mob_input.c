/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mob_input
*/

#include "my.h"

void move_left(mob_t *mob)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    my_sprite->position.x -= mob->speed;
}

void move_right(mob_t *mob)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    my_sprite->position.x += mob->speed;
}

void move_down(mob_t *mob)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    my_sprite->position.y += mob->speed;
}

void move_up(mob_t *mob)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    my_sprite->position.y -= mob->speed;
}