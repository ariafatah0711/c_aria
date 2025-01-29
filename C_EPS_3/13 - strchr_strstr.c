#include <stdio.h>
#include <string.h>

void main() {
    // strchr
    char nama[] = "Aria fatah";
    char huruf = 'a';
    char* hasil;

    printf("\n[+] Mencari huruf '%c' dalam nama... '%s'\n\n", huruf, nama);
    // mencari huruf
    hasil = strchr(nama, huruf);

    printf("hasil \t= %s \t| %d\n", hasil, hasil); // Ari => a fatah (a ditemukan di 4)
    printf("nama \t= %s \t| %d\n", nama, nama); // Aria fatah
    printf("nama+1 \t= %s \t| %d\n", nama+1, nama+1); // A ria fatah
    printf("nama+2 \t= %s \t| %d\n", nama+2, nama+2); // Ar ia fatah
    printf("\nresult - (nama+1) \t= %d\n", hasil - (nama+1)); // 2
    printf("hasil - nama+1 \t\t= %d\n\n", hasil - nama+1); // 4

    while(hasil != NULL) {
        printf("Ditemukan pada huruf ke-%d\n", hasil - nama+1);
        hasil = strchr(hasil+1, huruf); // setelah ditemukkan dia akan mencari lagi
        // misal sebelumnya a fatah
        // akan menjadi resultnya = atah
    }
    printf("\n");

    // strstr
    char str[] = "petani code!"; 
    // char *str = "petani code!"; // kalo ini tidak akan berhasil

    // cari kata code
    hasil = strstr(str, "code");
    printf("hasil \t= %s \t| %d\n", hasil, hasil); // code!
    
    // lalu ubah kata "code" menjadi "kode"
    strncpy(hasil, "KODE", 0); // Kode
    puts(str);

    strncpy(hasil, "KODE", 4); // KODE...
    puts(str);

    strncpy(hasil, "KODE", 5); // KODE 
    puts(str);
}