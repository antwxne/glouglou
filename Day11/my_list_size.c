/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_list_size
*/

#include <stdlib.h>
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int len = 0;

    for (; begin != NULL; begin = begin->next, len++);
    return (len);
}