#include <stdio.h>
#include <stdlib.h> 

struct Weapon {
    char *name;
    int attack;
    int guard;
};

struct Player {
    char *name;
    int score;
    int hp;
    struct Weapon *weapon;  
};

int main() {
    struct Player player1;
    player1.name = "petani kode";
    player1.score = 0;
    player1.hp = 100;

    player1.weapon = (struct Weapon *)malloc(sizeof(struct Weapon));

    if (player1.weapon == NULL) {
        printf("Error allocating memory for weapon.\n");
        return 1;
    }

    player1.weapon->name = "katana";
    player1.weapon->attack = 16;
    player1.weapon->guard = 10;


    printf("[+] PLAYER STATUS\n");
    printf("|_ Name \t: %s\n", player1.name);
    printf("|_ Score \t: %i\n", player1.score);
    printf("|_ HP \t\t: %i\n", player1.hp);

    printf("\n[+] WEAPON\n");
    printf("|_ Name \t: %s\n", player1.weapon->name);
    printf("|_ Attack \t: %d\n", player1.weapon->attack);
    printf("|_ Guard \t: %d\n", player1.weapon->guard);

    free(player1.weapon);

    return 0;
}