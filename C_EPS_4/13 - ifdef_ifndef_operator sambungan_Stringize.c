#include <stdio.h>

#ifndef DEBUG
// #ifdef DEBUG
#define DEBUG true
#endif

#define message_for(a, b) \
    printf(#a " and "  #b ": we love you!\n")
    // Operator Sambungan => menggunakan backslah
    // #a Operator Stringize (#)

void main() {
    #if defined(DEBUG)
    printf("Debugging mode is on\n");
    #else
    printf("Debugging mode is off\n");
    #endif

    message_for("aria", "fatah");
}