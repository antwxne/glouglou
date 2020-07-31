/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    unsigned int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}