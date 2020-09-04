/*
** EPITECH PROJECT, 2020
** Day13
** File description:
** btree_create_node
*/

#include <stdlib.h>
#include "btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *element = malloc(sizeof(btree_t));

    if (element == NULL)
        return (NULL);
    element->data = item;
    element->left = 0;
    element->right = 0;
    return (element);
}