#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Student;

void display(Student s) {
    printf("\n[+] Display Information\n");
    printf("[O] Name \t: %s\n", s.name);
    printf("[O] Age \t: %i\n", s.age);
}

int main() {
    Student s1;

    printf("[+] Enter Name \t: ");
    scanf(" %s", &s1.name);
    printf("[+] Enter Age \t: ");
    scanf(" %i", &s1.age);

    display(s1);
    return 0;
}