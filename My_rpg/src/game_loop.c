#include "my_rpg.h"

void game_loop(Tab_Object_t tab_object)
{
    Object_t object;
    int stage = 0;

    srand(time(NULL));
    generate_obj(tab_object, &object);
    displayMenu();
    selectPlayer(tab_object.player, &object.player);
    while (1) {
        display(object, &stage);
        choice(object);
        mob_answer(object);
        progression(tab_object, &object, &stage);
        my_printf("\e[1;1H\e[2J");
    }
}
