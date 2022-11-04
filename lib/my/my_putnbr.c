void my_putchar(char c);

void my_putstr(const char *str) {
    for (int i = 0; str[i]; i += 1) {
        my_putchar(str[i]);
    }
}

void my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        nb = nb % 10;
    }
    my_putchar(nb + 48);
    return;
}
