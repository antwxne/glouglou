/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** tests_day10
*/

#include <string.h>
#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "btree.h"

Test(btree_create_node, test_1)
{
    void *item = (void *)42;
    btree_t *node = btree_create_node(item);

    cr_assert_eq(node->data, item, "Got: %d | Expected: %d\n", node->data, item);
    cr_assert_null(node->left);
    cr_assert_null(node->right);
    free(node);
}


Test(btree_create_node, test_2)
{
    void *item = (void *)"plouf";
    btree_t *node = btree_create_node(item);

    cr_assert_str_eq(node->item, item, "Got: %s | Expected: %s\n", node->data, item);
    cr_assert_null(node->left);
    cr_assert_null(node->right);
    free(node);
}