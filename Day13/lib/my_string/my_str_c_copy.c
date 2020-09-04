/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my_str_c_copy
*/

#include <stdlib.h>

unsigned int my_strlen_c(char const *str, char c);

char *my_str_c_copy(char const *str, char c)
{
    unsigned int len = my_strlen_c(str, c);
    char *dest = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (dest == NULL)
        return (NULL);
    for (; str[i] != c; i++)
        dest[i] = str[i];
    dest[i] = 0;
    return (dest);
}