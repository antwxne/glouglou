/*
** EPITECH PROJECT, 2020
** Day11
** File description:
** my_apply_on_nodes
*/

#include <stdlib.h>
#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    for (; begin != NULL; begin = begin->next)
        f(begin->data);
    return 0;
}

// linked_list_t *my_params_to_list(int ac, char * const *av);

// int main(int ac, char **av)
// {
//     linked_list_t *list = my_params_to_list(ac, av);
//         int c_caca(void *str){write(1, str, strlen(str));}

//     my_apply_on_nodes(list, &c_caca);
//     return 0;
// }