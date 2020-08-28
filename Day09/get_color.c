/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (((255 & 0xFF) << 24)
        | ((red & 0xFF) << 16)
        | ((green & 0xFF) << 8)
        | ((blue & 0xFF) << 0));
}