/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp
*/

int my_strncmp(char const *str1, char const *str2, unsigned int n)
{
    unsigned int i = 0;

    for (;str1[i] == str2[i] && str1[i] != 0 &&
        str2[i] != 0 && i < n; i++);
    return (str1[i] - str2[i]);
}
