#include <stdio.h>

int main () {
    int a, b, c;

    printf("nilai a: ");
    scanf("%i", &a);

    printf("nilai b: ");
    scanf("%i", &b);

    c = a + b;
    printf("hasil %i + %i = %i", a, b, c);
}