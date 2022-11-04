#include "my_rpg.h"

void attack(Object_t obj)
{
    if (obj.boss)
        obj.boss->hp -= obj.player->str;
    else
        obj.enemy->hp -= obj.player->str;
    obj.player->action = ATTACK;
}

void heal(Object_t obj)
{
    int heal = obj.player->hpmax / 2;

    if (obj.player->hp + heal > obj.player->hpmax)
        obj.player->hp = obj.player->hpmax;
    else
        obj.player->hp += heal;
    obj.player->action = HEAL;
}

void mob_attack(Object_t obj)
{
    Character_t *mob;

    if (obj.boss)
        mob = (Character_t *)obj.boss;
    else if (obj.enemy)
        mob = (Character_t *)obj.enemy;
    else
        abort();
    obj.player->hp -= mob->str;
    mob->action = ATTACK;
}

void mob_heal(Object_t obj)
{
    Character_t *mob;
    int heal = 0;

    if (obj.boss)
        mob = (Character_t *)obj.boss;
    else if (obj.enemy)
        mob = (Character_t *)obj.enemy;
    else
        abort();
    heal = mob->hpmax / 2;
    if (mob->hp + heal > mob->hpmax)
        mob->hp = mob->hpmax;
    else
        mob->hp += heal;
    mob->action = HEAL;
}