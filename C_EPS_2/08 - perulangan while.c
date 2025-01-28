#include <stdio.h>

void main() {
    char ulangi = 'y';
    // char ulangi;
    int counter = 0;

    // perulangan whilel
    while(ulangi == 'y') {
        printf("\n[-] Apakah kamu mau mengulang?\n");
        printf("[+] Jawab (y/t): ");
        scanf("       %c", &ulangi);
        // Menambahkan spasi di depan %c pada scanf, yaitu scanf(" %c", &ulangi), membuat scanf mengabaikan karakter whitespace seperti \n, spasi, atau tab.

        counter++;
    }

    printf("\n\n---------------------------------\n");
    printf("[O] Perulangan Selesai\n");
    printf("[-] Kamu mengulang sebanyak %i kali.\n", counter);
}