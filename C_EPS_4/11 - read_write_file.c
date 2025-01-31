#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buff[255];
FILE *fptr;

void read(char *file) {
    fptr = fopen(file, "r");
    printf("|---- \t\topen\t\t ----|\n");

    while(fgets(buff, sizeof(buff), fptr)) {
        printf("%s", buff);
    }

    printf("|---- \t\tclose\t\t ----|");
    fclose(fptr);
}

void write(char *file) {
    char text[255];
    fptr = fopen(file, "a");
    if (fptr == NULL) {
        printf("[-] Gagal membuka file untuk menulis!");
        return;
    }

    while (1) {
        printf("|_ w/q> ");
        fgets(text, sizeof(text), stdin);

        text[strcspn(text, "\n")] = '\0';
        if (strcmp(text, "w") == 0) {
            fflush(fptr);
            continue;
        } else if (strcmp(text, "q") == 0) {
            break;
        } else if (text[0] == '\0') {
            fputs("\n", fptr);
            continue;
        }

        strcat(text, "\n");
        fputs(text, fptr);
    }
    
    fclose(fptr);
}

void delete(char *file) {
    if (remove(file) == 0) {
        printf("[+] File berhasil dihapus!");
    } else {
        printf("[-] Gagal menghapus file!");
    }
}

int main() {
    char *file = "teks_3.txt";
    char input;
    
    printf("[+] Progam Write Read Delete File\n");
    printf("|_ 1. Read File \n|_ 2. Write File\n|_ 3. Delete File");

    while (1) {
        printf("\n\n[+] NO > ");
        // fgets(input, sizeof(input), stdin);
        scanf(" %c", &input);

        while (getchar() != '\n');  // menghilangkan newline

        if (input == '1') {
            read(file);
        } else if (input == '2') {
            write(file);
        } else if (input == '3') {
            delete(file);
        } else {
            exit(1);
        }
    }
}