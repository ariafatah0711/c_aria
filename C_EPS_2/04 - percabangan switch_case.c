#include <stdio.h>
#include <ctype.h>

void main() {
    char grade;

    printf("[+] grade: ");
    scanf("%c", &grade);

    switch(toupper(grade)) { // toupper buat huruf besar huruf kecil
        case 'A':
            printf("Luar Biasa\n");
            break;
        case 'B':
        case 'C':
            printf("Bagus\n");
            break;
        case 'D':
            printf("Anda Lulus\n");
            break;
        case 'E':
        case 'F':
            printf("Anda Remedial\n");
            break;
        default:
            printf("Grade Anda Salah");
    }
}