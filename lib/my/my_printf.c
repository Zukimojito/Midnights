/*
** EPITECH PROJECT, 2021
** display stdargs
** File description:
** display all of its arguments (exept the first one)
*/

#include <stdarg.h>
#include "my.h"
#include "my_wrap.h"

static const pd tab[12] =
{
    {'s', &wpstr},
    {'d', &wpnbr},
    {'i', &wpnbr},
    {'u', &wpnbru},
    {'c', &wpchar},
    {'%', &wpcharp},
    {'b', &wpnbrbaseb},
    {'o', &wpnbrbaseo},
    {'x', &wpstrbasex},
    {'X', &wpstrbasexx},
    {'S', &wpstrss},
    {'p', &wpstrp},
};

static const pd tabd[3] =
{
    {'o', &wpstrhbaseo},
    {'x', &wpstrhbasex},
    {'X', &wpstrhbasexx},
};

void sort_tab(char format, va_list disp, int x)
{
    for (int i = 0; i < 12; i++) {
        if (tab[i].pd1 == format && x == 1)
            tab[i].pd2(disp);
    }
    for (int i = 0; i < 3; i++) {
        if (tabd[i].pd1 == format && x == 2)
            tabd[i].pd2(disp);
    }
}

void my_printf(char const *format, ...)
{
    va_list disp;

    va_start(disp, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%' && format[i + 1] != '#') {
            sort_tab(format[i + 1], disp, 1);
            i++;
        }
        else if (format[i] == '%' && format[i + 1] == '#') {
            sort_tab(format[i + 2], disp, 2);
            i += 2;
        }
        else
            my_putchar(format[i]);
    }
    va_end(disp);
}
