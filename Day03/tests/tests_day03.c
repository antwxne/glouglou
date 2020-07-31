/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** tests_day03
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "test.h"

Test (task01, test)
{
    cr_redirect_stdout();
    cr_assert_eq(my_print_alpha(), 0);
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz");
}

Test (task02, test)
{
    cr_redirect_stdout();
    cr_assert_eq(my_print_revalpha(), 0);
    cr_assert_stdout_eq_str("zyxwvutsrqponmlkjihgfedcba");
}

Test (task03, test)
{
    cr_redirect_stdout();
    cr_assert_eq(my_print_digit(), 0);
    cr_assert_stdout_eq_str("0123456789");
}