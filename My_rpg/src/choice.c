#include "my_rpg.h"

static const option_t tab[] = {
    {"Attack", attack},
    {"Heal", heal},
    //{"Item", &item},
    //{"Run", &run},
    {NULL, NULL}
};

int select_option(char *name, Object_t obj)
{
    int nb = my_getnbr(name);

    if (nb > 0 && nb <= 2) {
        free(name);
        tab[nb - 1].ptr(obj);
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        if (my_strcmp(tab[i].name, name) == 0) {
            free(name);
            tab[i].ptr(obj);
            return 1;
        }
    }
    return 0;
}

void choice(Object_t obj)
{
    char *buffer = my_readline();

    while (1) {
        if (buffer && select_option(buffer, obj) == 1)
            break;
        buffer = my_readline();
    }
}
