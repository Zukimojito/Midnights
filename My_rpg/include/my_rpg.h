#ifndef MY_RPG_H_
#define MY_RPG_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "struct.h"
#include "my.h"

void my_rpg(void);
Boss_t **init_boss(void);
Player_t **init_player(void);
Enemy_t **init_enemy(void);
void game_loop(Tab_Object_t tab_object);
int display(Object_t, int *);
void displayMenu(void);
void choice(Object_t object);
int progression(Tab_Object_t tab_object, Object_t *object, int *stage);
void mob_answer(Object_t obj);
void generate(Tab_Object_t tab_object, Object_t object, int stage);
void attack(Object_t object);
void heal(Object_t obj);
void mob_attack(Object_t obj);
void mob_heal(Object_t obj);
void generate_player(Player_t **tab_player, Player_t **player, int i);
void generate_enemy(Enemy_t **tab_enemy, Enemy_t **enemy);
void generate_boss(Boss_t **tab_boss, Boss_t **boss);
void reset_enemy(Enemy_t *enemy);
void reset_boss(Boss_t *boss);
void generate_obj(Tab_Object_t tab_object, Object_t *object);
void displayCharacter(Player_t **);
int ChoicePlayer(void);
int selectPlayer(Player_t **, Player_t **player);
Character_t *get_mob(Object_t obj);
bool check_alive(Object_t obj);

#endif
