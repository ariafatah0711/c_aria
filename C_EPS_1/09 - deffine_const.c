#include <stdio.h>
#define SEPULUH 10 // tidak perlu tipe data
#define VERSI 6.5
#define JENIS_KELAMIN 'L'

void main() {
    printf("konstanta SEPULUH adalah %i\n", SEPULUH);
    printf("konstanta VERSI adalah %.1f\n", VERSI);
    printf("konstanta JENIS_KELAMIN adalah %c\n", JENIS_KELAMIN);

    const double PI = 3.14; // perlu tipe data
    // const char JENIS_KELAMIN = 'p';
    
    // double PI = 12.1;
    // PI = 12.19;
    printf("konstanta PI adalah %2.f\n", PI);
    printf("konstanta JENIS_KELAMIN adalah %c\n", JENIS_KELAMIN);
}