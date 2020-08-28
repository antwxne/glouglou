/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** my_string
*/

#ifndef MY_STRING_H_
#define MY_STRING_H_

#include <stdbool.h>

char **my_split(char *str, char c);
char *my_str_c_copy(char const *str, char c);
char *my_strcat(char *str1, char const *str2);
int my_strcmp(char const *str1, char const *str2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
unsigned int my_strlen(char const *str);
unsigned int my_strlen_c(char const *str, char const c);
char *my_strncat(char *str1, char const *str2, int n);
char *my_revstr(char *str);
char *my_clean_str(char *str);
int my_strncmp(char const *str1, char const *str2, unsigned int n);
bool my_str_is_positiv(char const *str);
bool my_str_is_num(char const *str);
bool str_is_letter(char const *str);
int my_getnbr(char const *str);

static inline bool char_is_num(char const c)
{
    return (c >= '0' && c <= '9' ? true : false);
}

static inline bool char_is_maj(char const c)
{
    return (c >= 'A' && c <= 'Z' ? true : false);
}

static inline bool char_is_min(char const c)
{
    return (c >= 'a' && c <= 'z' ? true : false);
}

static inline bool char_is_letter(char const c)
{
    return (char_is_maj(c) || char_is_min(c) ? true : false);
}

#endif /* !MY_STRING_H_ */
