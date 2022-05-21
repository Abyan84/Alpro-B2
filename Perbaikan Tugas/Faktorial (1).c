// Nama File	    : Faktorial.c
// Deskripsi	    : Menghitung nilai faktorial dari sebuah bilangan integer N sembarang
// Pembuat	        : Abyan Izzah Azzam Hastono - 24060121130082
// Waktu dikerjakan : Selasa, 05-04-2022 Pukul 20:00

#include <stdio.h>
#include <stdlib.h>

int Faktorial (int x)
{
    //Kamus Lokal
    int i ;
    int H ;

    //Algoritma
    if (x == 0){
        H = 1 ;
    }
    else{
        H = 1 ;
        for (i = x; i >= 1; i--){
            H = H * i ;
        }
    }
    return H ;
}

int main()
{
    //Kamus
    int N ;

    //Algoritma
    printf("Program faktorial \n");
    printf("Masukkan bilangan integer = \n");
    scanf("%d", &N) ;
    if (N > 0){
        printf("maka faktorialnya adalah %d", Faktorial(N)) ;
    }
    else{
        printf("N harus bilangan positif") ;
    }
}
