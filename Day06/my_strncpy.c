/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}