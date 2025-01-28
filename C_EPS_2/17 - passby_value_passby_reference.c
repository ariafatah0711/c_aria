#include <stdio.h>

void kali_dua(int *num) {
    *num = *num * 2; // Mengubah nilai dari alamat yang ditunjuk pointer num
}

void kali_dua_test(int num) {
    num = num * 2; // Hanya memodifikasi salinan lokal dari num
}

void main() {
    int angka = 9;

    kali_dua_test(angka);
    printf("variable angka without pointer \t= %d\n", angka);

    kali_dua(&angka);
    printf("variable angka with pointer \t= %d\n", angka);
    
    // Pada kali_dua_test, tidak ada perubahan pada variabel angka karena hanya salinan nilai yang dimodifikasi.
    // Pada kali_dua, variabel angka berhasil dimodifikasi karena Anda mengoper alamatnya (&angka) dan menggunakan pointer untuk mengakses nilai aslinya.
}

// Fungsi kali_dua_test
// Fungsi ini menerima salinan dari nilai angka. Variabel num dalam fungsi ini tidak terhubung langsung dengan variabel angka di luar fungsi.

// Fungsi kali_dua
// Fungsi ini menerima alamat dari variabel angka (melalui pointer).