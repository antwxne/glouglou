/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** operation
*/

#include <stdbool.h>
#include "my_printf.h"

bool my_add(int nb[2])
{
    my_printf("%d\n", nb[0] + nb[1]);
    return true;
}

bool my_sub(int nb[2])
{
    my_printf("%d\n", nb[0] - nb[1]);
    return true;
}

bool my_mul(int nb[2])
{
    my_printf("%d\n", nb[0] * nb[1]);
    return true;
}

bool my_div(int nb[2])
{
    if (nb[1] == 0) {
        my_printf("Stop: division by zero\n");
        return false;
    }
    my_printf("%d\n", nb[0] / nb[1]);
    return true;
}

bool my_modulo(int nb[2])
{
    if (nb[1] == 0) {
        my_printf("Stop: modulo by zero\n");
        return false;
    }
    my_printf("%d\n", nb[0] % nb[1]);
    return true;
}