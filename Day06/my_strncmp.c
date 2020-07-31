/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (;s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0 && i < n - 1; i++);
    return (s1[i] - s2[i]);
}