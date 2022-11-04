/*
** EPITECH PROJECT, 2021
** show_int_2d_array
** File description:
** display the content of an 2d array of int
*/

#include "my.h"

int my_show_int_2d_array(int * const *tab)
{
    int i = 0;

    for (; tab[i]; i++);
    for (int j = 0; j < i; j++) {
        my_show_int_array(tab[j]);
        my_putchar('\n');
    }
    return 0;
}
