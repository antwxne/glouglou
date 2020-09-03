/*
** EPITECH PROJECT, 2024
** Day10
** File description:
** Created by antoine,
*/

#include "advanced_do_op.h"

bool get_args(char **av);

int main(int ac, char **av)
{
    if (ac != 4)
        return 84;
    return get_args(av) ? 0 : 84;
}