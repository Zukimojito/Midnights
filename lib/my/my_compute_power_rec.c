/*
** EPITECH PROJECT, 2021
** compute_power_rec
** File description:
** recursive function that returns the squarred
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    else
        return (nb = nb * my_compute_power_rec(nb, (p-1)));
}
