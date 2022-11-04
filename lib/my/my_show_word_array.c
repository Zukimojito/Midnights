/*
** EPITECH PROJECT, 2021
** show_word_array
** File description:
** displays the content of an array of words
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;

    for (; tab[i]; i++);
    for (int j = 0; j < i; j++) {
        my_putstr(tab[j]);
        my_putchar('\n');
    }
    return (0);
}
