/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_revstr
*/

static int lenstr(char *str)
{
    int len = 0;

    for (; str[len] != 0; len++);
    return (len);
}

char *my_revstr(char *str)
{
    int len = lenstr(str) - 1;
    char temp;

    for (int i = 0; i < len; i++, len--) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
    return (str);
}