/*
** EPITECH PROJECT, 2021
** wrapp
** File description:
** wrap %p
*/

#include <stdarg.h>
#include "my.h"
#include "my_wrap.h"

void wpstrp(va_list disp)
{
    my_putstr("0x");
    wpstrbasex(disp);
}

void wpstrhbaseo(va_list disp)
{
    my_putchar('0');
    wpnbrbaseo(disp);
}

void wpstrhbasex(va_list disp)
{
    my_putstr("x0");
    wpstrbasex(disp);
}

void wpstrhbasexx(va_list disp)
{
    my_putstr("X0");
    wpstrbasexx(disp);
}
