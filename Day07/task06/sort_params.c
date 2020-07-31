/*
** EPITECH PROJECT, 2020
** glouglou
** File description:
** sort_params
*/

#include <stdlib.h>

void my_putstr(char *str);
int my_strcmp(char const *s1, char const *s2);

static char **sorting(char **av)
{
    char *tmp = NULL;

    for (int i = 0; av[i + 1]; i++) {
        if (my_strcmp(av[i], av[i + 1]) > 0) {
            tmp = av[i];
            av[i] = av[i + 1];
            av[i + 1] = tmp;
            i = 0;
        }
    }
    return (av);
}

static void display(char **av)
{
    for (int i = 0; av[i]; i++) {
        my_putstr(av[i]);
        my_putstr("\n");
    }
}

int main(int ac, char **av)
{
    av = sorting(av);
    display(av);
    return (0);
}