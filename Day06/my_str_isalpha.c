/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_str_isalpha
*/

#define IS_LETTER(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

int my_str_is_alpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!IS_LETTER(str[i]))
            return (0);
    return 1;
}