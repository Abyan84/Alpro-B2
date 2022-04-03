// Nama Program : KelBil.c
// Deskripsi    : mennentukan kelipatan faktor terkecil dari suatu array 
// Nama         : Abyan Izzah Azzam Hastono - 24060121130082 
// Tanggal      : Minggu, 03-04-2021 19:00 WIB

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *ptr, i, N, j, k, kelipatan;

    // Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    kelipatan = 1;
    
    if(N>0){
        ptr = (int *)malloc(N*sizeof(int));
        for(i = 1 ; i <= N ; i++){
            printf("Masukkan Bilangan ke %d =",i);
            scanf("%d",ptr+i);
        }
        for(j = 1 ; j <= N ; j++){
            if(*(ptr+j)%kelipatan==0){
                kelipatan = *(ptr+j);
            }
            else{
                kelipatan = kelipatan*(*(ptr+j));
            }
        }
        printf("Kelipatan terkecilnya adalah %d",kelipatan);
    }else{
        printf("Inputan tidak valid");
    }
    return 0;
}
