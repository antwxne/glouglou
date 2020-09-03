/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** my_opp
*/

#ifndef MY_OPP_H_
#define MY_OPP_H_

#include <stdbool.h>

bool my_add(int nb[2]);
bool my_sub(int nb[2]);
bool my_mul(int nb[2]);
bool my_div(int nb[2]);
bool my_mod(int nb[2]);
bool my_usage(int nb[2]);

static const struct operator
{
    char *ope;
    bool (*fct)(int *nb);
} OPERATORS_FUNCS[] = {
    {"plus", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
    };

#endif /* !MY_OPP_H_ */
