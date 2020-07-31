/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** print_params
*/

#include <unistd.h>
#include <stddef.h>

static int my_strlen(char *str)
{
    int len = 0;

    for (; str[len]; len++);
    return (len);
}

static void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

int main(int ac, char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        my_putstr(av[i]);
        my_putstr("\n");
    }
    return (0);
}