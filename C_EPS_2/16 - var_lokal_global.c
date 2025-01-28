#include <stdio.h>

// variable global
int nilai = 9;
char nama[10] = "aria";
const char pass[10] = "aria1";

void main() {
    // variable local
    // int nilai = 5;
    // char nama[10] = "malik";
    char pass[10] = "aria2";

    printf("Nama \t: %s\n", nama);
    printf("Nilai \t: %d\n", nilai);
    printf("pass \t: %s", pass);
}