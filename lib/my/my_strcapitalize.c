/*
** EPITECH PROJECT, 2021
** strcapitalize
** File description:
** capitalizes the first letter of each word
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i]; i++) {
        if (i = 0 || str[i - 1] > 31 && str[i - 1] < 48 && \
            str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (str);
}
