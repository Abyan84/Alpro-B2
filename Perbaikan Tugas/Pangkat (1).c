// Nama File	    : Pangkat.c
// Deskripsi	    : Menghitung nilai pangkat dari 2 bilangan integer sembarang
// Pembuat	        : Abyan Izzah Azzam Hastono - 24060121130082
// Waktu dikerjakan : Selasa, 05-04-2022 Pukul 20:00

#include <stdio.h>
#include <stdlib.h>

int Pangkat(int a,int b)
{
    //Kamus Lokal
    int x ;
    int y ;
    int Hasil ;

    //Algoritma
    if(b > 0){
        Hasil = 1 ;
        for(x = 1; x <= b; x++){
            Hasil = Hasil * a ;
        }
    }
    else if (b < 0){
        Hasil = 1 ;
        for(y = b; y <= -1; y++){
            Hasil = Hasil * -a ;
        }
    }
    else{
        Hasil = 1 ;
    }
    return Hasil ;
}

int main()
{
    //Kamus main
    int a ;
    int b ;

    // Algoritma
    printf("Program Pangkat \n");
    printf("Masukkan bilangan yang ingin dipangkat = \n");
    scanf("%d",&a);
    printf("Masukkan besar pangkat yang diinginkan = \n");
    scanf("%d",&b);
    printf("maka, hasil nya adalah %d",Pangkat(a,b));

    return 0;
}
