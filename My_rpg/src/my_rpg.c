#include "my_rpg.h"

Tab_Object_t init_object(void)
{
    Tab_Object_t tab_object;

    tab_object.player = init_player();
    tab_object.enemy = init_enemy();
    tab_object.boss = init_boss();
    return tab_object;
}

void my_rpg(void)
{
    Tab_Object_t tab_object = init_object();

    game_loop(tab_object);
}
