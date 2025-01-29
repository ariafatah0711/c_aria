#include <stdio.h>

void main() {
    typedef struct {
        char* name;
        char* cpu;
        int memory;
    } telp; // harus di as / alias lagi

    struct Laptop {
        char* name;
        char* cpu;
        int memory;
    };

    telp iphone = {
        .name = "iPhone Pro max",
        .cpu = "ARM",
        .memory = 8
    };

    struct Laptop lenovo = {
        .name = "ThinkPad X",
        .cpu = "AMD",
        .memory = 16
    };

    printf("iphone name: %s\n", iphone.name);
    printf("lenovo name: %s\n", lenovo.name);
}