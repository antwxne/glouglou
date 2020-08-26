/*
** EPITECH PROJECT, 2024
** Day09
** File description:
** Created by antoine,
*/

#include "my_printf.h"
#include "struct.h"

int my_show_param_array(struct info_param const *par)
{
    for (unsigned int i = 0; par[i].str != 0; i++) {
        my_printf("%s\n%d\n", par[i].str, par[i].lenght);
        for (unsigned int j = 0; par[i].word_array[j] != 0; j++)
            my_printf("%s\n", par[i].word_array[j]);
    }
    return 0;
}