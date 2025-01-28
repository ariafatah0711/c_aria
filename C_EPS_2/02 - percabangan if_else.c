#include <stdio.h>
#include <string.h>

void main() {
    char username[30], password[30];

    printf("[-] progam login\n");

    // username
    printf("[+] username: ");
    scanf("%s", &username);
   
    if ( strcmp(username, "aria") == 0) {
        printf("username benar!");
    } else {
        printf("username salah!");
    }

    // password
    printf("\n[+] password: ");
    scanf("%s", &password);

    if (strcmp(password, "aria") == 0) {
    // if (password == "aria") {
        printf("password benar!");
    } else {
        printf("password salah!");
    }

    printf("\n\nTerima kasih sudah menggunakan aplikasi ini!\n");
}