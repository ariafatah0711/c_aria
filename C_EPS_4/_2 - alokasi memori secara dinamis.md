# Alokasi Memori Secara Dinamis
- Mengapa Kita Membutuhkan Malloc()?
- Saat kita menjalankan program, komputer akan mengalokasikan memori (RAM) menjadi empat bagian:
  - Bagaian untuk menyimpan kode (Stack Code);
  - Bagian untuk menyimpan variabel global atau static seperti konstanta;
  - Bagian untuk menyimpan variabel lokal, area ini bisa kita sebut stack;
  - Bagian untuk menyimpan variabel dengan alokasi dinamis (heap).

![alt text](docs/images/image-4.png)

- Bagian Code akan menyimpan kode instruksi dari program. Kemudian bagian Global, Stack, dan Heap akan menyimpan nilai dari variabel.
- Kira-kira isinya mungkin akan seperti ini:
  ![alt text](docs/images/image-5.png)
  ```c
  #include <stdio.h>

  int score = 0;

  void main() {
     int level = 1;
  }
  ```
- Maka semua baris instruksi akan disimpan ke dalam Stack Code. Nilai dari variabel score akan disimpan pada bagian stack Static/Global dan nilai dari variabel level akan disimpan di dalam Stack.
  - Isi Stack Code:
  
| Address | Content            |
|---------|--------------------|
| 0000    | #include <stdio.h> |
| 0001    | int score = 0      |
| 0002    | void main();       |
| 0003    | int level = 1      |

- Isi Stack Global:

| Address | Content       |
|---------|---------------|
| 0000    | null          |
| 000a    | 0             |

- Anggap saja 000a adalah alamat memori dari variabel score.
  - Isi Stack Lokal:

| Address | Content       |
|---------|---------------|
| 0000    | null          |
| 000b    | 1             |

- Anggap saja 000b adalah alamat memori dari variabel level.
- Sementara area Heap dipakai untuk menyimpan data yang ukurannya dinamis dan akan disimpan di lokasi yang acak.
- Contoh data dinamis kayak gimana?
- Data yang ukurannya tidak tetap.

```c
// ini variabel dengan ukuran tetap
int enemies[10];

// ini ukuran variabel dengan ukuran dinamis
char name[];
```

- Variabel enemies akan berukuran 10 * 4 byte, yakni 400 byte. Ini karena tipe data integer ukuran default-nya adalah 4 byte. Saat kita membuat array dengan isi 10 integer, maka ukurannya akan 10 kali lipat.
- Artinya, variabel enemies sudah kita alokasikan ukurannya 10 * 4 byte dan ini tidak bisa berubah secara dinamis.
- Misalnya, kita ingin isi variabel enemies dengan 15 item, maka ini tidak akan bisa.. karena ukurannya sudah dibatasi 10.
- Sementara untuk variabel name, bisa kita isi dengan panjang berapapun karena ukurannya dinamis.

- Membuat variabel seperti ini:
  ```c
  char name[];
  ```

- Akan membuatnya disimpan ke dalam Stack, bukan Heap.
- Memangnya kenapa kalau disimpan di dalam Stack?
- Stack punya batasan yang sudah ditentukan oleh sistem operasi.
- Misalnya, anggap saja ukuran stack kita 100 MB. Lalu kita mengisi variabel name dengan teks yang ukurannya 500 MB.
- Maka apa yang akan terjadi?
  - “Stack Overflow”
- Yap, nama StackOverflow diambil dari istilah ini.
- Eh, kok malah bahas StackOverflow. 😄
- Masalah Stack Overflow adalah masalah saat kita memberikan data yang melebihi ukuran stack pada memori.
- Biar tidak terjadi Stack Overflow, maka kita harus pakai memori Heap.
- Gimana Caranya? Caranya menggunakan fungsi untuk alokasi memori seperti malloc(), calloc(), realloc(), dan free().

## Mengenal Fungsi malloc()
- Fungsi malloc() merupakan fungsi untuk mengalokasikan memori secara dinamis dan datanya akan disimpan pada memori heap.
- Fungsi ini berada di dalam library stdlib.h, jadi jika ingin pakai fungsi malloc() maka library stdlib.h harus kita import terlebih dahulu dengan #include.
  ```c
  #include <stdlib.h>
  ```
- Barulah setelah itu kita bisa pakai fungsi malloc().
- Cara menggunakannya gimana?
- Fungsi malloc() menghasilkan sebuah pointer. Pointer tersebut berisi alamat memori pada heap.
- Berikut ini format penggunaan malloc():
  ```c
  type *nama_var = malloc(ukuran);
  ```
- Penjelasan:
  - type adalah tipe data variabel yang ingin kita buat;
  - *nama_var adalah variabel yang bentuknya pointer;
  - ukuran adalah ukuran alokasi memori dalam satuan byte dengan tipe integer.

- Contoh:
  ```c
  int *score = malloc(32);
  ```

- Pada contoh ini, kita membuat variabel *score dengan tipe data int dan akan disimpan ke dalam heap dengan ukuran 32 byte.
- Jika ingin ukurannya mengikuti ukuran tipe data, kita bisa gunakan fungsi sizeof() seperti ini:
  ```c
  int *score = malloc(sizeof(int));
  ```
- Artinya ukuran variabel *score di Heap akan mengikuti ukuran tipe data int, yakni 4 byte.
- Fungsi sizeof() biasanya kita pakai untuk menentukan ukuran secara dinamis.
- Misalnya kita meminta user untuk menginputkan namanya dan kita bisa mengalokasikan ukuran memori berdasarkan panjang namanya dengan fungsi sizeof(name).
  ```c
  char name[] = "Petani Kode"; // diinputkan user

  // alokasi memori dinamis
  char *name = malloc(sizeof(name));
  ```

