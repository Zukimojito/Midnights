/*
** EPITECH PROJECT, 2021
** my_nbrtostr.c
** File description:
** return a string with an int as parameter
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "my_macro.h"

char *my_nbrtostr(int nb)
{
    int nbrlen = my_nbrlen(nb);
    char *result = malloc(sizeof(char) * (nbrlen + 1));
    int i = 0;

    if (nb < 0) {
        result[nbrlen - 1] = '-';
        nb = -nb;
    }
    if (nb == 0)
        result[0] = '0';
    for (; nb != 0; i++) {
        result[i] = ITOC(nb % 10);
        nb /= 10;
    }
    result[nbrlen] = '\0';
    return my_revstr(result);
}
