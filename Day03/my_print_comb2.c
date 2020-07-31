/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** my_print_comb2
*/

int my_putchar(char c);

static void display(char a, char b, char c, char d)
{
    if (a == '9' && b == '8' && c == '9' && d == 9) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
    } else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
        my_putchar(',');
        my_putchar(' ');
    }
}

static void second(char a, char b)
{
    for (char c = '0'; c <= '9'; c++)
        for (char d = '1'; d <= '9'; d++)
            if (a < c || (a == c && b < d))
            display(a, b, c, d);
}

int my_print_comb2(void)
{
    for (char a = '0'; a <= '9'; a++)
        for (char b = '0'; b <= '9'; b++)
            second(a, b);
    return (0);
}