### Latihan: Fungsi malloc()
```c
#include <stdio.h>
#include <stdlib.h>

void main(){
    struct Player {
        char *name;
        unsigned int hp;
        unsigned int xp;
        unsigned int level;
    };

    // menggunakan malloc
    struct Player *player1 = malloc(sizeof(struct Player));

    player1->name = "Petani Kode";
    player1->hp = 100;
    player1->xp = 5;
    player1->level = 1;

    printf(":: PLAYER STATUS ::\n");
    printf("name : %s\n", player1->name);
    printf("hp   : %d\n", player1->hp);
    printf("xp   : %d\n", player1->xp);
    printf("level: %d\n", player1->level);
}
```

Pada contoh ini, kita menggunakan fungsi malloc() untuk mengalokasikan memori pada variabel *player. Ukuran alokasi memorinya akan mengikuti ukuran dari struct Player, karena kita menggunakan fungsi sizeof() di sana.

## Mengenal Fungsi calloc()
- Fungsi calloc() sama seperti fungsi malloc(), sama-sama berfungsi untuk mengalokasikan memori pada Heap.
- Bedanya, calloc() menggunakan beberapa blok memori untuk satu variabel, sedangkan malloc() hanya mengalokasikan satu blok dengan ukuran tertentu untuk satu variabel.
  ![alt text](docs/images/image-6.png)
- Nilai 100 dan 123 adalah satu blok yang ukurannya sudah ditentukan oleh malloc(). Sedangkan teks “Petani Kode” adalah dua blok memori yang dibuat dengan calloc().
- Performa fungsi calloc() lebih lambat dibandingkan malloc(), karena ia menggunakan banyak blok memori.
- Cara menggunakan fungsi calloc(), sama seperti malloc() hanya saja beda parameter yang diberikan.
  ```c
  calloc(jumlah_blok, ukuran);
  ```
  - jumlah_blok adalah jumlah blok yang ingin dibuat (integer);
  - ukuran adalah ukuran tiap blok dalam satuan byte (integer).
- Fungsi calloc() juga menghasilkan sebuah pointer, karena itu kita harus menyimpannya dalam variabel pointer.
  ```c
  char *name = calloc(2, 32);
  ```

### contoh
```c
#include <stdio.h>
#include <stdlib.h>

void main(){
    struct Product {
        char *name;
        unsigned int price;
        unsigned int stock;
        float weight;
    };

    // menggunakan calloc
    struct Product *buku = calloc(2, sizeof(struct Product));

    buku->name = "Pemrograman C untuk Pemula";
    buku->price = 98000;
    buku->stock = 5;
    buku->weight = 1.2;

    printf("## DETAIL PRODUK ##\n");
    printf("name : %s\n", buku->name);
    printf("harga: %d\n", buku->price);
    printf("stok : %d\n", buku->stock);
    printf("berat: %.2f kg\n", buku->weight);
}
```

Pada contoh ini, kita menggunakan fungsi calloc() untuk mengalokasikan memori variabel buku sebanyak 2 blok dengan ukuran mengikuti ukuran struct Product.

## Mengenal Fungsi realloc()
- Fungsi realloc() adalah fungsi untuk mengalokasikan ulang memori dari variabel yang sudah dialokasikan dengan fungsi malloc() dan calloc().
- Ini biasanya kita butuhkan saat kita ingin menambah atau mengurangi ukuran alokasi memori pada suatu variabel.
- Fungsi realloc() memiliki dua parameter yang harus diberikan:
  ```c
  realloc(*pointer, ukuran_baru);
  ```
- Penjelasan:
  - *pointer adalah variabel pointer yang ingin kita alokasikan ulang;
  - ukuran_baru adalah ukuran alokasi memori untuk mengalokasikan ulang variabel tersebut.
- Contoh:
  ```c
  // mengalokasikan 16 byte
  char *name = malloc(sizeof(char) * 16);

  // mengalokasikan ulang menjadi 32 byte
  name = realloc(name, sizeof(char) * 32);
  ```
- Ukuran 1 karakter untuk tipe data char adalah 1 byte. Pada contoh ini kita mengalokasikan memori untuk 16 karakter atau 16 byte. Lalu mengalokasikan ulang dengan realloc() menjadi 32 karakter.
- Oya, fungsi realloc() juga akan mengubah alamat memori dari variabel ke alamat yang baru.

### contoh
```c
#include <stdio.h>
#include <stdlib.h>

void main(){
   /* Initial memory allocation */
   char *str = malloc(15);
   strcpy(str, "petanikode");
   printf("String = %s,  Address = %x\n", str, str);

   /* Reallocating memory */
   str = realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %x\n", str, str);
}
```

## Mengenal Fungsi free()
- Fungsi free() adalah fungsi untuk menghapus alokasi memori yang sudah dibuat oleh fungsi malloc(), calloc(), dan realloc().
- Fungsi free(), punya satu parameter yakni variabel yang ingin dihapus alokasinya.
  ```c
  free(nama_variabel);
  ```

### contoh
```c
#include <stdio.h>
#include <stdlib.h>

void main(){
   /* Initial memory allocation */
   char *str = malloc(15);
   strcpy(str, "petanikode");
   printf("String = %s,  Address = %x\n", str, str);

   /* Reallocating memory */
   str = realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %x\n", str, str);

   free(str);

   printf("String = %s,  Address = %x\n", str, str);
}
```

- Isi variabel str akan kosong, karena alokasi memorinya sudah kita hapus. Namun, dia tetap melakukan pointing pada alamat memori di Heap.