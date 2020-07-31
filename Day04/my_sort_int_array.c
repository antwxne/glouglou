/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** my_sort_int_array
*/

static void swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;

    while (i < size - 1) {
        if (array[i] > array[i + 1]) {
            swap(&array[i], &array[i + 1]);
            i = 0;
        } else
            i++;
    }
}