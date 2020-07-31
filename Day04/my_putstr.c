/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_putstr
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    for (unsigned int i = 0; str[i] != '\0'; i++)
        if (my_putchar(str[i]) != 1)
            return (84);
    return (0);
}