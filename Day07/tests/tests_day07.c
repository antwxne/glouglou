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

Test (my_strcat, test)
{
    char dest[255] = {0};
    char *str = strcpy(dest, "plif");
    char *got = my_strcat(str, "plouf");
    char *expected = strcat(str, "plouf");

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
}