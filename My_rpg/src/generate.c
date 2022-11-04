#include "my_rpg.h"

void reset_enemy(Enemy_t *enemy) {
    enemy->hp = enemy->hpmax;
    enemy->action = 0;
}

void reset_boss(Boss_t *boss) {
    boss->hp = boss->hpmax;
    boss->action = 0;
}

void generate_boss(Boss_t **tab_boss, Boss_t **boss)
{
    int i = rand() % 100;

    if (i < 30)
        *boss = tab_boss[0];
    else if (i < 40)
        *boss = tab_boss[1];
    else if (i < 50)
        *boss = tab_boss[2];
    else if (i < 60)
        *boss = tab_boss[3];
    else
        *boss = tab_boss[rand() % 7];
}

void generate_enemy(Enemy_t **tab_enemy, Enemy_t **enemy)
{
    int i = rand() % 100;

    if (i < 30)
        *enemy = tab_enemy[0];
    else if (i < 40)
        *enemy = tab_enemy[1];
    else if (i < 50)
        *enemy = tab_enemy[2];
    else if (i < 60)
        *enemy = tab_enemy[3];
    else
        *enemy = tab_enemy[rand() % 10];
}

void generate_player(Player_t **tab_player, Player_t **player, int i)
{
    *player = tab_player[i];
}

void generate_obj(Tab_Object_t tab_object, Object_t *object)
{
    generate_enemy(tab_object.enemy, &object->enemy);
    //generate_player(tab_object.player, &object->player, rand()% 5);
    object->boss = NULL;
}