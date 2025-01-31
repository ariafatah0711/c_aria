#include <stdio.h>
#include <stdlib.h>

void main() {
    char buff[255];
    char text[255];
    FILE *fptr;

    /*membuka file*/
    fptr = fopen("teks_2.txt", "w");

    // mengambil input dari user
    printf("Inputkan isi file: ");
    fgets(text, sizeof(text), stdin);

    /* menulis ke text ke file */
    fputs(text, fptr);

    printf("File Berhasil Ditulis\n\n");

    /* tutup file */
    fclose(fptr);

    /* buka kembali file*/
    fptr = fopen("teks_2.txt", "r");
    while(fgets(buff, sizeof(buff), fptr)) {
        printf("Isi filenya sekarang \t: %s", buff);
    }

    fclose(fptr);
}