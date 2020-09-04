/*
** EPITECH PROJECT, 2019
** ncat
** File description:
** ncat
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

unsigned int my_strlen(char const *str);

char *my_strncat(char *str1, char const *str2, int n)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str1) + n + 1));
    unsigned int len;

    if (dest == NULL)
        return (NULL);
    dest = my_strcpy(dest, str1);
    for (int i = 0, len = my_strlen(dest); i <= n && str2[i] != '\0';
        i++, len++)
        dest[len] = str2[i];
    dest[len] = '\0';
    return (dest);
}
