// Nama File	    : BilPrimaN.c
// Deskripsi	    : Menampilkan faktor bilangan prima
// Pembuat	        : Abyan Izzah Azzam Hastono - 24060121130082
// Waktu dikerjakan : Selasa, 05-04-2022 Pukul 20:00

#include <stdio.h>


int main(){
    // Kamus
    int N;
	int i,j,F;
    
    // Algoritma
    printf("Program Deret Bilangan Prima\n");
    printf("Masukkan bilangan integer positif N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        printf("Bilangan Primanya adalah ");
        for ( i = 1; i <= N; i++){
            F = 0;
            for ( j = 1; j <= i; j++){
                if (i % j == 0){
                    F = F + 1;
                } 
            }
            if (F == 2){
                if (i == 2){
                    printf("%i", i);
                }
                else{
                    printf(",%i",i);
                }
            }
        }
    }
}
