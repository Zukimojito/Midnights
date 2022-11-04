#include "my_rpg.h"

void WelcomToTheGame(void)
{
    my_printf("\t\t\t  _________________________\n");
    my_printf("\t\t\t((                         ))\n");
    my_printf("\t\t\t )) Welcome to Zelda Game ((\n");
    my_printf("\t\t\t((                         ))\n");
    my_printf("\t\t\t  ------------------------- \n\n");
}

void DisplayGameMenu(void)
{
    my_printf("--------------------- Start new game or Quit the game : ---------------------\n");
    my_printf("---------------------------------- OPTION -----------------------------------\n");
    my_printf("                   1. New Game                  2. Quit                      \n");
    my_printf("Enter your choice : ");
}

int ChoiceDisplayMenu()
{
    char *buffer = my_readline();

    while (buffer) {
        if (my_strcmp(buffer, "1") == 0) {
            my_printf("You choose to start a new game\n");
            return 1;
        }
        if (my_strcmp(buffer, "2") == 0) {
            my_printf("You choose to quit the game\n");
            free(buffer);
            exit(0);
        }
        my_printf("You choose a wrong option\n");
        my_printf("Enter your choice : ");
        free(buffer);
        buffer = my_readline();
    }
    return 0;
}

void displayMenu(void)
{
    WelcomToTheGame();
    DisplayGameMenu();
    ChoiceDisplayMenu();
    my_printf("\n\n");
    my_printf("\e[1;1H\e[2J");
}