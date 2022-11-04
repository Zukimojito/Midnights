/*
** EPITECH PROJECT, 2021
** compute square_root
** File description:
** return the square root of the number
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i < nb)
        i++;
    if (i * i != nb)
        return (0);
    else
        return (i);
}
