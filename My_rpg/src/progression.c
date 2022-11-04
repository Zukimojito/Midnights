#include "my_rpg.h"

void free_object(Tab_Object_t tab_object) {
    for (int i = 0; i < 10; i++)
        free(tab_object.enemy[i]);
    free(tab_object.enemy);
    for (int i = 0; i < 7; i++)
        free(tab_object.boss[i]);
    free(tab_object.boss);
    for (int i = 0; i < 5; i++)
        free(tab_object.player[i]);
    free(tab_object.player);
}

void loose()
{
    my_putstr("----------------------------------\n");
    my_putstr("___________________________\n\n");
    my_putstr("|       YOU LOSE !        |\n");
    my_putstr("___________________________\n\n");
    exit(0);
}

void win()
{
    my_putstr("----------------------------------\n");
    my_putstr("___________________________\n\n");
    my_putstr("|       YOU WIN !         |\n");
    my_putstr("___________________________\n\n");
    exit(0);
}

void item(Object_t *object)
{
    int i = rand() % 100;

    if (i < 30) {
        object->player->hp += 10;
        my_printf("You found a potion, your hp is now %d hp.", object->player->hp);
    }
    else if (i < 40) {
        object->player->str += 1;
        my_printf("You found a sword, your str is now %d atk.", object->player->str);
    }
    else if (i < 50) {
        object->player->def += 1;
        my_printf("You found a shield, your def is now %d def.", object->player->def);
    }
    else if (i < 60) {
        object->player->luck += 1;
        my_printf("You found a ring, your luck is now %d luck.", object->player->luck);
    }
    else {
        object->player->hpmax += 5;
        my_printf("You found a potion, your hpmax is now %d hpmax.", object->player->hpmax);
    }
}

void win_stage(Tab_Object_t Tab_Object, Object_t *object, int *stage)
{
    srand(time(NULL));
    my_printf("\e[1;1H\e[2J");
    display(*object, stage);
    if (rand() % 100 < 60) {
        my_printf("-----You win an item!------\n");
        item(object);
    }
    my_putstr("\n\n===========PRESS ANY KEY TO CONTINUE=========\n");
    free(my_readline());
    *stage += 1;
    if (object->enemy && object->enemy->hp <= 0)
        reset_enemy(object->enemy);
    else
        reset_boss(object->boss);
    if (*stage % 10 == 0) {
        object->enemy = NULL;
        generate_boss(Tab_Object.boss, &object->boss);
    }
    else {
        object->boss = NULL;
        generate_enemy(Tab_Object.enemy, &object->enemy);
    }
}

int progression(Tab_Object_t tab_object, Object_t *object, int *stage)
{
    if (object->player->hp <= 0) {
        my_printf("\e[1;1H\e[2J");
        display(*object, stage);
        free_object(tab_object);
        loose();
    }
    if (*stage == 10 && !check_alive(*object)) {
        my_printf("\e[1;1H\e[2J");
        display(*object, stage);
        free_object(tab_object);
        win();
    }
    if (!check_alive(*object)) {
        win_stage(tab_object, object, stage);
        return 1;
    }
    return 0;
}
