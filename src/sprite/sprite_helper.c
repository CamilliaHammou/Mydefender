/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** sprite_helper
*/

#include "my.h"

void update_sprite_pos_2(my_sprite_t *my_sprite, int type)
{
    sfIntRect sprite_size = get_sprite_size(my_sprite->sprite);
    switch (type) {
        case TOP_CENTER:
            my_sprite->position.x = (WIDTH / 2) - (sprite_size.width / 2);
            my_sprite->position.y = (HEIGHT / 6) - (sprite_size.height / 2);
            break;
    }
}

void update_sprite_pos(my_sprite_t *my_sprite, int type)
{
    sfIntRect sprite_size = get_sprite_size(my_sprite->sprite);
    switch (type) {
        case CENTER:
            my_sprite->position.x = (WIDTH / 2) - (sprite_size.width / 2);
            my_sprite->position.y = (HEIGHT / 2) - (sprite_size.height / 2);
            break;
        case LEFT_BOTTOM_CORNER:
            my_sprite->position.y = (HEIGHT) - (sprite_size.height);
            break;
        case LEFT_TOP_CORNER:
            break;
        case RIGHT_BOTTOM_CORNER:
            my_sprite->position.x = (WIDTH) - (sprite_size.width);
            my_sprite->position.y = (HEIGHT) - (sprite_size.height);
            break;
        case RIGHT_TOP_CORNER:
            my_sprite->position.x = (WIDTH) - (sprite_size.width);
            break;
    }
    update_sprite_pos_2(my_sprite, type);
}

sfIntRect get_sprite_size(sfSprite *sprite)
{
    sfIntRect size = sfSprite_getTextureRect(sprite);
    sfVector2f scale = sfSprite_getScale(sprite);
    size.height *= scale.y;
    size.width *= scale.x;
    return size;
}

bool mouse_over_sprite(sfRenderWindow *window, my_sprite_t *my_sprite)
{
    if (!my_sprite->should_show) {
        return false;
    }
    sfIntRect rect = get_sprite_size(my_sprite->sprite);
    rect.left = my_sprite->position.x;
    rect.top = my_sprite->position.y;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    bool hor_collision = mouse.x >= rect.left && mouse.x <= rect.left + rect.width;
    bool ver_collision = mouse.y >= rect.top && mouse.y <= rect.top + rect.height;
    return hor_collision && ver_collision;
}