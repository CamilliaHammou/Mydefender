/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** vector
*/

#include "my.h"

sfVector2f to_vector(float x, float y)
{
    sfVector2f my_vector;
    my_vector.x = x;
    my_vector.y = y;
    return my_vector;
}