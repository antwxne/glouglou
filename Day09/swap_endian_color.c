/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

int swap_endian_color(int color)
{
    char tmp;
    union swap {
        int c;
        char s[sizeof(int)];
    } swap;
    swap.c = color;
    for (unsigned int i = 0; i < sizeof(int) / 2; i++) {
        tmp = swap.s[i];
        swap.s[i] = swap.s[sizeof(int) - (i + 1)];
        swap.s[sizeof(int) - (i + 1)] = tmp;
    }
    return swap.c;
}
