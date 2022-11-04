#include "struct.h"
#include "Players.h"
#include "my_rpg.h"

Player_t **init_player(void)
{
    Player_t **player = malloc(sizeof(Player_t *) * 10);

    if (!player)
        abort();
    for (int i = 0; i < 5; i++) {
        player[i] = malloc(sizeof(Player_t));
        if (!player[i])
            abort();
        player[i]->name = Player_name[i];
        player[i]->hp = Player_hp[i];
        player[i]->mp = Player_mp[i];
        player[i]->str = Player_str[i];
        player[i]->inte = Player_inte[i];
        player[i]->def = Player_def[i];
        player[i]->res = Player_res[i];
        player[i]->spd = Player_spd[i];
        player[i]->luck = Player_luck[i];
        player[i]->hpmax = Player_hp[i];
        player[i]->action = 0;
    }
    return player;
}
