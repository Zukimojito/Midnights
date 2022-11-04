#include "struct.h"
#include "Boss.h"
#include "my_rpg.h"

Boss_t **init_boss(void)
{
    Boss_t **boss = (Boss_t **)malloc(sizeof(Boss_t *) * 10);

    if (!boss)
        abort();
    for (int i = 0; i < 7; i++) {
        boss[i] = (Boss_t *)malloc(sizeof(Boss_t));
        if (!boss[i])
            abort();
        boss[i]->hp = Boss_hp[i];
        boss[i]->hpmax = Boss_hp[i];
        boss[i]->mp = Boss_mp[i];
        boss[i]->name = Boss_name[i];
        boss[i]->str = Boss_str[i];
        boss[i]->inte = Boss_inte[i];
        boss[i]->def = Boss_def[i];
        boss[i]->res = Boss_res[i];
        boss[i]->spd = Boss_spd[i];
        boss[i]->luck = Boss_luck[i];
        boss[i]->action = 0;
    }
    return boss;
}
