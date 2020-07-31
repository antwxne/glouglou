/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** test
*/

#ifndef TEST_H_
#define TEST_H_

int my_putchar(char c);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalise(char *str);
int my_str_is_alpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);

#endif /* !TEST_H_ */
