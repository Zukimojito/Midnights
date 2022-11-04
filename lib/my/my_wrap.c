/*
** EPITECH PROJECT, 2021
** wrap
** File description:
** wrap putstr puchar put_nbr
*/

#include <stdarg.h>
#include "my.h"

void wpstr(va_list disp)
{
    my_putstr(va_arg(disp, char *));
}

void wpchar(va_list disp)
{
    my_putchar((char) va_arg(disp, int));
}

void wpnbr(va_list disp)
{
    my_put_nbr(va_arg(disp, int));
}

void wpcharp(void)
{
    my_putchar('%');
}

void wpnbru(va_list disp)
{
    my_put_nbr_unsign(va_arg(disp, unsigned int));
}
