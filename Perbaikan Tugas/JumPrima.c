// Nama File      : JumPrima.c
// Deskripsi      : Menjumlahkan bilangan prima
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Selasa, 05-04-2022 18:45 WIB

# include <stdio.h>


int main(){
    // Kamus
    int n;
	int f, i, j;
	int Sn;
	
	// Algoritma
    printf("Program Jumlah Deret Bilangan Prima \n");
    printf("Masukkan bilangan integer positif N = \n ");
    scanf("%i", &n);

    if (n <= 0)
    {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn = 0");
    }
    else{
        Sn = 0;
        for (i = 1; i <= n; i++){
            f = 0;
            for (j = 1; j <= i; j++){
                if (i % j == 0){
                    f = f + 1;
                } 
            }
			if (f == 2){
                Sn = Sn + i;
                if (i == 2){
                    printf("%i", i);
                }
                else{
                    printf(" + %i",i);
                }
            }
        }
        printf(" dengan Jumlahan Deret Bilangannya adalah Sn = %i", Sn);
    }
}
