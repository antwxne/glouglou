/*
** EPITECH PROJECT, 2024
** Day10
** File description:
** Created by antoine,
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "do_op.h"

Test(add, test_1)
{
    cr_redirect_stdout();
    my_add((int []) {2, 4});
    cr_assert_stdout_eq_str("6\n");
}

Test(sub, test_1)
{
    cr_redirect_stdout();
    my_sub((int []) {2, 4});
    cr_assert_stdout_eq_str("-2\n");
}

Test(mul, test_1)
{
    cr_redirect_stdout();
    my_mul((int []) {2, 4});
    cr_assert_stdout_eq_str("8\n");
}

Test(div, test_ok)
{
    cr_redirect_stdout();
    my_div((int []) {4, 2});
    cr_assert_stdout_eq_str("2\n");
}

Test(div, test_ko)
{
    cr_redirect_stdout();
    my_div((int []) {4, 0});
    cr_assert_stdout_eq_str("Stop: division by zero\n");
}

Test(modulo, test_ok)
{
    cr_redirect_stdout();
    my_modulo((int []) {4, 2});
    cr_assert_stdout_eq_str("0\n");
}

Test(modulo, test_ko)
{
    cr_redirect_stdout();
    my_modulo((int []) {4, 0});
    cr_assert_stdout_eq_str("Stop: modulo by zero\n");
}