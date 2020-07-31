/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_compute_factorial_rec
*/

int my_compute_factiorial_rec(int nb)
{
    int result = nb;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    result *= my_compute_factiorial_rec(nb - 1);
    return result;
}