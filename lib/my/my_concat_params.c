/*
** EPITECH PROJECT, 2021
** concat_params
** File description:
** turns the command-line given arguments into a single string
*/

#include <stdlib.h>
#include "my.h"

int my_argvlen(int argc, char **argv)
{
    int argvlen = 0;
    int i = 0;

    while (i < argc) {
        argvlen = argvlen + my_strlen(argv[i]);
        i++;
    }
    return (argvlen);
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str;

    str = malloc(sizeof(char) * my_argvlen(argc, argv));
    while (j < argc) {
        while (argv[j][k] != '\0') {
            str[i] = argv[j][k];
            k++;
            i++;
        }
        if (j != argc - 1)
            str[i] = '\n';
        i++;
        k = 0;
        j++;
    }
    str[i] = '\0';
    return (str);
}
