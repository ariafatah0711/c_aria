#include <stdio.h>
#include <string.h>

int main() {
    char nama[20], angka[4];
    char kelasStr[10], umurStr[10];
    int kelas, umur;

    printf("nama: ");
    // gets(nama); // sudah tidak aman
    fgets(nama, sizeof(nama), stdin);

    printf("kelas: ");
    gets(kelasStr);
    // fgets(kelasStr, sizeof(kelasStr), stdin);
    sscanf(kelasStr, "%d", &kelas); // convert to int

    printf("umur: ");
    // gets(umur);
    fgets(umurStr, sizeof(umurStr), stdin);
    sscanf(umurStr, "%d", &umur);

    printf("\n----------------------------\n");
    printf("Nama: %s", nama);
    printf("kelas: %i\n", kelas);
    printf("umur %i", umur);

    return 0;
}
