/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** my_show_word_array
*/

#include <stddef.h>
#include <unistd.h>

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

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return (0);
}