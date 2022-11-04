/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** compares the two strings s1 and s2 at n caractere
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
