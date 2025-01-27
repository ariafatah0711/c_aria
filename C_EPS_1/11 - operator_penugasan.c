#include <stdio.h>

void main() {
    int a, b;

    // pengisian nilai dengan operator =
    a = 5;
    b = 10;
    printf("a = %d \nb = %d\n\n", a, b);

    // pengisian sekaligus penambahan
    b += a; // ini sama seperti b = b + a
    printf("hasil b += a adalah %d\n", b);

    // pengisian sekaligus pengurangan
    b -= a; // ini sama seperti b = b - a
    printf("Hasil b -= a adalah %d\n", b);

    // pengisian sekaligus perkalian
    b *= a; // ini sama seperti b = b * a
    printf("Hasil b *= a adalah %d\n", b);

    // pengisian sekaligus pembagian
    b /= a; // ini sama seperti b = b / a
    printf("Hasil b /= a adalah %d\n", b);

    // pengisian sekaligus sisa bagi
    b %= a; // ini sama seperti b = b % a
    printf("Hasil b %%= a adalah %d\n", b);
}