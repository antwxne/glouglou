/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** tests_day03
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include "test.h"

Test (task01, test)
{
    int a = 1;
    int b = 42;

    my_swap(&a, &b);
    cr_assert(a == 42 && b == 1);
}

Test (task02, test)
{
    cr_redirect_stdout();

    cr_assert_eq(my_putstr("plouf"), 0);
    cr_assert_stdout_eq_str("plouf");
}

Test (task03, test)
{
    int got = my_strlen("efgqegq");
    int expected = strlen("efgqegq");

    cr_assert(got == expected, "Got: %d and expected: %d\n", got, expected);
}

Test (task04, test)
{
    char *got = my_evil_str(strdup("azerty"));
    char *expected = "ytreza";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(got);
}