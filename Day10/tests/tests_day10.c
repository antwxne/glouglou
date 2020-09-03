/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** tests_day10
*/

#include <string.h>
#include "test.h"

Test(sort_word_array, test1)
{
    char **got = my_str_to_word_array("zebi plif aze caca");
    char *expected[] = {"aze", "caca", "plif", "zebi", NULL};

    my_sort_word_array(got);
    for (unsigned int i = 0; expected[i] != NULL && got[i] != NULL; i++) {
        cr_assert_str_eq(got[i], expected[i], "Got: %s | Expected: %s | index: %d\n",
            got[i], expected[i], i);
        free(got[i]);
    }
    free(got);
}

Test(sort_word_array_advanced, test1)
{
    char **got = my_str_to_word_array("zebi plif aze caca");
    char *expected[] = {"aze", "caca", "plif", "zebi", NULL};

    my_advanced_sort_word_array(got, &strcmp);
    for (unsigned int i = 0; expected[i] != NULL && got[i] != NULL; i++) {
        cr_assert_str_eq(got[i], expected[i], "Got: %s | Expected: %s | index: %d\n",
            got[i], expected[i], i);
        free(got[i]);
    }
    free(got);
}