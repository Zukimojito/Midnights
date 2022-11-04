#include "my_rpg.h"

void CharacterInfo(Object_t obj)
{
    my_printf("============================== CHARACTER INFO ===============================\n\n");
    my_printf("\t\t\t   Your character is %s\n\n", obj.player->name);
    my_printf("\t\t      HP  : %d \t\t\tMP  : %d\n", obj.player->hp, obj.player->mp);
    my_printf("\t\t      STR : %d \t\t\tINT : %d\n", obj.player->str, obj.player->inte);
    my_printf("\t\t      DEF : %d \t\t\tRES : %d\n", obj.player->def, obj.player->res);
    my_printf("\t\t      SPD : %d \t\t\tLCK : %d\n", obj.player->spd, obj.player->luck);
    my_printf("\n========================== PRESS ENTER TO CONTINUE ==========================\n\n");
    free(my_readline()); // PRESS ENTER TO CONTINUE
    my_printf("\e[1;1H\e[2J");
}

void stage(int nb_stage)
{
    my_printf("============================= STAGE %d ===========================================\n", nb_stage);
}

void display_mob_action(Character_t *mob)
{
    if (mob->action == ATTACK)
        my_printf("%s attacks you and deal %d!\n", mob->name, mob->str);
    if (mob->action == HEAL)
        my_printf("%s heals himself!\n", mob->name);
    if (mob->action == DEAD)
        my_printf("%s is dead!\n", mob->name);
}

void display_player_action(Player_t *player, Character_t *mob)
{
    if (player->action == ATTACK)
        my_printf("You attack %s and deal %d!\n", mob->name, player->str);
    if (player->action == HEAL)
        my_printf("You heal yourself!\n");
    if (player->action == DEAD)
        my_printf("You are dead!\n");
}

void context(Object_t object)
{
    Character_t *mob = get_mob(object);

    my_printf("\n---------------------------------- context -----------------------------------\n");
    my_printf("You are in a forest.\n");
    if (mob->action == UNDEFINED)
        my_printf("You enconter a %s.\n", mob->name);
    display_player_action(object.player, mob);
    display_mob_action(mob);
}

void health_bar(int hp, int hpmax)
{
    int i = 0;

    for (; i < hp; i++)
        my_printf("\x1B[42m \x1B[0m");
    for (; i < hpmax; i++)
        my_printf("\x1B[32m_\x1B[0m");
    my_printf("\t%d/%d\n\n", hp, hpmax);
}

void fight(Object_t obj)
{
    static int nb_fight = 1;
    Character_t *mob = get_mob(obj);

    my_printf("\n================================== FIGHT %d ===================================\n", nb_fight);
    my_printf("%s.\n", mob->name);
    health_bar(mob->hp, mob->hpmax);
    my_printf("%s.\n", obj.player->name);
    health_bar(obj.player->hp, obj.player->hpmax);
    nb_fight++;
}

void option(void)
{
    my_printf("\t\t\t  [1] Attack\t [2] Heal\n");
}

int display(Object_t obj, int *nb_stage)
{
    if (*nb_stage == 0) {
        CharacterInfo(obj);
        *nb_stage = 1;
    }
    stage(*nb_stage);
    context(obj);
    fight(obj);
    if (get_mob(obj)->action != DEAD) {
        option();
    }
    return 0;
}
