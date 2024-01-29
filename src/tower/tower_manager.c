/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_manager
*/

#include "my.h"

void setup_towers(defender_t *my_defender)
{
    my_defender->towers = malloc(sizeof(tower_spot_t) * 1000);
}

tower_spot_t *new_tower()
{
    tower_spot_t *tower = malloc(sizeof(tower_spot_t));
    return tower;
}