#include <stdio.h>

void main() {
    int nilai;
    char grade;

    printf("[-] Progam Grade Nilai\n\n");

    printf("[+] Nilai: ");
    scanf("%i", &nilai);

    if (nilai >= 90) {
        grade = 'A';
    } else if (nilai >= 80) {
        grade = 'B';
    } else if (nilai >= 60) {
        grade = 'C';
    } else if (nilai >= 50) {
        grade = 'D';
    } else if (nilai >= 30) {
        grade = 'E';
    } else {
        grade = 'F';
    }

     printf("Nilai\t\t: %i\n", nilai);
     printf("Grade anda\t: %c", grade);
}