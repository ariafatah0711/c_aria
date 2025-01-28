#include <stdio.h>
#include <string.h>

void main() {
    char username[30], password[30];

    printf("[-] welcome to Awesome Progam\n\n");

    printf("username \t:");
    scanf("%s", &username);
    // fgets(username, 30, stdin);
    // gets(username);
    printf("password \t:");
    scanf("%s", &password);
    // fgets(password, sizeof(password), stdin);
    // gets(password);

    printf("\n");

    if (strcmp(username, "aria") == 0) {
    // if (username == "aria") {
        if (strcmp(password, "aria") == 0) {
        // if (password == "aria") {
            printf("[O] selamat datang bos!\n");
        } else {
            printf("[X] password anda salah, coba lagi!");
        }
    } else {
        printf("[X] anda belum terdaftar\n");
    }
}