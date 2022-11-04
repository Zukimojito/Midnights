/*
** EPITECH PROJECT, 2021
** my_putnbr_base
** File description:
** converts and displays a decimal number into a number in a given base.
** The number is given as an int and the base is provided as a string
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    my_put_nbr(my_getnbr_base(my_nbrtostr(nbr), base));
    return 0;
}
