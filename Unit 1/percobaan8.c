#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

// Tanda (.) yang diikuti oleh angka pada code di atas digunakan untuk mengatur jumlah digit desimal 
// yang akan ditampilkan saat memformat angka float dalam output.

// %f Menampilkan nilai float dengan presisi default
// %.1f Menampilkan nilai float dengan 1 digit desimal
// %.2f Menampilkan nilai float dengan 2 digit desimal
// %.3f Menampilkan nilai float dengan 3 digit desimal
// %.4f Menampilkan nilai float dengan 4 digit desimal
// %.5f Menampilkan nilai float dengan 5 digit desimal