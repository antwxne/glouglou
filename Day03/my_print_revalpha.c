/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_print_revalpha
*/

int my_putchar(char c);

int my_print_revalpha(void)
{
    for (char alpha = 'z'; alpha >= 'a'; alpha--) {
        if (my_putchar(alpha) != 1)
            return (84);
    }
    return (0);
}