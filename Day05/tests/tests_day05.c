/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** tests_day03
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include <math.h>
#include "test.h"

Test (task01, test)
{
    int got = my_compute_factiorial_it(5);
    int expected = 120;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task01, test_big)
{
    int got = my_compute_factiorial_it(45);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task01, test_null)
{
    int got = my_compute_factiorial_it(0);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task01, test_negativ)
{
    int got = my_compute_factiorial_it(-5);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task02, test)
{
    int got = my_compute_factiorial_rec(5);
    int expected = 120;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task02, test_big)
{
    int got = my_compute_factiorial_rec(45);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task02, test_null)
{
    int got = my_compute_factiorial_rec(0);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task02, test_negativ)
{
    int got = my_compute_factiorial_rec(-5);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task03, test)
{
    int got = my_compute_power_it(6, 8);
    int expected = pow(6, 8);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task03, test_null)
{
    int got = my_compute_power_it(6, 0);
    int expected = pow(6, 0);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (task03, test_negativ)
{
    int got = my_compute_power_it(6, -8);
    int expected = pow(6, -8);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}