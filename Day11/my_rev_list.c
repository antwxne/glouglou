/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_rev_list
*/

#include <stdlib.h>
#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev = NULL;
    linked_list_t *next;

    while (*begin != NULL) {
        next = (*begin)->next;
        (*begin)->next = prev;
        prev = *begin;
        *begin = next;
    }
}