/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** test
*/

#ifndef TEST_H_
#define TEST_H_

#include <criterion/criterion.h>

int my_sort_word_array(char **tab);
char **my_str_to_word_array(char *str);
int my_advanced_sort_word_array(char **tab, int (*cmp)(char const *, char const *));

#endif /* !TEST_H_ */
