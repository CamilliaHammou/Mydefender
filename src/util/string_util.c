/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** string_util
*/

#include "my.h"

char **my_str_to_word_array(char *str, char separation)
{
    char **map = malloc(sizeof(char *) * 50);
    map[0] = malloc(sizeof(char) * 50);
    int x = 0, y = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separation) {
            map[y][x++] = str[i];
            map[++y] = malloc(sizeof(char) * 50);
            x = 0;
        } else {
            map[y][x++] = str[i];
        }
    }
    return map;
}

char *my_strcopy(char *str, char *dest)
{
    while (*dest++ = *str++);
}

char *my_strdup(char *str)
{
    char *dest = malloc(sizeof(char) * my_strlen(str) + 1);
    my_strcopy(str, dest);
    return dest;
}

int my_strlen(char *str)
{
    int size = 0;
    while (str[size++] != '\0');
    return size - 1;
}
