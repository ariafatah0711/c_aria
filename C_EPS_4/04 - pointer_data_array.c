#include <stdio.h>

void main() {
    printf("[+] Progam Antrian CS\n\n");

    char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};

    // menggunakan pointer
    char *ptr_current = no_antrian;

    for (int i = 0; i < 5; i++) {
        printf("|_ Pelanggan dengan no antrian %c silakan ke loket!\n", *ptr_current);
        printf("|_ Saat ini CS sedang melayani: %c\n|\n", *ptr_current);
        printf("|__________ Tekan Enter untuk Next __________");
        getchar();
        ptr_current++;
    }

    printf("[+] Selesai!");
}