/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    for (; dest[i]; i++);
    for (int j = 0; src[j]; j++, i++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}