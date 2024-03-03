#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

// Pada program yang menggunakan fgets, input akan membaca keseluruhan baris, termasuk spasi
// Ini berarti program akan membaca seluruh nama lengkap yang dimasukkan oleh pengguna dan juga termasuk spasi di dalamnya.