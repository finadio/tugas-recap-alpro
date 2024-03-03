#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

// Program mendefinisikan dua konstanta "MAX_PERSONS" dan "MAX_NAME_LENGTH" 
// yang menentukan ukuran maksimum dari array nama dan panjang karakter maksimum dari nama itu sendiri.
//  Kemudian, program mendefinisikan array "names" yang berisi nama-nama orang dengan tipe data
// dari array tersebut adalah char dan array `ages` yang berisi usia masing-masing orang dengan tipe data dari array
// tersebut adalah int
// Selanjutnya, program mencetak header tabel menggunakan dua pernyataan printf. 
// Kemudian, program melakukan iterasi melalui array names dan ages menggunakan loop for. 
// Dalam setiap iterasi, program mencetak nama dan usia orang yang sesuai dengan indeks yang sedang diiterasi.