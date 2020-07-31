/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strcapitalize
*/

#include <stdbool.h>

#define IS_LETTER(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

char *my_strcapitalise(char *str)
{
    bool maj = true;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && maj) {
            str[i] -= 'a' - 'A';
            maj = false;
        }
        if (!IS_LETTER(str[i]))
            maj = true;
    }
    return (str);
}