/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** play_button
*/

#include "my.h"

void click_play_button(defender_t *my_defender)
{
    my_defender->player->playing = true;
    my_defender->play_button->should_show = false;
    my_defender->home_button->should_show = false;
    my_defender->menu_background->should_show = false;
    my_defender->game_background->should_show = true;
    my_defender->home_title->should_show = false;  
    my_defender->pause = false; 
}