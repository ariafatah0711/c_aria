#include <stdio.h>
int sum(int n);

void main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);


    printf("[-]number: %i\n \n[-] number: ", number);
    result = sum(number);

    printf("\n\nsum = %d", result);
    // 5 = 5 + 4 + 3 + 2 + 1 = 15
}

int sum(int num) {
    printf("%i", num);
    if (num != 0) {
        printf("+");
        return num + sum(num-1); // fungsi sum() memanggil dirinya sendiri
    } else
        return num;
}