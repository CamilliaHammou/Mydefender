/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** string_util_3
*/

#include "my.h"

int count_my_columns(char **map)
{
    int counter = 0;
    while (map[counter] != NULL) {
        counter++;
    }
    return counter;
}

int count_my_character(char *str, char search)
{
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == search) {
            counter++;
        }
    }
    return counter;
}