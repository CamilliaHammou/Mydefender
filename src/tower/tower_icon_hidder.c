/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_icon_hidder
*/

#include "my.h"

void hide_all_icon_copy(defender_t *my_defender)
{
    my_defender->fire_icon->copy->should_show = false;
    my_defender->freeze_icon->copy->should_show = false;
    my_defender->light_icon->copy->should_show = false;
}