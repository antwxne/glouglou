/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_apply_on_nodes
*/

#include <stdlib.h>
#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    for (; begin != NULL; begin = begin->next)
        f(begin->data);
    return 0;
}