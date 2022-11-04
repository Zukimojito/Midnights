/*
** EPITECH PROJECT, 2021
** getnbr_base
** File description:
** converts and returns a number (provided as a string ) in a given base
** into a decimal number
*/

#include "my.h"

int my_getnbr_base(char const *str, char const *base)
{
    return (my_getnbr(convert_base(str, "0123456789", base)));
}
