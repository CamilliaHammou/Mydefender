/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** random_generator
*/

#include "my.h"

void update_seed(void)
{
    srand(time(NULL));
}

int random_int(int range)
{
    return rand() % (range + 1);
}

int random_in_range(int min, int max)
{
    return random_int(max - min) + min;
}