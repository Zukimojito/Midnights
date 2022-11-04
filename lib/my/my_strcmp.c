/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** compares the two strings s1 and s2
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}
