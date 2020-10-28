/*
** EPITECH PROJECT, 2024
** Day13
** File description:
** Created by antoine,
*/

#include <stdlib.h>
#include "btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root == NULL)
        return;
    applyf(root->item);
    btree_apply_infix(root->left, applyf);
    btree_apply_infix(root->right, applyf);
}