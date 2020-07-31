/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** concat_params
*/

#include <stdlib.h>

static int len_word_arr(char **arr)
{
    int len = 0;

    for (int i = 0; arr[i]; i++, len++)
        for (int j = 0; arr[i][j]; j++, len++);
    return (len);
}

static char *my_strcat(char *dest, char *src)
{
    int i = 0;

    for (; dest[i]; i++);
    for (int j = 0; src[j]; j++, i++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}

static char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *concat_params(int argc, char **argv)
{
    int len = len_word_arr(argv);
    char *dest = malloc(sizeof(char) * ((len) + argc + 1));

    if (dest == NULL || argv[0] == NULL)
        return (NULL);
    dest = my_strcpy(dest, argv[0]);
    dest = my_strcat(dest, "\n");
    for (int i = 1; argv[i]; i++) {
        dest = my_strcat(dest, argv[i]);
        if (argv[i + 1] != NULL)
            dest = my_strcat(dest, "\n");
    }
    return (dest);
}