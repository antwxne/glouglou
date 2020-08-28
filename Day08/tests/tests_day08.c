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

Test (my_strdup, test)
{
    char *got = my_strdup("plouf");
    char *expected = strdup("plouf");

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(got);
    free(expected);
}

Test (concat_params, test)
{
    char *argv[] = {"plif", "plaf", "plouf", NULL};
    char *got = concat_params(3, argv);
    char *expected = "plif\nplaf\nplouf";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(got);
}

Test (my_show_word_array, test)
{
    char *array[] = {"patate", "plouf", "caca", "chasse", 0};
    char *expected = "patate\nplouf\ncaca\nchasse\n";
    
    cr_redirect_stdout();
    my_show_word_array(array);
    cr_assert_stdout_eq_str(expected);
}