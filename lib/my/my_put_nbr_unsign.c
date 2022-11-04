/*
** EPITECH PROJECT, 2020
** put_nbr_unsign
** File description:
** put_nbr with unsigned int
*/

#include "my.h"

int my_put_nbr_unsign(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr_unsign(nb / 10);
    my_putchar((nb % 10) + 48);
    return (0);
}
