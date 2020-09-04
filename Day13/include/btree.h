/*
** EPITECH PROJECT, 2020
** Day13
** File description:
** btree
*/

#ifndef BTREE_H_
#define BTREE_H_

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *data;
} btree_t;

btree_t *btree_create_node(void *item);


#endif /* !BTREE_H_ */
