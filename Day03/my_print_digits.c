/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_print_digits
*/

int my_putchar(char c);

int my_print_digit(void)
{
    for (char alpha = '0'; alpha <= '9'; alpha++) {
        if (my_putchar(alpha) != 1)
            return (84);
    }
    return (0);
}