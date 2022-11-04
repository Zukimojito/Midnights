/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** is digit
*/

int my_str_isnumf(char *str)
{
    int    i = 0;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9' || str[i] == '-' || str[i] == '.')
            i++;
        else
            return (0);
    }
    return (1);
}
