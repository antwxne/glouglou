/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_find_node
*/

#include <stdlib.h>
#include "mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
    int (*cmp)())
{
    for (; begin != NULL; begin = begin->next)
        if (cmp(data_ref, begin->data) == 0)
            return begin;
    return NULL;
}