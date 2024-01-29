/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** event_handler
*/

#include "my.h"

void filter_events(defender_t *my_defender, sfEvent event)
{
    switch (event.type) {
        case sfEvtKeyPressed:
            escape_key(my_defender, event);
            break;
        case sfEvtMouseButtonPressed:
            left_click(my_defender, event);
            break;
        case sfEvtClosed:
            sfRenderWindow_close(my_defender->window);
            break;
    }
}

void handle_events(defender_t *my_defender)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(my_defender->window, &event)) {
        filter_events(my_defender, event);
    }
}