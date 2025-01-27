#include <stdio.h>

void main() {
    int a, b, c;

    printf("nilai a: ");
    scanf("%i", &a);

    printf("nilai b: ");
    scanf("%i", &b);
    
    // tambah
    // c = a + b;
    printf("\nhasil dari %i + %i = %i\n", a, b, (a + b));

    // kurang
    // c = a - b;
    printf("hasil dari %i - %i = %i\n", a, b, (a - b));

    // perkalian
    // c = a * b;
    printf("hasil dari %i * %i = %i\n", a, b, (a * b));

    // pembagian
    // c = a / b;
    // printf("hasil dari %i / %i = %i\n", a, b, (a / b));
    printf("hasil dari %i / %i = %.2f\n", a, b, ( (float) a / b));

    // sisa bagi / module
    // c = a % b;
    printf("hasil dari %i %% %i = %i\n", a, b, (a % b));
}