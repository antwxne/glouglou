/*
** EPITECH PROJECT, 2019
** revstr
** File description:
** revstr
*/

unsigned int my_strlen(char const *str);

char *my_revstr(char *str)
{
    unsigned int i = 0;
    unsigned int len = my_strlen(str) - 1;
    char temp;

    for (; i < len; i++, len--) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
    return (str);
}
