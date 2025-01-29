#include <stdio.h>

// saldo
int balance = 0;

// enum permission
enum Permission {READ = 1, WRITE = 2, PUT = 4};

// cek saldo
void cek_saldo(enum Permission perm) {
    if (perm & READ) {
        printf("[O] Saldo: %i\n", balance);
    } else {
         printf("[-] Permission READ denied\n");
    }
}

// add saldo
void add_saldo(enum Permission perm) {
    if (perm & WRITE) {
        printf("[+] saldo ditambahkan +100\n");
        balance += 100;
    } else {
        printf("[-] Permission WRITE denied\n");
    }
}

// put saldo
void put_saldo(enum Permission perm) {
    if (perm & PUT) {
        printf("[+] saldo dikurang -100\n");
        balance -= 100;
    } else {
        printf("[-] Permission PUT denied\n");
    }
}

void main() {
    // set flag dengan operasi bitwise or
    enum Permission userPermission = WRITE;
    // enum Permission userPermission = READ | WRITE;
    // enum Permission userPermission = READ | PUT;
    // enum Permission userPermission = READ | WRITE | PUT;
    char no;
    
    printf("1. cek saldo\n2. add saldo\n3. put saldo\n");

    while (1) {
        printf("\n[+] input: ");
        scanf(" %c", &no);
        if (no == '1') {
            cek_saldo(userPermission);
        } else if (no == '2') {
            add_saldo(userPermission);
        } else if (no == '3') {
            put_saldo(userPermission);
        } else {
            cek_saldo(userPermission);
            break;
        }
    }
}