#include <stdio.h>

// mendaftarkan macro
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    // #undef MAX
    printf("Max beetwen 20 and 10 is %d\n", MAX(10, 20));

    printf("[+] File : %s\n", __FILE__);
    printf("[+] Date : %s\n", __DATE__);
    printf("[+] Time : %s\n", __TIME__);
    printf("[+] Line : %d\n", __LINE__);
    printf("[+] ANSI : %d\n", __STDC__);

    return 0;
}