#include <stdio.h>

void main() {
    // struct Weapon
    typedef struct {
        char* name;
        int attackPower;
        int range;
    } Weapon;

    // struct Player
    typedef struct {
        char* name;
        int healthPoin;
        Weapon weapon;
    } Player;

    Player player1 = {
        .name = "aria",
        .healthPoin = 100,
        .weapon = {
            .name = "katana",
            .attackPower = 10,
            .range = 2
        }
    };

    // print player dan weapon
    printf("== Player Status ==\n");
    printf("Player: %s\n", player1.name);
    printf("HP: %d%\n", player1.healthPoin);
    printf("-- Weapon --\n");
    printf("   Name: %s\n", player1.weapon.name);
    printf("   Attack: %d\n", player1.weapon.attackPower);
    printf("   Range: %d\n", player1.weapon.range);
}