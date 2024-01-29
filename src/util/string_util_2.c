/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** string_util_2
*/

#include "my.h"

bool start_with(char *content, char *search)
{
    for (int i = 0; search[i] != '\0'; i++) {
        if (content[i] != search[i] || content[i] == '\0') {
            return false;
        }
    }
    return true;
}

char *add_to_str(char *str, char *addition)
{
    int total_size = my_strlen(str) + my_strlen(addition);
    char *new_str = malloc(sizeof(char) * (total_size + 2));
    int total_counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        new_str[total_counter++] = str[i];
    }
    for (int i = 0; addition[i] != '\0'; i++) {
        new_str[total_counter++] = addition[i];
    }
    new_str[total_counter++] = '\0';
    return new_str;
}


bool equals(char *str, char *compared)
{
    if (my_strlen(str) != my_strlen(compared)) {
        return false;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] != compared[i + 1]) {
            return false;
        }
        if (str[i] != compared[i]) {
            return false;
        }
    }
    return true;
}
