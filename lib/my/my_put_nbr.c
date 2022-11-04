/*
** EPITECH PROJECT, 2020
** put_nbr
** File description:
** f
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 10)
        my_putchar(nb + 48);
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_putchar(nb + 48);
    }
    return (0);
}
