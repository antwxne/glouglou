/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my_split
*/


#include <stdlib.h>
#include <stdio.h>

unsigned int my_strlen_c(char const *str, char c);

static unsigned int count_word(char *str, char c)
{
    unsigned int len = 0;

    for (unsigned int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            len++;
    return (len + 1);
}

static char *create_line(char *str, char c, unsigned int len)
{
    char *dest = malloc(sizeof(char) * (len + 1));
    unsigned int i = 0;

    if (dest == NULL)
        return (NULL);
    for (; str[i] != '\0' && str[i] != c; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}

char **my_split(char *str, char c)
{
    unsigned int len = count_word(str, c);
    char **dest = malloc(sizeof(char *) * (len + 1));
    unsigned int pos = 0;
    char *temp = &str[pos];
    int len_w = 0;

    if (dest == NULL)
        return (NULL);
    for (unsigned int i = 0; i < len; i++) {
        len_w = my_strlen_c(temp, c);
        dest[i] = create_line(temp, c, len_w);
        pos += len_w + 1;
        temp = &str[pos];
    }
    dest[len] = NULL;
    return (dest);
}