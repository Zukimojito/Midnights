/*
** EPITECH PROJECT, 2021
** find prime sup
** File description:
** return the smallest prime number that is greater or equal that number
*/

int my_find_prime_sup(int nb)
{
    int i = 2;

    if (nb < 2)
        return (2);
    while (nb % i != 0)
        i++;
    if (nb == i)
        return (nb);
    else
        return (my_find_prime_sup(nb + 1));
}
