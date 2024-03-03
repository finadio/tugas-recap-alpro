#include <stdio.h>

int main()
{
    int jarak, waktu, kecepatan;

    // MENGHITUNG KECEPATAN
    // Input jarak dan waktu
    printf("Masukkan jarak dan waktu: ");
    scanf("%d %d", &jarak, &waktu);
    // Rumus perhitungan
    float v = (float)jarak / waktu;

    // MENGHITUNG JARAK
    //Input kecepatan dan waktu
    printf("Masukkan kecepatan dan waktu: ");
    scanf("%d %d", &kecepatan, &waktu);
    // Rumus perhitungan
    float s = (float)kecepatan * waktu;

    // MENGHITUNG  WAKTU
    // Input jarak dan kecepatan
    printf("Masukkan jarak dan kecepatan: ");
    scanf("%d %d", &jarak, &kecepatan);
    // Rumus perhitungan
    float t = (float)jarak / kecepatan;

    //  HASIL PERHITUNGAN
    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);

    return 0;
}