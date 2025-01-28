#include <stdio.h>

void main() {
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int length = sizeof(matriks) / sizeof(*matriks);
    int length_2 = sizeof(matriks[0]) / sizeof(*matriks[0]);

    printf("[+] matriks\n");
    printf("[-] length: %i, %i\n", length, length_2);

    printf("\n[-] _ _ _ [-]");
    for (int i = 0; i < length; i++) {
        printf("\n[-] ");
        for (int j = 0; j < length_2; j++) {
            printf("%i ", matriks[i][j]);
        }
        printf("[-]");
    }
    printf("\n[-] _ _ _ [-]");

    printf("\n\nIsi Data pada matriks ke-(1,0): %d\n", matriks[1][0]);
    printf("Isi Data pada matriks ke-(2,2): %d\n", matriks[2][2]);
    printf("Isi Data pada matriks ke-(0,0): %d\n", matriks[0][0]);
}