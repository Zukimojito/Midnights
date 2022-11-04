/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** prime
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);
    while (nb % i != 0)
        i++;
    if (nb == i)
        return (1);
    if (nb != i)
        return (0);
}
