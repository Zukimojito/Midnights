/*
** EPITECH PROJECT, 2021
** show_int_array
** File description:
** display the content of an array of int
*/

#include "my.h"

int my_show_int_array(int const *tab)
{
    int i = 0;

    for (; tab[i]; i++);
    for (int j = 0; j < i; j++) {
        my_put_nbr(tab[j]);
    }
    return 0;
}
