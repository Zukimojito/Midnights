/*
** EPITECH PROJECT, 2020
** sortintarray
** File description:
** sort int array in order croissant
*/

#include "my.h"

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; i < size; i++) {
        if (i > 0 && tab[i - 1] > tab[i]) {
            my_swap(&tab[i - 1], &tab[i]);
            i -= 2;
        }
    }
}
