/*
** EPITECH PROJECT, 2024
** Day10
** File description:
** Created by antoine,
*/

#include "do_op.h"
#include "my_string.h"
#include "my_printf.h"

static int *get_numbers(char *nb1, char *nb2)
{
    static int dest[2];

    dest[0] = my_getnbr(nb1);
    dest[1] = my_getnbr(nb2);
    return (dest);
}

static char get_operator(char *op_str)
{
    char *operators = "+-/*%";

    for (unsigned int i = 0; operators[i] != '\0'; i++)
        if (operators[i] == op_str[0])
            return (op_str[0]);
    return '\0';
}

bool get_args(char **av)
{
    int *nb;
    char operator = get_operator(av[2]);

    nb = get_numbers(av[1], av[3]);
    if (operator == '\0') {
        my_putstr("0\n");
        return false;
    } else
        return do_op(nb, operator);
}