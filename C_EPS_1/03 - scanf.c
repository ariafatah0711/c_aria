#include <stdio.h>

int main () {
    char nama[20];
    int kelas, umur;

    // harus ada & untuk mengambil alamat variable

    printf("nama: ");
    // scanf("%s", &nama);
    scanf("%[^\n]s", &nama);

    printf("kelas: ");
    scanf("%i", &kelas);
    // scanf("%[^\n]i", &kelas);

    printf("umur: ");
    scanf("%i", &umur);
    // scanf("%[^\n]i", &umur);

    printf("\n----------------------------\n");
    printf("Nama: %s\n", nama);
    printf("kelas: %i\n", kelas);
    printf("umur %i", umur);

    return 0;
}