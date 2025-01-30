#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Player {
        char *name;
        unsigned int hp;
        unsigned int xp;
        unsigned int level;
    };

    // menggunakan malloc
    struct Player *player1 = malloc(sizeof(struct Player));

    player1->name = "ariafatah";
    player1->hp = 100;
    player1->xp = 5;
    player1->level = 1;

    printf("[+] Player Status\n");
    printf("|_ Name : %s\n", player1->name);
    printf("|_ HP : %i\n", player1->hp);
    printf("|_ XP : %i\n", player1->xp);
    printf("|_ Level : %i\n", player1->level);

    return 0;
}