/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** counts and return the number of character found in the string
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
