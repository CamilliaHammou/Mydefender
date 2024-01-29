/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** player
*/

#include "my.h"

void remove_life(defender_t *my_defender)
{
    my_defender->player->health -= 1;   
}