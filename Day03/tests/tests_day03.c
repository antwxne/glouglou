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

Test (task04, positiv)
{
    cr_redirect_stdout();
    cr_assert_eq(my_isneg(3), 0);
    cr_assert_stdout_eq_str("P");
}

Test (task04, negativ)
{
    cr_redirect_stdout();
    cr_assert_eq(my_isneg(-3), 0);
    cr_assert_stdout_eq_str("N");
}

Test (task04, null)
{
    cr_redirect_stdout();
    cr_assert_eq(my_isneg(0), 0);
    cr_assert_stdout_eq_str("P");
}

Test (task07, positiv)
{
    cr_redirect_stdout();
    cr_assert_eq(my_putnbr(7), 0);
    cr_assert_stdout_eq_str("7");
}

Test (task07, positiv_big)
{
    cr_redirect_stdout();
    cr_assert_eq(my_putnbr(7689189), 0);
    cr_assert_stdout_eq_str("7689189");
}

Test (task07, negativ)
{
    cr_redirect_stdout();
    cr_assert_eq(my_putnbr(-7), 0);
    cr_assert_stdout_eq_str("-7");
}

Test (task07, negativ_big)
{
    cr_redirect_stdout();
    cr_assert_eq(my_putnbr(-7689189), 0);
    cr_assert_stdout_eq_str("-7689189");
}

Test (task07, null)
{
    cr_redirect_stdout();
    cr_assert_eq(my_putnbr(0), 0);
    cr_assert_stdout_eq_str("0");
}