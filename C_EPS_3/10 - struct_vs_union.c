#include <stdio.h>

void main() {
    struct Player {
        char* name;
        unsigned int level;
    };

    union Enemy {
        char* name;
        unsigned int hp;
    };
 
    struct Player player1;
    player1.name = "aria";
    player1.level = 1;

    printf("[+] Player \t: %d (address = %x)\n", sizeof(player1), &player1);
    printf(" |__name   \t: %d  (address = %x)\n", sizeof(player1.name), &player1.name);
    printf(" |__level  \t: %d  (address = %x)\n", sizeof(player1.level), &player1.level);

    union Enemy zombie;
    zombie.name = "Zombie 1";
    zombie.hp = 100;

    printf("\n[+] Enemey \t: %d  (address = %x)\n", sizeof(zombie), &zombie);
    printf(" |__name   \t: %d  (address = %x)\n", sizeof(zombie.name), &zombie.name);
    printf(" |__hp     \t: %d  (address = %x)\n", sizeof(zombie.hp), &zombie.hp);
}