/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0)
        return (0);
    for (;p > 0; p--)
        result *= nb;
    return result;
}