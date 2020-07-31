/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_getnbr
*/

#include <stdbool.h>

int my_getnbr(char const *str)
{
    int i = 0;
    bool negativ = false;
    int result = 0;

    if (str[i] == '-') {
        i += 1;
        negativ = true;
    }
    while (str[i] != '\0') {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    result *= negativ ? -1 : 1;
    return result;
}