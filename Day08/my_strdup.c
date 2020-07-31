/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** my_strdup
*/

#include <stdlib.h>

static int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len]; len++);
    return (len);
}

char *my_strdup(char const *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    if (dest == NULL)
        return (NULL);
    for (; str[i]; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}