#include <stdio.h>
#include <stdlib.h>

void main() {
    char buff[255];
    FILE *fptr;

    // membuka file
    if ((fptr = fopen("teks.txt", "r")) == NULL) {
        printf("[X] Error: file tidak ada!\n");
        exit(1);
    }

    // /* baca isi file dengan gets lalu simpan ke buff */
    // fgets(buff, sizeof(buff), fptr); // jika menggunakan fgets hanya menampilkan 1 baris saja dengan 255 panjang baris / karakter

    // /* tampilkan isi file */
    // printf("%s", buff); // Ini adalah puisi untuk kamu

    // /* baca file berkali kali */
    // fgets(buff, sizeof(buff), fptr);
    // printf("%s", buff); // tapi isinya gak jelas
    // fgets(buff, sizeof(buff), fptr);
    // printf("%s", buff); // 
    // fgets(buff, sizeof(buff), fptr);
    // printf("%s", buff); // Ah yang penting file ini

    /* baca isi file dengan gets lalu simpan ke buff */
    while (fgets(buff, sizeof(buff), fptr)) {
        printf("%s", buff);
    }

    /* tutup file */
    fclose(fptr);
}