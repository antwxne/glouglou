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
#include "tests.h"

static void free_list(linked_list_t *list)
{
    for (linked_list_t *next = list; next != NULL; list = next) {
        next = list->next;
        free(list);
    }
}

Test(my_params_to_list, test1)
{
    char *av[] = {"plif", "plaf", "plouf"};
    int ac = 3;
    linked_list_t *list = my_params_to_list(ac, av);
    linked_list_t *temp = list;
    int node = 0;

    for (int i = ac - 1; i >= 0 && temp != NULL; i--, node++, temp = temp->next)
        cr_assert_str_eq(temp->data, av[i], "Got: %s | Expected: %s | \n", temp->data, av[i]);
    free_list(list);
}

Test(my_list_size, test1)
{
    int ac = 3;
    char *av[] = {"plif", "plouf", "caca"};
    linked_list_t *list = my_params_to_list(ac, av);
    int got = my_list_size(list);
    int got2 = my_list_size(list);
    int expected = ac;

    cr_assert_eq(got, expected, "Got: %d | Expected: %d\n", got, expected);

    cr_assert_eq(got2, expected, "Got2: %d | Expected: %d\n", got2, expected);
    free_list(list);
}

Test(my_rev_list, test1)
{
    char *av[] = {"plif", "plaf", "plouf"};
    int ac = 3;
    linked_list_t *list = my_params_to_list(ac, av);

    my_rev_list(&list);
    ac -= 1;
    for (linked_list_t *temp = list; ac >= 0 && temp != NULL; ac--, temp = temp->next)
        cr_assert_str_eq(temp->data, av[ac], "Got:%s | Expected: %s\n", temp->data, av[ac]);
    free_list(list);
}

Test(my_apply_on_nodes, test1)
{
    char *av[] = {"plif", "plaf", "plouf"};
    int ac = 3;
    linked_list_t *list = my_params_to_list(ac, av);
    int c_caca(void *str){write(1, str, strlen(str));}

    cr_redirect_stdout();
    my_apply_on_nodes(list, &c_caca);
    cr_assert_stdout_eq_str("ploufplafplif");
    free_list(list);
}