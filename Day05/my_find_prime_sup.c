/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_find_prime_sup
*/

static int my_is_prime(int nb)
{   
    if (nb == 2)
        return (1);
    if (nb < 2 || nb % 2 == 0)
        return (0);
    for (int i = 3; i * i <= nb; i += 2)
        if (nb % i == 0)
            return (0);
    return (1);
}

int my_find_prime_sup(int nb)
{
    int prime = nb;

    if (my_is_prime(nb))
        return (nb);
    for (; !my_is_prime(prime); prime++);
    return (prime);
}