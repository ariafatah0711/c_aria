#include <stdio.h>

int main() {
    // printf
    printf("Hello, ini adalah teks output\n");
    printf("Nama saya %s\n", "aria");
    printf("Usia saya %d\n", 18);

    // puts automation newline \n
    puts("Hallo");
    puts("nama saya aria");

    // putchar
    putchar('A'); // harus kutip 1
    // putchar("A"); // error
    putchar('a');
    putchar('7');
    // putchar('aria'); // error
    return 0;
}

// %s adalah simbol untuk menampilkan nilai string;
// %d adalah simbol untuk menampilkan nilai angka atau bilangan desimal;
// \n adalah simbol untuk membuat baris baru.

// Simbol	Arti atau Fungsi
// %c	untuk menampilkan karakter
// %s	untuk menampilkan teks (string)
// %d, %i	untuk menampilkan bilangan desimal
// %f	untuk menampilkan bilangan pecahan
// %o	untuk menampilkan bilangan oktal
// %x	untuk menampilkan bilangan heksadesimal
// \t	untuk membuat tabs