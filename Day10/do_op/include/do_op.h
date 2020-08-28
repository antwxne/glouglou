/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** do_op
*/

#ifndef DO_OP_H_
#define DO_OP_H_

#include <stdbool.h>

bool get_args(char **av);
bool do_op(int nb[2], char operator);

bool my_add(int nb[2]);
bool my_sub(int nb[2]);
bool my_mul(int nb[2]);
bool my_div(int nb[2]);
bool my_modulo(int nb[2]);

#endif /* !DO_OP_H_ */
