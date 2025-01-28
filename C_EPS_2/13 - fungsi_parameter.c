#include <stdio.h>

void say_hello() {
    printf("Hello Selamat Datang!\n");
}

void say(char name[]) {
    printf("Hello %s!\n", name);
}

void add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// buat fungsinya dulu
void newline();

void main() {
    say_hello();
    say_hello();
    newline();

    say("aria pemula");
    say("dimas kurniawan");
    say("muzaki c++");
    newline();

    add(5, 10);
}

// baru bikin fungsinyya kalo engga gak bakal bisa dan akan error
void newline() {
    printf("\n");
}