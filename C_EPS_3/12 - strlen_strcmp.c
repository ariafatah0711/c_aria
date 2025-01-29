#include <stdio.h>
#include <string.h>

void main() {
    // strlen
    char name[] = "Aria Fatah";
    int panjang_nama = strlen(name);
    printf("[+] Panjang Nama\t: %i\n", panjang_nama);

    // strcmp
    char str1[] = "aria";
    char *str2 = "fatah";
    int hasil;

    // membandingkan string
    hasil = strcmp(str1, str2);

    if (hasil == 0) {
        printf("str1 dan str2 sama (%s)\n", hasil);
    } else {
        printf("str1 dan str2 berbeda (%i)\n", hasil);
    }

    str2 = "aria";

    hasil = strcmp(str1, str2);
    
    if (hasil == 0) {
        printf("str1 dan str2 sama (%s)\n", hasil);
    } else {
        printf("str1 dan str2 berbeda (%i)\n", hasil);
    }
}