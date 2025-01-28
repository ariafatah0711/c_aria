#include <stdio.h>

void main() {
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;

    printf("tinggi_badang = [");
    for (int i = 0; i < length; i++) {
        printf("%i, ", tinggi_badan[i]);
        sum += tinggi_badan[i];
    }
    printf("]\n\n");

    float rata_rata = (float) sum / (float) length;
    printf("Total_tinggi_badan / banyak_siswa: %i / %i\n", sum, length);
    printf("Rata Rata tinggi badan: %.2f\n", rata_rata);
}