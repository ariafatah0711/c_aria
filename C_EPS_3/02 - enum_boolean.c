#include <stdio.h>

enum boolean {false, true};

void main() {
    int a = 6;
    int b = 5;

    if (a < b == true){
        printf("variablel a lebih kecil dari b\n");
    }

    if (a < b == false) {
        printf("variable a tidak lebih kecil dari b\n");
    }
}