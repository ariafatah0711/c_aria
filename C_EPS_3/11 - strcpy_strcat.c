#include <stdio.h>
#include <string.h>

void main() {
    // strcpy
    char title[] = "Belajar Bahasa C";
    char title_copy[20];

    // copy string title ke title_copy
    strcpy(title_copy, title);

    // maka sekarang title_copy akan berisi;
    printf("[+] isi title_copy \t: %s\n\n", title_copy);

    // strcat
    char name[] = "Aria Fatah";
    char gelar[] = ", S.kom";

    // menggabung string
    strcat(name, gelar);
    printf("[+] Nama Lengkap\t: %s\n", name);
}