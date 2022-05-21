// Nama File      : CekPrima.c
// Deskripsi      : Menentukan bilangan prima atau tidak dari bilangan integer sembarang (N>0)
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Sabtu, 26-03-2022 18:45 WIB
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
        int N ;
        int i ;
        int X=0 ;

    // Algoritma
        printf("Masukan Bilangan integer sembarang: ");
        scanf("%d", &N);
        if(N>0){
            for(i=1 ; i<=N ; i++){
                if (N % i == 0){
                    X= X + 1 ;
                }
            }
            if (X == 2){
                printf("%d adalah bilangan prima", N);
            }
            else {
                printf("%d adalah bukan bilangan prima", N);
            }
        }
        else{
            printf("N harus bilangan positif");
        }
        return 0;
}
