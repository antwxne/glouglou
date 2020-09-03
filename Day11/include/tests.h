/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** tests
*/

#ifndef TESTS_H_
#define TESTS_H_

#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av);
int my_list_size(linked_list_t const *begin);
void my_rev_list(linked_list_t **begin);
int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));

#endif /* !TESTS_H_ */
