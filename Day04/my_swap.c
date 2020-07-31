/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_swap
*/

int my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}