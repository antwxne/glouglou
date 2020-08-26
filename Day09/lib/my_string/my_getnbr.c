/*
** EPITECH PROJECT, 2019
** get nbr
** File description:
** get nbr
*/

#include <stddef.h>
#include <stdbool.h>
#include "my_string.h"

int my_getnbr(char const *str)
{
    int result = 0;
    unsigned int i = 0;
    bool minus = false;

    if (str == NULL)
        return (0);
    if (str[0] == '-') {
        minus = true;
        i++;
    }
    for (; char_is_num(str[i]) && str[i] != '\0'; i++)
        result = result * 10 + (str[i] - '0');
    return (minus == true ? result * -1 : result);
}
