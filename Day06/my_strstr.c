/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strstr
*/

#include <stddef.h>
#include <stdbool.h>

static bool it_contains(char *str, char const *sub_str)
{
    for (size_t i = 0; str[i] != 0 && sub_str[i] != 0; i++)
        if (str[i] != sub_str[i])
            return (false);
    return true;
}


char *my_strstr(char *str, char const *to_find)
{
    for (size_t i = 0; str[i] != 0; i++)
        if (it_contains(&str[i], to_find))
            return (&str[i]);
    return (NULL);
}