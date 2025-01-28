#include <stdio.h>

void main() {
    printf("[-] Progam Pembayaran\n");
    printf("[-] Promo Total Belanja > 100000\n");
    printf("[-] akan mendapatkan hadiah\n\n");
    int total_belanja = 0;

    printf("[+] inputkan total belanja:");
    scanf("%i", &total_belanja);

    if (total_belanja > 100000) {
        printf("Selamat, Anda mendapatkan hadiah!\n");
    }

    printf("Terima kasih sudah berbelanja di toko kami\n\n");
}