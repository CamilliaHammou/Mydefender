/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** global_renderer
*/

#include "my.h"

void clear_window(sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
}

void draw_my_sprite(sfRenderWindow *window, my_sprite_t *my_sprite)
{
    sfSprite_setPosition(my_sprite->sprite, my_sprite->position);
    if (my_sprite->should_show) {
        sfRenderWindow_drawSprite(window, my_sprite->sprite, NULL);
    }
}

void render_all(defender_t *my_defender)
{
    render_background(my_defender);
    render_icons(my_defender);
    render_mobs(my_defender);
}

void start_render(defender_t *my_defender)
{
    clear_window(my_defender->window);
    update_buttons_state(my_defender);
    render_all(my_defender);
    sfRenderWindow_display(my_defender->window);
}