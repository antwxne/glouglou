/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my_str_c_len
*/

#include <stdlib.h>

unsigned int my_strlen_c(char const *str, char const c)
{
    unsigned int len = 0;

    if (str == NULL)
        return (0);
    for (; str[len] != '\0' && str[len] != c; len++);
    return (len);
}