/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenates two strings
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *tmp = malloc(sizeof(char *) * (my_strlen(dest)));
    tmp = my_strcpy(tmp, dest);
    int destlen = my_strlen(tmp) + my_strlen(src);

    dest = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    for (int i = 0, j = 0; i != destlen; ) {
        for (; tmp[j] != '\0'; j++, i++) {
            dest[i] = tmp[j];
        }
        for (j = 0; src[j] != '\0'; j++, i++) {
            dest[i] = src[j];
        }
    }
    free(tmp);
    dest[destlen] = '\0';
    return dest;
}
