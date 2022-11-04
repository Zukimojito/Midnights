#include "struct.h"
#include "Enemy.h"
#include "my_rpg.h"

Enemy_t **init_enemy(void)
{
    Enemy_t **enemy = malloc(sizeof(Enemy_t *) * 10);

    if (!enemy)
        abort();
    for (int i = 0; i < 10; i++) {
        enemy[i] = malloc(sizeof(Enemy_t));
        if (!enemy[i])
            abort();
        enemy[i]->name = Enemy_name[i];
        enemy[i]->hp = Enemy_hp[i];
        enemy[i]->hpmax = Enemy_hp[i];
        enemy[i]->mp = Enemy_mp[i];
        enemy[i]->str = Enemy_str[i];
        enemy[i]->inte = Enemy_inte[i];
        enemy[i]->def = Enemy_def[i];
        enemy[i]->res = Enemy_res[i];
        enemy[i]->spd = Enemy_spd[i];
        enemy[i]->luck = Enemy_luck[i];
        enemy[i]->action = 0;
    }
    return enemy;
}
