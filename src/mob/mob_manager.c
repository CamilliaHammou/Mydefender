/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mob_manager
*/

#include "my.h"

void mob_setup(defender_t *my_defender)
{
    my_defender->mobs = malloc(sizeof(mob_t) * 1000);
}

mob_t *new_mob()
{
    mob_t *mob = malloc(sizeof(mob_t));
    mob->health = 500;
    mob->speed = 2;
    mob->type = 1;
    mob->my_sprite = setup_sprite(MONSTER_KNIGHT, 0.6);
    mob->my_sprite->position.x = WIDTH + 200;
    mob->my_sprite->position.y = 75;
    return mob;
}

void add_mob(defender_t *my_defender)
{
    my_defender->mobs[my_defender->mobs_size++] = new_mob();
}

void update_mobs(defender_t *my_defender)
{
    if (++my_defender->waveTicks >= my_defender->nextWave) {
        add_mob(my_defender);
        my_defender->waveTicks = 0;
        my_defender->nextWave = random_in_range(20, 350);
    }
    for (int i = 0; i < my_defender->mobs_size; i++) {
        handle_movement(my_defender->mobs[i], my_defender);
        if (my_defender->ticks % 9 == 0) {
            update_animation(my_defender->mobs[i]);
        }
    }
}