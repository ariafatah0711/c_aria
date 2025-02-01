#include <stdio.h>
#include "./lib/hitung_umur.h"

void main() {
    int tahun_sekarang = 2024;
    int tahun_lahir = 2000;

    // menggunakan fungsi dari hitung_umur.h
    int umur = hitung_umur(tahun_lahir, tahun_sekarang);

    printf("Umur Kamu %d tahun", umur);
}