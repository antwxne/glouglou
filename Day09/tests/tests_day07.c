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

Test (my_str_to_word_array, test1)
{
    char **got = my_str_to_word_array("plif plaf, plouf");
    char *expected[] = {"plif", "plaf", "plouf", NULL};

    for (int i = 0; expected[i] != NULL; i++) {
        cr_assert_str_eq(got[i], expected[i],
            "Got: %s | Expected: %s | i = %d\n", got[i], expected[i], i);
        free(got[i]);
    }
    free(got);
}