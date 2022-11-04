/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int temp;

    while (str[i] != '\0')
        i++;
    i--;
    while (i >= j) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
    return (str);
}
