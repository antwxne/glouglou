/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my_str_is_num
*/

#include <stddef.h>
#include "my_string.h"

bool my_str_is_num(char const *str)
{
    unsigned int i = 0;
    if (str == NULL)
        return (false);
    if (str[0] == '-')
        i += 1;
    for (; str[i] != '\0'; i++)
        if (!(char_is_num(str[i])))
            return (false);
    return (true);
}