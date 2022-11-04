/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** write a function that display 1 by 1 the characters of a string
*/

#include <unistd.h>
#include "my.h"

int my_inputstr(char const *str)
{
    write(0, &str[0], my_strlen(str));
    return 0;
}
