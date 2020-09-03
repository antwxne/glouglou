/*
** EPITECH PROJECT, 2020
** lib
** File description:
** free arr
*/

#include <stdlib.h>

void free_int_arr(int **arr, unsigned int start)
{
    for (; arr[start] != NULL; start++)
        free(arr[start]);
    free(arr);
}
