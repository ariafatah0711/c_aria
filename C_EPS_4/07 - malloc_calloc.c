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
    printf("|_ Name \t: %s\n", player1->name);
    printf("|_ HP   \t: %i\n", player1->hp);
    printf("|_ XP   \t: %i\n", player1->xp);
    printf("|_ Level \t: %i\n\n", player1->level);

    // ======================================================
    struct Product {
        char *name;
        unsigned int price;
        unsigned int stock;
        float weight;
    };

    // menggunakan calloc
    struct Product *buku = calloc(2, sizeof(struct Product));

     buku->name = "Pemograman C untuk pemula";
     buku->price = 98000;
     buku->stock = 5;
     buku->weight = 1.2;

     printf("[+] DETAIL PRODUK\n");
     printf("|_ Name \t: %s\n", buku->name);
     printf("|_ Price \t: %i\n", buku->price);
     printf("|_ Stock \t: %i\n", buku->stock);
     printf("|_ Berat \t: %.1f\n", buku->weight);  

    return 0;
}