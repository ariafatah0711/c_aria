#include <stdio.h>

void main() {
    // pointer
    int x = 5;
    int *a = &x;

    // alammat memori
    printf("alamat memori variable a(%i) adalah %x\n", x, &a);

    // ternary
    int b = 4;

    printf("\nb > 1 adalah %s", b > 1 ? "benar" : "salah");
    printf("\nb < 1 adalah %s", b <= 1 ? "benar" : "salah");

    // Increment dan decrement
    int c = 3;

    // Increment
    c++;
    printf("\n\nc++ = %d\n", c);

    ++c;
    printf("++c = %d\n", c);

    // decrement
    c--;
    printf("c-- = %d\n", c);

    --c;
    printf("--c = %d\n", c);
}