#include <stdio.h>

int tambah(int a, int b) {
    return a + b; 
}

int kurang(int a, int b) {
    return a - b; 
}

int kali(int a, int b) {
    return a * b;
}

float bagi(float a, float b) {
    // float hasil = (float) a / (float) b;
    // return hasil;
    return (float) a / (float) b;
}

int hasil_bagi(int a, int b) {
    return a % b;
}

void new_line() {
    printf("\n");
}


void main() {
    // tambah
    printf("10 + 10 \t= %i\n", tambah(10, 10));
    printf("12 + 21 \t= %i\n", tambah(12, 21));
    new_line();

    // kurang
    printf("41 - 18 \t= %i\n", kurang(41, 18));
    printf("12 - 21 \t= %i\n", kurang(12, 21));
    new_line();

    // kali
    printf("3  * 4  \t= %i\n", kali(3, 4));
    printf("8  * 3  \t= %i\n", kali(8, 3));
    new_line();

    // bagi
    printf("12 / 3  \t= %.1f\n", bagi(12, 3));
    printf("54 / 13 \t= %.1f\n", bagi(54, 12));
    new_line();

    // hasil bagi
    printf("54 %% 13 \t= %i\n", hasil_bagi(54, 12));
    printf("13 %% 2  \t= %i\n", hasil_bagi(13, 2));
    new_line();
}