#include <stdio.h>

int kelilingPersegi(int sisi)
{
    return sisi * 4;
}

int luasPersegi(int sisi)
{
    return sisi * sisi;
}

int volumeKubus(int sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    int sisi;
    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    printf("Keliling persegi: %d\n", kelilingPersegi(sisi));
    printf("Luas persegi: %d\n", luasPersegi(sisi));
    printf("Volume kubus: %d\n", volumeKubus(sisi));

    return 0;
}