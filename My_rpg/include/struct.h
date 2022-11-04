#ifndef STRUCT_H_
#define STRUCT_H_

enum type
{
    PLAYER = 0,
    ENEMY,
    BOSS,
};

enum Type
{
    UNDEFINED = 0,
    DEAD,
    ATTACK,
    HEAL,
};

typedef struct Character
{
    char *name;
    int hp;
    int hpmax;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
    int action;
} Character_t;

typedef struct Player
{
    const char *name;
    int hp;
    int hpmax;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
    int action;
} Player_t;

typedef struct Enemy_s
{
    char *name;
    int hp;
    int hpmax;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
    int action;
} Enemy_t;

typedef struct Boss_s
{
    char *name;
    int hp;
    int hpmax;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
    int action;
} Boss_t;

typedef struct Tab_Object
{
    Player_t **player;
    Enemy_t **enemy;
    Boss_t **boss;
} Tab_Object_t;

typedef struct Object
{
    Player_t *player;
    Enemy_t *enemy;
    Boss_t *boss;
} Object_t;

typedef struct option_s
{
    char *name;
    void (*ptr)(Object_t);
} option_t;

#endif /* !STRUCT_H_ */
