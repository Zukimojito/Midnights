/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap the content of two integers
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
