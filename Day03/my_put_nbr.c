/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_put_nbr
*/

#include <stdbool.h>

int my_putchar(char c);

static int display(int nb)
{
    int tmp;

    if (nb == 0)
        return (0);
    tmp = nb % 10;
    nb /= 10;
    if (display(nb) == 0)
        my_putchar(tmp + '0');
    return (0);
}

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    return (display(nb));
}