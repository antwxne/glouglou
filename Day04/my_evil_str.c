/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_evil_str
*/

static int lenstr(char *str)
{
    int len = 0;

    for (;str[len] != '\0'; len++);
    return (len);
}

char *my_evil_str(char *str)
{
    int len = lenstr(str) - 1;
    char tmp;

    for (int i = 0; i < len; i++, len--) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return str;
}