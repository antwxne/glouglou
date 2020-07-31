/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return (len);
}