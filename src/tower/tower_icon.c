/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_icon
*/

#include "my.h"

void click_icon(defender_t *my_defender, sfRenderWindow *window, icon_t *my_icon)
{
    if (mouse_over_sprite(window, my_icon->my_sprite)) {
        bool value = my_icon->copy->should_show;
        hide_all_icon_copy(my_defender);
        my_icon->copy->should_show = !value;
    }
}

void on_icon_click(defender_t *my_defender)
{
    sfRenderWindow *window = my_defender->window;
    click_icon(my_defender, window, my_defender->fire_icon);
    click_icon(my_defender, window, my_defender->freeze_icon);
    click_icon(my_defender, window, my_defender->light_icon);
}

void update_icon_copy(sfRenderWindow *win, icon_t *my_icon, int id)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(win);
    sfIntRect sprite_size = get_sprite_size(my_icon->my_sprite->sprite);
    my_icon->copy->position.x = mouse.x;
    my_icon->copy->position.y = mouse.y;

    my_icon->my_sprite->position.x = id * (sprite_size.width + 5);
}

void update_icons(defender_t *my_defender)
{
    sfRenderWindow *window = my_defender->window;
    update_icon_copy(window, my_defender->fire_icon, 0);
    update_icon_copy(window, my_defender->freeze_icon, 1);
    update_icon_copy(window, my_defender->light_icon, 2);
}