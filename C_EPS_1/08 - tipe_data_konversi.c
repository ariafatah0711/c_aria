#include <stdio.h>

void main() {
    int a = 5;
    int b = 2;

    // float c = a / b;
    float c = (float) a / (float) b; 

    printf("Hasil, %i / %i = %.1f\n", a, b, c);
}