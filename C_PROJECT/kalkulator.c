#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hitung(int a, char operator, int b) {
    switch (operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        case '%': return (b != 0) ? a % b : 0;
        default:
            return 0;
    }
    return 0;
}

void show_header(int a, char operator, int b) {
    system("cls");
    printf("[+] Kalkulator V1 | ariaf.my.id\n\n");
    printf("\t|_ _ _ _ _ _ _ _|\n");
    printf("\t| %d %c %d = %d \n", a, operator, b, hitung(a, operator, b));
    printf("\t|_ _ _ _ _ _ _ _|\n");
    printf("\t|_ _ 1 2 3 _ _ _|\n");
    printf("\t|_ _ 4 5 6 _ _ _|\n");
    printf("\t|_ _ 7 8 9 _ _ _|\n");
    printf("\t|_ _ _ _ _ _ _ _|\n");
    printf("\t|_ _ + - * / % _ _|\n");
    printf("\t|_ _ _ _ _ _ _ _|\n\n");
}

int main() {
    char input[10];
    int a = 0, b = 0;
    char operator = 'n';

    while(1) {
        show_header(a, operator, b);
        printf("angka  1> ");
        scanf(" %s", &input);
        if (strcmp(input, "q") == 0) exit(1); // keluar jika input q
        a = atoi(input); // konversi char to int
        
        show_header(a, operator, b);
        printf("operator> ");
        scanf(" %c", &operator);
        if (operator == 'q') exit(1);

        show_header(a, operator, b);
        printf("angka  2> ");
        scanf(" %s", &input);
        if (strcmp(input, "q") == 0) exit(1);
        b = atoi(input);
    }

    return 0;
}