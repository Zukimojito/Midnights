/*
** EPITECH PROJECT, 2021
** convert_base
** File description:
** convert_base
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "my_macro.h"

char *convert_basi(unsigned int nb, char const *base_from, char const *base_to)
{
    int i = 0;
    char *result = malloc(sizeof(char) * (nb + 2));

    for (; nb != 0; i++) {
        if (nb % my_strlen(base_to) < 10)
            result[i] = ITOC(nb % my_strlen(base_to));
        else
            result[i] = (nb % my_strlen(base_to)) + 87;
        nb = nb / my_strlen(base_to);
    }
    result[i++] = '\0';
    return my_revstr(result);
}
