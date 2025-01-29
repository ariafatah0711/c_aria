#include <stdio.h>

void main() {
    int score = 50;
    int hp = 100;

    // membuat pointer dengan isi alamat memori dari hp
    int *ptr_hp = &hp;

    // print isi variabllel dan alamat memory
    printf("| Nama Variable \t| Alamat \t| Konten \t|\n");
    printf("| score \t\t| %x \t| %d \t\t|\n", &score, score);
    printf("| hp \t\t\t| %x \t| %d \t\t|\n", &hp, hp);
    printf("| ptr_hp \t\t| %x \t| %d \t|\n", &ptr_hp, ptr_hp);
    printf("| *ptr_hp \t\t| %x \t| %d \t\t|\n", &ptr_hp, *ptr_hp);

    // mengubah data pada alamat mmemory dengan pointer
    *ptr_hp = 95;

    printf("| hp \t\t\t| %x \t| %d \t\t|\n", &hp, hp);
    printf("| *ptr_hp \t\t| %x \t| %d \t\t|\n", &ptr_hp, *ptr_hp);

    // *ptr // ini akan berisi 95 (nilai dari alamat)
    // ptr // ini akan berisi d57ba6c (alamat memori dari variabel hp)
}