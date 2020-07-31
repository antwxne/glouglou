/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_putstr
*/

#include <unistd.h>

static int my_strlen(char *str)
{
    int len = 0;

    for (; str[len]; len++);
    return (len);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}