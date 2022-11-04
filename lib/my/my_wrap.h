/*
** EPITECH PROJECT, 2021
** my_wrap.h
** File description:
** wrap
*/

#include <stdarg.h>
#include "my.h"

typedef struct pd
{
    char pd1;
    void (*pd2)(va_list);
}pd;

void wpstr(va_list disp);
void wpchar(va_list disp);
void wpnbr(va_list disp);
void wpcharp(va_list disp);
void wpnbru(va_list disp);
void wpnbrbaseb(va_list disp);
void wpnbrbaseo(va_list disp);
void wpstrbasex(va_list disp);
void wpstrbasexx(va_list disp);
void wpstrss(va_list disp);
void wpstrp(va_list disp);
void wpstrhbaseo(va_list disp);
void wpstrhbasex(va_list disp);
void wpstrhbasexx(va_list disp);
