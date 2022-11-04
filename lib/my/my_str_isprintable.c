/*
** EPITECH PROJECT, 2020
** str isprintable
** File description:
** f
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
            }
    return (1);
}
