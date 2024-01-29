/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** main
*/

#include "my.h"

bool start_game(defender_t *my_defender)
{
    while (valid_window(my_defender->window)) {
        if (should_clock(my_defender)) {
            handle_clock(my_defender);
        }
        start_render(my_defender);
        handle_events(my_defender);
        if (my_defender->restart) {
            reset_defender(my_defender);
            my_defender->restart = false;
        }
    }
    return false;
}

void my_defender(int argc, char **argv)
{
    defender_t *my_defender = new_defender();
    start_game(my_defender);
    destroy_window(my_defender);
    destroy_sound(my_defender);
}

int main(int argc, char **argv)
{
    my_defender(argc, argv);
    return 0;
}
