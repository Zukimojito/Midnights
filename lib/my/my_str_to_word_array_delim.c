/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** splits a string into words. Separators
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int delimiter(char c, char *delim)
{
    for (int i = 0; delim[i]; i++)
        if (delim[i] == c)
            return (1);
    return (0);
}

int count_delim(char const *str, char *delim)
{
    int countdelim = 0;

    for (int i = 0; str[i]; i++) {
        if (delimiter(str[i], delim) == 1)
            countdelim++;
    }
    return (countdelim);
}

char **my_str_to_word_array_delim(char const *str, char *delim)
{
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (count_delim(str, delim) + 2));

    for (int i = 0; i < my_strlen(str); i += j+1, k++) {
        for (j = 0; str[i + j] && delimiter(str[i + j], delim) == 0; j++);
        tab[k] = malloc(sizeof(char) * j + 1);
        my_strncpy(tab[k], &str[i], j);
    }
    tab[k] = NULL;
    return (tab);
}
