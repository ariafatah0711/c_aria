#include <stdio.h>

struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

void main() {
    // struct Mahasiswa mhs1, mhs2;
    // struct Mahasiswa mhs1, mhs2, mhs3 = {
    struct Mahasiswa mhs1, mhs2 = {
        .name = "anonim",
        .address = "anonim",
        .age = 0
    };

    mhs1.name = "aria";
    mhs1.address = "depok";
    mhs1.age = 18;
    
    struct Mahasiswa mhs3 = {
        .name = "muzaki",
        .address = "depok",
        .age = 17
    };

    mhs3.age = 18;

    printf("\n[+] mahasiswa 1\n");
    printf("[-] nama \t: %s\n", mhs1.name);
    printf("[-] address\t: %s\n", mhs1.address);
    printf("[-] age \t: %i\n", mhs1.age);

    printf("\n[+] mahasiswa 2\n");
    printf("[-] nama \t: %s\n", mhs2.name);
    printf("[-] address\t: %s\n", mhs2.address);
    printf("[-] age \t: %i\n", mhs2.age);

    printf("\n[+] mahasiswa 3\n");
    printf("[-] nama \t: %s\n", mhs3.name);
    printf("[-] address\t: %s\n", mhs3.address);
    printf("[-] age \t: %i\n", mhs3.age);

    // printf("\n[+] mahasiswa 4\n");
    // printf("[-] nama \t: %s\n", mhs4.name);
    // printf("[-] address\t: %s\n", mhs4.address);
    // printf("[-] age \t: %i\n", mhs4.age);
}