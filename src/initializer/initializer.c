/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** initializer
*/

#include "my.h"

void sprite_setup(defender_t *my_defender)
{
    my_defender->game_background = setup_sprite(GAME_BACKGROUND, 1.0);
    my_defender->menu_background = setup_sprite(MENU_BACKGROUND, 1.0);
    my_defender->play_button = setup_sprite(PLAY_BUTTON, 0.85);
    my_defender->close_button = setup_sprite(CLOSE_BUTTON, 1.25);
    my_defender->home_button = setup_sprite(HOME_BUTTON, 0.75);
    my_defender->home_title = setup_sprite(HOME_TITLE, 1.5);
    my_defender->fire_icon = setup_icon(FIRE_ICON, 0.75);
    my_defender->freeze_icon = setup_icon(FREEZE_ICON, 0.75);
    my_defender->light_icon = setup_icon(LIGHT_ICON, 0.75);
    my_defender->game_music = setup_music(SONG_GAME);
}

void player_setup(defender_t *my_defender)
{
    my_defender->player = malloc(sizeof(player_t));
    my_defender->player->health = 3;
    my_defender->player->gold = 500;
    my_defender->player->playing = false;
}

void reset_defender(defender_t *my_defender)
{
    my_defender->pause = false;
    my_defender->should_clock = true;
    my_defender->game_background->should_show = false;
    my_defender->menu_background->should_show = true;
    my_defender->home_title->should_show = true;
    my_defender->mobs_size = 0;
    player_setup(my_defender);
}

defender_t *new_defender()
{
    update_seed();
    defender_t *my_defender = malloc(sizeof(defender_t));
    my_defender->window = create_window();
    my_defender->should_clock = true;
    my_defender->clock = sfClock_create();
    my_defender->waveTicks = 50;
    player_setup(my_defender);
    sprite_setup(my_defender);
    mob_setup(my_defender);
    return my_defender;
}