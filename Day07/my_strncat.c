/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;

    for (; dest[i]; i++);
    for (int j = 0; src[j] && j < nb; j++, i++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}