/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** splits a string into words. Separators
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int alphanum(char c)
{
    if (c > 32 && c < 126 && c != ':')
        return (1);
    return (0);
}

int wordlen(char const *str)
{
    int len = 0;

    for (int j = 0; alphanum(str[j]) == 1; j++, len++);
    return (len);
}

int countword(char const *str)
{
    int word = 0;

    for (int i = 0; str[i]; i++) {
        if (alphanum(str[i]) == 1 && alphanum(str[i + 1]) == 0)
            word++;
    }
    return (word);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int wl = 0;
    int total_word = countword(str);
    char **tab = malloc(sizeof(char *) * (total_word + 1));

    for (int j = 0; i < total_word; i++) {
        for (; alphanum(str[j]) == 0; j++);
        wl = wordlen(&str[j]);
        tab[i] = malloc(sizeof(char) * (wl + 1));
        tab[i] = my_strncpy(tab[i], &str[j], wl);
        tab[i][wl] = '\0';
        j += wl;
    }
    tab[i] = NULL;
    return (tab);
}
