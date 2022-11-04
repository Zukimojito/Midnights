/*
** EPITECH PROJECT, 2021
** my_memset
** File description:
** remplissage d'une string
*/

void *my_memset(void *s, int c, unsigned int len)
{
    unsigned char *dst = s;

    for (; len > 0; len--) {
        *dst = (unsigned char) c;
        dst++;
    }
    return s;
}
