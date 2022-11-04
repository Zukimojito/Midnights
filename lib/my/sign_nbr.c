/*
** EPITECH PROJECT, 2021
** sign nbr
** File description:
** sign number
*/

int sign_nbr(char const *str)
{
    int sign = 1;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    return (sign);
}
