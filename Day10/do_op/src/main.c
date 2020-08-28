/*
** EPITECH PROJECT, 2024
** Day10
** File description:
** Created by antoine,
*/

#include "do_op.h"

int main(int ac, char **av)
{
    if (ac != 4)
        return 84;
    return get_args(av) ? 0 : 84;
}