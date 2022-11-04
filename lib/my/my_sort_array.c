/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"

void *my_swap_string(char **tab, char **tab2)
{
    int j;

    char *temp = tab[j];
    tab[j] = tab2[j + 1];
    tab2[j + 1] = temp;
}

int my_sort_word_array(char **tab)
{
    int i = 0;

    for (; tab[i]; i++);
    for (int j = 0; j < i; j++) {
        if (j > 0 && my_strcmp(tab[j - 1], tab[j]) > 0) {
            my_swap_string(&tab[j - 1], &tab[j]);
            j -= 2;
        }
    }
    return (0);
}
