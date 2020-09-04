/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_clean_str
*/

#include <stdlib.h>

unsigned my_strlen(char const *str);

static char *my_clean_tab(char *str)
{
    char *dest = malloc(sizeof(char)*my_strlen(str)+1);
    int i = 0;

    if (dest == NULL)
        return (NULL);
    for (; str[i] != '\0'; i++) {
        if (str[i] == '\t')
            dest[i] = ' ';
        else
            dest[i] = str[i];
    }
    dest[i] = '\0';
    return (dest);
}

static char *remove_new_line(char *str)
{
    unsigned int i;

    while (1) {
        i = my_strlen(str);
        if (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\n'))
            str[i - 1] = '\0';
        else
            break;
    }
    return (str);
}

char *my_clean_str(char *str)
{
    str = my_clean_tab(str);
    char *dest = malloc(sizeof(char)* (my_strlen(str) + 1));
    int i = 0;
    int a = 0;

    for (; str[a] == ' '; a++);
    for (; str[a] != '\0'; i++, a++) {
        if (str[a] == ' ') {
            for (; str[a] == ' '; a++);
            dest[i] = ' ';
            a -= 1;
        } else
            dest[i] = str[a];
    }
    if (dest[i - 1] == ' ')
        dest[i - 1] = 0;
    dest[i] = 0;
    free(str);
    return (remove_new_line(dest));
}