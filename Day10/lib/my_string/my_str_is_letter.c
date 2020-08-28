/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_str_isnum
*/

#include <stdbool.h>
#include <stddef.h>
#include "my_string.h"

bool str_is_letter(char const *str)
{
    if (str == NULL)
        return (false);
    for (unsigned int i = 0; str[i] != '\0'; i++)
        if (!(char_is_letter(str[i])))
            return (false);
    return (true);
}