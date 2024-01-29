/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mob_movement
*/

#include "my.h"

void handle_movement_3(mob_t *mob, defender_t *my_defender)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    move_left(mob);
    if (my_sprite->position.x < 0 && !mob->reached) {
        mob->reached = true;
        remove_life(my_defender);
    }
}

void handle_movement_2(mob_t *mob, defender_t *my_defender)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    if (my_sprite->position.x < 1150 && my_sprite->position.y <= 700) {
        move_right(mob);
    } else if (my_sprite->position.y <= 700) {
        move_down(mob);
    } else {
        handle_movement_3(mob, my_defender);
    }
}

void handle_movement(mob_t *mob, defender_t *my_defender)
{
    my_sprite_t *my_sprite = mob->my_sprite;
    if (my_sprite->position.x > 620 && my_sprite->position.y <= 100) {
        move_left(mob);
    } else if (my_sprite->position.y <= 410) {
        move_down(mob);
    } else {
        handle_movement_2(mob, my_defender);
    }
}