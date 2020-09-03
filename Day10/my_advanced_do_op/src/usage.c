/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** usage
*/

#include <stdbool.h>
#include "my_printf.h"
#include "my_opp.h"

bool my_usage(int nb[2])
{
    my_printf("error: only [ %s %s %s %s %s ] are supported",
    OPERATORS_FUNCS[0].ope,
    OPERATORS_FUNCS[1].ope,
    OPERATORS_FUNCS[2].ope,
    OPERATORS_FUNCS[3].ope,
    OPERATORS_FUNCS[4].ope);
    return false;
}
