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

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int res = 0;
    int j = 0;
    char *result = malloc(sizeof(char) * (my_strlen(nbr) + 2));
    int sign = sign_nbr(nbr);
    char *nb = skip_sign(my_strdup(nbr));

    for (int i = 0; i < my_strlen(nb); i++)
        res = res * my_strlen(base_from) + CTOI(nb[i]);
    for (; res != 0; j++) {
        if (res % my_strlen(base_to) < 10)
            result[j] = ITOC(res % my_strlen(base_to));
        else
            result[j] = (res % my_strlen(base_to)) + 87;
        res = res / my_strlen(base_to);
    }
    if (sign == -1)
        result[j++] = '-';
    result[j++] = '\0';
    return my_revstr(result);
}
