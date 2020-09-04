/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_merge
*/

#include <stdbool.h>
#include <stdlib.h>
#include "mylist.h"
#include "my_string.h"

static void my_sort(linked_list_t **begin, int(*cmp)())
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

void my_merge(linked_list_t **begin1, linked_list_t *begin2, int(*cmp)())
{
    linked_list_t *element;

    for (; begin2 != NULL; begin2 = begin2->next) {
        element = malloc(sizeof(linked_list_t));
        if (element == NULL)
            return;
        element->data = begin2->data;
        element->next = *begin1;
        *begin1 = element;
    }
    my_sort(begin1, cmp);
}