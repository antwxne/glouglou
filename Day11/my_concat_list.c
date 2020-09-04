/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_concat_list
*/

#include <stdlib.h>
#include "mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *temp = *begin1;

    for (; temp->next != NULL; temp = temp->next);
    temp->next = begin2;
}