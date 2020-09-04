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
int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
    void const *data_ref, int (*cmp)());
linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
    int (*cmp)());
int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)());

#endif /* !TESTS_H_ */
