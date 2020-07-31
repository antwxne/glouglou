/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int root = 1;

    while (root <= nb) {
        if (root * root == nb)
            return (root);
        root++;
    }
    return(0);
}