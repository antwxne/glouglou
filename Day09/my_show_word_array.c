/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

#include <stdlib.h>
#include <unistd.h>

static int my_strlen(char *str)
{
    int len = 0;

    for (; str[len]; len++);
    return len;
}

static void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

void my_show_word_array(char **array)
{
    for (unsigned int i; array[i] != NULL; i++)
        my_putstr(array[i]);
}
