#include <stdio.h>

struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

int main() {
    // Array untuk menyimpan data mahasiswa
    // struct Mahasiswa mahasiswa[3];  // Array dengan 3 elemen

    // Mengisi data mahasiswa
    // mahasiswa[0].name = "aria";
    // mahasiswa[0].address = "depok";
    // mahasiswa[0].age = 18;

    // mahasiswa[1].name = "muzaki";
    // mahasiswa[1].address = "depok";
    // mahasiswa[1].age = 17;

    // mahasiswa[2] = {
    //     .name = "anonim",
    //     .address = "anonim",
    //     .age = 0
    // };

    struct Mahasiswa mahasiswa[3] = {
        {"aria", "depok", 18},
        {"muzaki", "depok", 17},
        {"anonim", "anonim", 0}
    };

    // Looping untuk mencetak data mahasiswa
    for (int i = 0; i < sizeof(mahasiswa) / sizeof(*mahasiswa); i++) {
        printf("[+] mahasiswa %d\n", i + 1);
        printf("[-] nama \t: %s\n", mahasiswa[i].name);
        printf("[-] address\t: %s\n", mahasiswa[i].address);
        printf("[-] age \t: %i\n", mahasiswa[i].age);
        printf("\n");
    }

    return 0;
}