/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_isneg
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        return (my_putchar('N') == 1 ? 0 : 84);
    else
        return (my_putchar('P') == 1 ? 0 : 84);
    return (0);
}