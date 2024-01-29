/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** button_renderer
*/

#include "my.h"

void update_buttons_pos(defender_t *my_defender)
{
    sfRenderWindow *window = my_defender->window;
    update_sprite_pos(my_defender->play_button, CENTER);
    update_sprite_pos(my_defender->close_button, RIGHT_TOP_CORNER);
    update_sprite_pos(my_defender->home_button, LEFT_BOTTOM_CORNER);
    update_sprite_pos(my_defender->home_title, TOP_CENTER);
    update_icons(my_defender);
}

void scale_custom(sfRenderWindow *win, my_sprite_t *my_sprite, float mult)
{
    float scale = my_sprite->scaling;
    if (mouse_over_sprite(win, my_sprite)) {
        scale *= mult;
    }
    update_sprite_scale(my_sprite, scale);
}

void update_scale(sfRenderWindow *window, my_sprite_t *my_sprite)
{
    scale_custom(window, my_sprite, 1.15);
}

void update_buttons_state(defender_t *my_defender)
{
    sfRenderWindow *window = my_defender->window;
    update_scale(window, my_defender->play_button);
    update_scale(window, my_defender->close_button);
    update_scale(window, my_defender->home_button);
    scale_custom(window, my_defender->home_title, 1.05);
    scale_custom(window, my_defender->fire_icon->my_sprite, 1);
    scale_custom(window, my_defender->fire_icon->copy, 1);
    scale_custom(window, my_defender->freeze_icon->my_sprite, 1);
    scale_custom(window, my_defender->freeze_icon->copy, 1);
    scale_custom(window, my_defender->light_icon->my_sprite, 1);
    scale_custom(window, my_defender->light_icon->copy, 1);
    
    update_buttons_pos(my_defender);
}