#include "my_rpg.h"

int selectPlayer(Player_t **tab_player, Player_t **player)
{
    int i = 0;

    displayCharacter(tab_player);
    i = ChoicePlayer();
    //if (i == -1)
    //    abort();
    generate_player(tab_player, player, i);
    my_printf("\e[1;1H\e[2J");
    return 0;
}

void displayCharacter(Player_t **tab_player)
{
    printf("============================= Choose your Hero ==============================\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t\t\t Hero %d, name : %s \n", (i + 1), (tab_player[i]->name));
        printf("========================= PRESS %d to select player ========================== \n", (i + 1));
    }
}

int ChoicePlayer()
{
    char *buffer = my_readline();
    while (1)
    {
        if (buffer && my_strcmp(buffer, "1") == 0) {
            return 0;
        }
        if (buffer && my_strcmp(buffer, "2") == 0) {
            return 1;
        }
        if (buffer && my_strcmp(buffer, "3") == 0) {
            return 2;
        }
        if (buffer && my_strcmp(buffer, "4") == 0) {
            return 3;
        }
        if (buffer && my_strcmp(buffer, "5") == 0) {
            return 4;
        }
        printf("You choose a wrong option\n");
        buffer = my_readline();
    }
    return -1;
}
