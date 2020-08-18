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

Test(abs, test_pos)
{
    int got = ABS(6);
    int expected = 6;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test(abs, test_negatif)
{
int got = ABS(-6);
int expected = 6;

cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}