/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    return (my_strcpy(dest, src));
}
