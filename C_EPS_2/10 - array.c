#include <stdio.h>

void main() {
    char huruf[5] = {'A', 'B', 'C', 'D', 'E'};
    int angka[3] = {10, 3, 4};

   // Menampilkan semua elemen array huruf
    printf("huruf = ");
    for (int i = 0; i < (sizeof(huruf) / sizeof(*huruf)); i++) {
        printf("%c, ", huruf[i]);
    }
    printf("\n");

    // Menampilkan semua elemen array angka
    printf("angka = ");
    for (int i = 0; i < (sizeof(angka) / sizeof(*angka)); i++) {
        printf("%d, ", angka[i]);
    }
    printf("\n\n");

    printf("huruf[2] = %c\n", huruf[2]); // C
    printf("angka[0] = %i\n", angka[0]);

    huruf[2] = 'Z';
    printf("huruf[2] = %c\n", huruf[2]); // Z

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    /* ukuran array dalam byte */
    int size = sizeof(array); // 10 x 4 byte = 40

    /* banyaknya isi array `array` */
    int length = sizeof(array) / sizeof(*array); // 10

    printf("\nsize \t: %i\n", size);
    printf("length\t: %i\n", length);
}