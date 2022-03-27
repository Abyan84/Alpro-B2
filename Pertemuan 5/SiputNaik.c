// Nama File      : SiputNaik.c
// Deskripsi      : Mengetahui berapa hari waktu yang dibutuhkan untuk siput mencapai ketinggian N meter
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Sabtu, 26-03-2022 19:00 WIB

#include <stdio.h>

int main(){
    /*Kamus*/
    float N,i;
    int hari;

    /*Algoritma*/
    printf("Masukkan kedalaman lubang :");
    scanf("%f", &N);

    hari = 0;
    i = 0;
    while (i < N-0.1)
    {
        hari = hari + 1;
        i = i + 0.2;
    }
    printf("Siput membutuhkan %i hari untuk mencapai ujung lubang", hari);
    printf("\nNilai N : %f\n", N);
    printf("\nNilai i : %f\n", i);
    

}
