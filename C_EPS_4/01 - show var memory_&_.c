#include <stdio.h>

void main() {
    int a;
    char *b;

    printf("Alamat memori variable a: %x, yang berisi : %i\n", &a, a);
    printf("Alamat memori variable b: %x, yang berisi : %s\n", &b, b);

    a = 5;
    b = "aria";

    printf("Alamat memori variable a: %x, yang berisi : %i\n", &a, a);
    printf("Alamat memori variable b: %x, yang berisi : %s\n", &b, b);
}