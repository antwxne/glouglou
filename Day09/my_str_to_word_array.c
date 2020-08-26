/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

#include <stdbool.h>
#include <stdlib.h>
#define IS_LETTER(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 1 : 0)

static int count_word(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (!IS_LETTER(str[i]) && IS_LETTER(str[i + 1]))
            nb++;
    return nb + 1;
}

static int len_word(char *str)
{
    int len = 0;

    for (; str[len]; len++)
        if (!IS_LETTER(str[len]))
            break;
    return len;
}

char *new_line(char *str)
{
    char *dest = malloc(sizeof(char) * (len_word(str) + 1));
    int i = 0;

    if (!dest)
        return NULL;
    for (;IS_LETTER(str[i]); i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return dest;
}

static char *ptr_to_next_word(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        if (!IS_LETTER(str[i]) && IS_LETTER(str[i + 1])) {
            i += 1;
            break;
        }
    return &str[i];
}

char **my_str_to_word_array(char *str)
{
    int nb_word = count_word(str);
    char **dest = malloc(sizeof(char *) * (nb_word + 1));
    char *temp = &str[0];

    if (!dest)
        return NULL;
    for (int i = 0; i < nb_word; i++) {
        dest[i] = new_line(temp);
        temp = ptr_to_next_word(temp);
    }
    dest[nb_word] = NULL;
    return dest;
}