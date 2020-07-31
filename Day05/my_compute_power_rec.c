/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    result *= my_compute_power_rec(nb, p - 1);
    return result;
}