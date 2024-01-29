/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** proprieties
*/

#include "my.h"

bool valid_window(sfRenderWindow *window)
{
    return sfRenderWindow_isOpen(window) && sfRenderWindow_hasFocus(window);
}

sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    sfRenderWindow *window = sfRenderWindow_create(
        mode, NAME, sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, FRAME_RATE);
    return window;
}

void destroy_window(defender_t *my_defender)
{
    sfRenderWindow_destroy(my_defender->window);
}
