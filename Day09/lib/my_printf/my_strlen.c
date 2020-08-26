/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

#include <stdlib.h>

unsigned int my_strlen(char const *str)
{
    unsigned int len = 0;

    if (str == NULL)
        return (0);
    for (; str[len] != '\0'; len++);
    return (len);
}
