/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_print_comb
*/

int my_putchar(char c);

static void display(int a, int b, int c)
{
    my_putchar(a + '0');
    my_putchar(b + '0');
    my_putchar(c + '0');
    if (!(a == 7 && b == 8 && c == 9)) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{

    for (int a = 0; a <= 7; a++)
        for (int b = a + 1; b <= 8; b++)
            for (int c = b + 1; c <= 9; c++)
                display(a, b, c);
    return (0);
}