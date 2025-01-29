#include <stdio.h>
void main_1();
void main_2();

void main() {
    main_1();
}

void main_1() {
    struct Player {
        char *name;
        int score;
        int hp;
        struct Weapon *weapon;
    };

    struct Weapon {
        char *name;
        int attack;
        int guard;
    };

    // membuat struct player
    struct Player player1;
    player1.name = "petani kode";
    player1.score = 0;
    player1.hp = 100;

    (*player1.weapon).name = "katana";
    (*player1.weapon).attack = 16;
    (*player1.weapon).guard = 10;

    // cetak status player
    printf("[+] PLAYER STATUS\n");
    printf("|_ Name \t: %s\n", player1.name);
    printf("|_ Score \t: %i\n", player1.score);
    printf("|_ HP \t: %i\n", player1.hp);

    printf("\n[+] WEAPON\n");
    printf("|_ Name \t: %s\n", (*player1.weapon).name);
    printf("|_ Attack \t: %d\n", (*player1.weapon).attack);
    printf("|_ Guard \t: %d\n", (*player1.weapon).guard);
}

void main_2() {
    struct Player {
        char *name;
        int score;
        int hp;
        struct Weapon *weapon;
    };

    struct Weapon {
        char *name;
        int attack;
        int guard;
    };

    // membuat struct player
    struct Player player;

    // membuat pointer untuk player
    struct Player *player1;
    player1 = &player;

    player1->name = "petani kode";
    player1->score = 0;
    player1->hp = 100;

    player1->weapon->name = "katana";
    player1->weapon->attack = 16;
    player1->weapon->guard = 10;

    // cetak status player
    printf("[+] PLAYER STATUS\n");
    printf("|_ Name \t: %s\n", player1->name);
    printf("|_ Score \t: %i\n", player1->score);
    printf("|_ HP \t\t: %i\n", player1->hp);

    printf("\n[+] WEAPON\n");
    printf("|_ Name \t: %s\n", player1->weapon->name);
    printf("|_ Attack \t: %d\n", player1->weapon->attack);
    printf("|_ Guard \t: %d\n", player1->weapon->guard);
}