#include "my_rpg.h"

bool check_alive(Object_t obj)
{
    if (obj.boss && obj.boss->hp <= 0) {
        obj.boss->action = DEAD;
        return false;
    }
    if (obj.enemy && obj.enemy->hp <= 0) {
        obj.enemy->action = DEAD;
        return false;
    }
    return true;
}

Character_t *get_mob(Object_t obj)
{
    Character_t *mob;

    if (obj.boss)
        mob = (Character_t *)obj.boss;
    else if (obj.enemy)
        mob = (Character_t *)obj.enemy;
    else
        abort();
    return mob;
}

void mob_answer(Object_t obj)
{
    int random = rand() % 5;

    if (!check_alive(obj))
        return;
    if (random < 4)
        mob_attack(obj);
    else
        mob_heal(obj);
}