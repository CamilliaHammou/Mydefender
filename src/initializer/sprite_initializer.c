/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** sprite_initializer
*/

#include "my.h"

void update_sprite_scale(my_sprite_t *my_sprite, float scale)
{
    sfSprite_setScale(my_sprite->sprite, to_vector(scale, scale));
}

icon_t *setup_icon(char *filepath, float scaling)
{
    icon_t *my_icon = malloc(sizeof(icon_t));
    my_icon->my_sprite = setup_sprite(filepath, scaling);
    my_icon->copy = setup_sprite(filepath, scaling * 0.5);
    my_icon->copy->should_show = false;
    return my_icon;
}

my_sprite_t *setup_sprite(char *filepath, float scaling)
{
    my_sprite_t *my_sprite = malloc(sizeof(my_sprite_t));
    my_sprite->should_show = true;
    my_sprite->sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    if (texture != NULL) {
        sfSprite_setTexture(my_sprite->sprite, texture, sfTrue);
    }
    my_sprite->scaling = scaling;
    sfSprite_setScale(my_sprite->sprite, to_vector(scaling, scaling));
    return my_sprite;
}

my_music_t *setup_music (char *filepath)
{
    my_music_t *my_music = malloc(sizeof(my_music_t));
    my_music->game_mus = sfMusic_createFromFile(filepath);
    if (my_music->game_mus!= NULL) {
        sfMusic_play(my_music->game_mus);
        sfMusic_setLoop(my_music->game_mus, sfTrue);
    }
}