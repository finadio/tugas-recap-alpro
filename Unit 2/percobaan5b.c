#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

// Program menggunakan perulangan bersarang while untuk melakukan iterasi dan mencetak hasil perkalian 
// antara bilangan utama dan bilangan pengali.
// Dalam perulangan pertama, variabel i digunakan untuk mengiterasi nilai dari 2 hingga 3. 
// Setiap iterasi, program mencetak pesan "Bilangan utama: " diikuti dengan nilai i.
// Di dalam perulangan pertama, terdapat perulangan kedua. Perulangan kedua menggunakan variabel j 
// untuk mengiterasi nilai dari 1 hingga 2. Setiap iterasi dari j, 
// program mencetak pesan "Bilangan pengali: " diikuti dengan nilai j. 
// Selanjutnya, program mencetak hasil perkalian antara i dan j dengan pesan "Hasil perkalian: ".
// Kedua perulangan tersebut berulang sampai kondisi tidak terpenuhi lagi.

// Output yang dihasilkan
// Bilangan utama: 2
//  Bilangan pengali: 1
//   Hasil perkalian: 2

//  Bilangan pengali: 2
//   Hasil perkalian: 4

// Bilangan utama: 3
//  Bilangan pengali: 1
//   Hasil perkalian: 3

//  Bilangan pengali: 2
//   Hasil perkalian: 6