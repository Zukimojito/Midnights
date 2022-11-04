/*
** EPITECH PROJECT, 2021
** skip sign
** File description:
** skip sign
*/

char *skip_sign(char *nb)
{
    int i = 0;

    for (; nb[i] == '-' || nb[i] == '+'; i++);
    return (&nb[i]);
}
