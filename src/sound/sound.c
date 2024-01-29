/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** sound
*/

#include "my.h"

void destroy_sound(defender_t *my_defender)
{
    sfMusic_destroy(my_defender->song);
}