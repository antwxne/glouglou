/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_delete_nodes
*/

#include <stdlib.h>
#include "mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *to_free;

    for (; *begin != NULL && cmp(data_ref, (*begin)->data) == 0;) {
        to_free = *begin;
        *begin = (*begin)->next;
        free(to_free);
    }
    for (linked_list_t *temp = *begin; temp->next != NULL; temp = temp->next) {
        if (cmp(data_ref, temp->next->data) == 0) {
            to_free = temp->next;
            temp->next = temp->next->next;
            free(to_free);
        }
    }
    return (0);
}