/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** clock
*/

#include "my.h"

void update(defender_t *my_defender)
{   
    my_defender->ticks++;
    update_mobs(my_defender);
}

void handle_clock(defender_t *my_defender)
{
    sfTime time = sfClock_getElapsedTime(my_defender->clock);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > TICK_RATE) {
        update(my_defender);
        sfClock_restart(my_defender->clock);
    }
}