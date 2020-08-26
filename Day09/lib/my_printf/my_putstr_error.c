/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_putstr_error
*/

#include <unistd.h>

unsigned int my_strlen(char const *str);

void my_putstr_error(char const *str)
{
    write(2, str, my_strlen(str));
}