/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** pause_button
*/

#include "my.h"

void press_pause_button(defender_t *my_defender)
{
    if (my_defender->player->playing) {
        my_defender->player->playing = false;
        my_defender->play_button->should_show = true;
        my_defender->home_button->should_show = true;
        my_defender->pause = true;
    }
}