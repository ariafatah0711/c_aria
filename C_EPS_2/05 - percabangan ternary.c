#include <stdio.h>

void main() {
    int jawaban;

    printf("berapakah hasil 3 + 4\n\n");

    printf("jawab> ");
    scanf("%i", &jawaban);

    printf("jawaban anda %s\n", (jawaban == 7) ? "benar" : "salah");
}