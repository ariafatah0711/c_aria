#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    /* Initial memory allocation */
    char *str = malloc(15);
    strcpy(str, "petani kode");
    printf("String = %s, Address = %x\n", str, str);

    /* Reallocating memory */
    str = realloc(str, 25);
    strcat(str, ".com");
    
    printf("String = %s, Address = %x\n", str, str);

    // free
    free(str);
    // str = NULL;

    printf("String = %s,  Address = %x\n", str, str);

    return 0;
}