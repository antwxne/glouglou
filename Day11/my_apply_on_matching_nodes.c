/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_apply_on_matching_nodes
*/

#include <stdlib.h>
#include "mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
    void const *data_ref, int (*cmp)())
{
    for (; begin != NULL; begin = begin->next)
        if (cmp(begin->data, data_ref) == 0)
            f(begin->data);
    return 0;
}