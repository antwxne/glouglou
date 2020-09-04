/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_sort_list
*/

#include <stdlib.h>
#include <stdbool.h>
#include "mylist.h"

void my_sort_list(linked_list_t **begin, int(*cmp)())
{
    bool unsorted;
    linked_list_t *temp;
    void *swap;

    if (*begin == NULL)
        return;
    do {
        unsorted = false;
        temp = *begin;
        while (temp->next != NULL) {
            if (cmp(temp->data, temp->next->data) > 0) {
                swap = temp->data;
                temp->data = temp->next->data;
                temp->next->data = swap;
                unsorted = true;
            }
            temp = temp->next;
        }
    } while (unsorted);
}