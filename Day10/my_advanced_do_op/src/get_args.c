/*
** EPITECH PROJECT, 2024
** Day10
** File description:
** Created by antoine,
*/

#include "my_string.h"
#include "my_printf.h"
#include "my_opp.h"

bool do_op(int nb[2], char *op);

static int *get_numbers(char *nb1, char *nb2)
{
    static int dest[2];

    dest[0] = my_getnbr(nb1);
    dest[1] = my_getnbr(nb2);
    return (dest);
}

static char *get_ope(char *av)
{
    for (unsigned int i = 0; i < 6; i++) {
        if (my_strcmp(av, OPERATORS_FUNCS[i].ope) == 0)
            return OPERATORS_FUNCS[i].ope;
    }
    return OPERATORS_FUNCS[5].ope;
}

bool get_args(char **av)
{
    int *nb = get_numbers(av[1], av[3]);
    char *op = get_ope(av[2]);

    return do_op(nb, op);
}
