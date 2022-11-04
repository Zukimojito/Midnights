/*
** EPITECH PROJECT, 2020
** isneg
** File description:
** f
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
}
