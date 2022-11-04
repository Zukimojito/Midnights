/*
** EPITECH PROJECT, 2021
** my_nbrlen.c
** File description:
** return the number of digit of a number
*/

int my_nbrlen(int nb)
{
    int len = 0;

    if (nb <= 0)
        len = 1;
    for (; nb != 0; len++)
        nb /= 10;
    return (len);
}
