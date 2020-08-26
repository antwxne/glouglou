/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my_str_is_num
*/

#include <stdbool.h>
#include <stddef.h>
#include "my_string.h"

bool my_str_is_positiv(char const *str)
{
    if (str == NULL)
        return (false);
    for (unsigned int i = 0; str[i] != '\0'; i++)
        if (!(char_is_num(str[i])))
            return (false);
    return (true);
}