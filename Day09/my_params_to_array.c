/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

#include <stdlib.h>
#include "struct.h"

char **my_str_to_word_array(char *str);

static int my_strlen(char *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return len;
}

static char *my_strdup(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    if (dest == NULL)
        return NULL;
    for (; str[i] != '\0'; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return dest;
}

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *dest= malloc(sizeof(*dest) * (ac + 1));
    int i = 0;

    if (dest == NULL)
        return NULL;
    for (; i < ac; i++) {
        dest[i].lenght = my_strlen(av[i]);
        dest[i].str = av[i];
        dest[i].copy = my_strdup(av[i]);
        dest[i].word_array = my_str_to_word_array(av[i]);
    }
    dest[i].str = 0;
    return dest;
}