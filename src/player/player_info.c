/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** player_info
*/

#include "my.h"

bool should_clock(defender_t *my_defender)
{
    return my_defender->should_clock && my_defender->player->playing;
}