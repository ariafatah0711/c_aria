#include <stdio.h>

// token paster
#define tokenpaster(n) printf ("%d", token_##n)

// defined
#if !defined (MESSAGE)
    #define MESSAGE "You wish!"
#endif

int main() {
    // int petani_kode = 40;
    int token_petani_kode = 40;

    // token paster petani_kode => token_ ##n(petani_kode) => token_petani_kode
    tokenpaster(petani_kode);

    // defined
    printf("Here is the message %s\n", MESSAGE);

    return 0;
}