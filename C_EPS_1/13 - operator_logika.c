#include <stdio.h>

void main() {
    int a = 1;
    int b = 0; // false

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // logika AND
    printf("a && b = %d\n", a && b); // 0

    // logika OR
    printf("a || b = %d\n", a || b); // 1

    // logika NOT
    printf("!a = %d\n", !a); // 0
    printf("!b = %d\n", !b); // 1
}