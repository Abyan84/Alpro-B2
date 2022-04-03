// Nama File      : Tetris1.c
// Deskripsi      : Memasukkan banyaknya baris N untuk mengetahui susunan '*'
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Minggu, 03-04-2022 18:45 WIB

# include <stdio.h>

int main(){
	
	//Kamus
    int N ;
    int i ;
    int j ;

    //Algoritma
	printf("Program membuat tetris \n");
	printf("Masukkan banyaknya baris = \n");
	scanf("%i", &N );
	
	if (N <= 0){
		printf("Masukkan N harus Positif");
	}
	else {
		 for (i = N; i >= 1; i--){
            for(j = i ; j >= 1 ; j--){
                printf("*") ;
			}
		printf(" --%i\n",i);
		}
	}
	return 0;
}
    
 
