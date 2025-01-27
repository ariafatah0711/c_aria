#include <stdio.h>

void main() {
    int a = 6;
    int b = 3;

    // Bitwise AND (&)
    printf("a & b = %d\n", a & b); // 0110 && 0011 = 0010 (2)

    // Bitwise OR (|)
    printf("a | b = %d\n", a | b); // 0110 || 0011 = 0111 (7)

    // Bitwise XOR (^)
    printf("a ^ b = %d\n", a ^ b); // 0110 ^ 0011 = 0101 (5)

    // Bitwise NOT (~)
    printf("~a = %d\n", ~a); // 

    // Bitwise NOT (~) membalik semua bit.
    // Pada sistem two's complement, hasilnya akan menjadi bilangan negatif.
    // Rumus singkat: ~x = -(x + 1).

    // Bitwise Left Shift (<<)
    printf("a << 1 = %d\n", a << 1); // 0110 << sekali => 1100 = 12
    printf("8 << 1 = %d\n", 8 << 1); // 1000 << sekali => 10000 = 16

    // Bitwise Right Shift (>>)
    printf("a >> 1 = %d\n", a >> 1); // 0110 >> sekali => 0011 = 3
    printf("a >> 2 = %d\n", a >> 2); // 0110 >> dua kali => 0001
    printf("a >> 3 = %d\n", a >> 4); // 0110 >> dua kali => 0000
}