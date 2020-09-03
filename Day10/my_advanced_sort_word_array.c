/*
** EPITECH PROJECT, 2020
** Day10
** File description:
** my_advanced_sort_word_array
*/

#include <stdbool.h>
#include <stddef.h>
#include "my_string.h"

static void swap(char **ptr1, char **ptr2)
{
    char *tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int my_advanced_sort_word_array(char **tab,
    int (*cmp)(char const *, char const *))
{
    bool unsorted = false;
    unsigned int i = 0;

    do {
        unsorted = false;
        i = 0;
        for (; tab[i + 1] != NULL; i++)
            if (cmp(tab[i], tab[i + 1]) > 0) {
                unsorted = true;
                swap(&tab[i], &tab[i + 1]);
            
    } while (unsorted);
    return (0);
}
