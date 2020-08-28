/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** do_op
*/

#include <stdio.h>
#include "do_op.h"

static bool (*op[])(int nb[2]) = {
    &my_add,
    &my_sub,
    &my_mul,
    &my_div,
    &my_modulo
};

static const char *operators = "+-*/%";

bool do_op(int nb[2], char operator)
{
    for (unsigned int i = 0; operators[i] != '\0'; i++)
        if (operator == operators[i])
            return op[i](nb);
    return false;
}