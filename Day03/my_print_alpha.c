/*
** EPITECH PROJECT, 2020
** plouf
** File description:
** plouf
*/

int my_putchar(char c);

int my_print_alpha(void)
{
    for (char alpha = 'a'; alpha <= 'z'; alpha++) {
        if (my_putchar(alpha) != 1)
            return (84);
    }
    return (0);
}
