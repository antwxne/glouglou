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
    char dest[255] = {0};
    char dest2[255] = {0};
    char *got = my_strcpy(dest, "plouf");
    char *expected = strcpy(dest2, "plouf");

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
}

Test (strncpy, test)
{
    char dest[255] = {0};
    char dest2[255] = {0};
    char *got = my_strncpy(dest, "plouf", 3);
    char *expected = strncpy(dest2, "plouf", 3);

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
}

Test (my_revstr, test)
{
    char *got = my_revstr(strdup("azert"));
    char *expected = "treza";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(got);
}

Test (my_strstr, test_ok)
{
    char *str = strdup("ah oui ca va pas oulala");
    char *got = my_strstr(str, "ca");
    char *expected = strstr(str, "ca");

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(str);
}

Test (my_strstr, test_null)
{
    char *str = strdup("ah oui ca va pas oulala");
    char *got = my_strstr(str, "oupla");
    char *expected = strstr(str, "oupla");

    cr_assert_null(got);
    cr_assert_null(expected);
    free(str);
}

Test (my_strcmp, test_ok)
{
    char *s1 = "plouf";
    char *s2 = "plouf";
    int got = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_strcmp, test_nok)
{
    char *s1 = "plouf";
    char *s2 = "ploupi";
    int got = my_strcmp(s1, s2);
    int expected = strcmp(s1, s2);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_strncmp, test_ok)
{
    char *s1 = "plouf";
    char *s2 = "ploaaaaaa";
    int n = 3;
    int got = my_strncmp(s1, s2, n);
    int expected = strncmp(s1, s2, n);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_strncmp, test_nok)
{
    char *s1 = "plouf";
    char *s2 = "ploddda";
    int n = 4;
    int got = my_strncmp(s1, s2, n);
    int expected = strncmp(s1, s2, n);

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_strupcase, test)
{
    char *str = strdup("Ola, cOmo estA!");
    char *got = my_strupcase(str);
    char *expected = "OLA, COMO ESTA!";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(str);
}

Test (my_strlowcase, test)
{
    char *str = strdup("Ola, cOmo estA!");
    char *got = my_strlowcase(str);
    char *expected = "ola, como esta!";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(str);
}

Test (my_strcapitalise, test)
{
    char *str = strdup(" binks to , binks");
    char *got = my_strcapitalise(str);
    char *expected = " Binks To , Binks";

    cr_assert_str_eq(got, expected, "Got: %s | Expected: %s\n", got, expected);
    free(str);
}

Test (my_str_is_alpha, test_ok)
{
    char *str = "binks";
    int got = my_str_is_alpha(str);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_str_is_alpha, test_ok_empty)
{
    char *str = "";
    int got = my_str_is_alpha(str);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_str_is_alpha, test_nok)
{
    char *str = " binks to , binks";
    int got = my_str_is_alpha(str);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_str_isnum, test_ok)
{
    char *str = "101214";
    int got = my_str_isnum(str);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_str_isnum, test_ok_empty)
{
    char *str = "";
    int got = my_str_isnum(str);
    int expected = 1;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}

Test (my_str_isnum, test_nok)
{
    char *str = "10 12 14";
    int got = my_str_isnum(str);
    int expected = 0;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);
}