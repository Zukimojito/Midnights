/*
** EPITECH PROJECT, 2021
** my_wrap
** File description:
** my_wrap base
*/

#include <stdarg.h>
#include "my.h"

void wpnbrbaseb(va_list disp)
{
    my_putstr(convert_basi(va_arg(disp, unsigned int), "0123456789", "01"));
}

void wpnbrbaseo(va_list disp)
{
    my_putstr(convert_basi(va_arg(disp, unsigned int),
                            "0123456789", "01234567"));
}

void wpstrbasex(va_list disp)
{
    my_putstr(convert_basi(va_arg(disp, unsigned int),
                            "0123456789", "0123456789abcdef"));
}

void wpstrbasexx(va_list disp)
{
    unsigned int nb = va_arg(disp, unsigned int);
    my_putstr(my_strupcase(convert_basi(nb, "0123456789", "0123456789ABCDEF")));
}

void wpstrss(va_list disp)
{
    my_showstr(va_arg(disp, char *));
}
