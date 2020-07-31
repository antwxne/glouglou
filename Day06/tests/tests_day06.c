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

Test (strcpy, test)
{
    char dest[255];
    char dest2[255];
    char *got = my_strcpy(dest, "plouf");
    char *expected = strcpy(dest2, "plouf");

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
}
