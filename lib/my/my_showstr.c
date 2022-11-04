/*
** EPITECH PROJECT, 2020
** showstr
** File description:
** f
*/

#include "my.h"
#include "my_macro.h"

int put_octz(int nbr)
{
    int i = my_strlen(convert_basi(nbr, "0123456789", "01234567"));

    for (; i < 3; i++) {
        my_putchar('0');
    }
    my_putstr(convert_basi(nbr, "0123456789", "01234567"));
    return 0;
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            put_octz(str[i]);
        }
        else
            my_putchar(str[i]);
    }
    return (0);
}
