/*
** EPITECH PROJECT, 2020
** str islower
** File description:
** f
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
    }
    return (1);
}

