/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** do_op
*/

#include <stdio.h>
#include "my_string.h"
#include "my_opp.h"

bool do_op(int nb[2], char *op)
{
    for (unsigned int i = 0; i < 6; i++)
        if (my_strcmp(op, OPERATORS_FUNCS[i].ope) == 0)
            return OPERATORS_FUNCS[i].fct(nb);
    return false;
}
