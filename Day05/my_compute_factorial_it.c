/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_compute_factorial_it
*/

int my_putchar(char c);

int my_compute_factiorial_it(int nb)
{
    int result = nb;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    for (nb -=1; nb > 0; nb--)
        result *= nb;
    return result;
}