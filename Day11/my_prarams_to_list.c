/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_prarams_to_list
*/

#include <stdbool.h>
#include <stdlib.h>
#include "mylist.h"
#include "my_string.h"

static bool create_node(linked_list_t **list, char *str)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));

    if (element == NULL)
        return false;
    element->data = str;
    element->next = *list;
    *list = element;
    return true;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < ac; i++)
        if (create_node(&list, av[i]) == false)
            return NULL;
    return list;
}