/*
** EPITECH PROJECT, 2021
** my_alphanum.c
** File description:
** check if the char is alphanum
*/

int my_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))
        return 1;
    return 0;
}
