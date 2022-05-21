// Nama File      : CekSempurna.c
// Deskripsi      : Menentukan bilangan sempurna atau tidak dari jumlah faktor-faktor bilangannya kecuali
//                  faktor bilangan itu sendiri nilainya sebesar itu sendiri 
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Sabtu, 26-03-2022 Pukul 18:55 WIB
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
                    X = X + i ;
                }
            }
            if (X == N){
                printf("%d adalah bilangan sempurna", N);
            }
            else {
                printf("%d adalah bukan bilangan sempurna", N);
            }
        }
        else{
            printf("N harus bilangan positif");
        }
        return 0;
}
