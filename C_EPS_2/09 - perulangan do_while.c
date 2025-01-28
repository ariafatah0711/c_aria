#include <stdio.h>

void main() {
    char ulangi = 't';
    // char ulangi;
    int counter = 0;

    do {
        printf("\n[-] Apakah kamu mau mengulang?\n");
        printf("[+] Jawab (y/t): ");
        scanf(" %c", &ulangi);

        counter++;
    } while (ulangi == 'y'); 

    printf("\n\n---------------------------------\n");
    printf("[O] Perulangan Selesai\n");
    printf("[-] Kamu mengulang sebanyak %i kali.\n", counter);
}