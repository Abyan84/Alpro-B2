// Nama File      : IsiMatrik.c
// Deskripsi      : Membuat program matriks yang berisikan nilai 0,1,2 pada tempatnya
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Selasa, 05-04-2022 18:45 WIB

# include <stdio.h>

/*Program Utama*/
int main(){
/*Kamus*/
    int M,N;
	int i,j;
/*Algoritma*/
    printf("Program Isi Matrik \n");
    printf("Masukkan jumlah baris untuk matriks = ");
    scanf("%i", &M);
    printf("Masukkan jumlah kolom untuk matriks = ");
    scanf("%i", &N);

    int Matriks[M][N];
    if (M != N )
    {
        printf("\nNilai M dan N harus sama");
    }
    else{
        for (i = 0; i <= M-1; i++){
            Matriks[i][i] = 1;
        }
        for (i = 0; i <= M-2; i++){
            for (j = i+1; j <= N-1; j++){
                Matriks[i][j] = 0;
            }
        }
        for (i = 1; i <= M-1; i++){
            for (j = 0; j <= i-1; j++){
                Matriks[i][j] = 2;
            }     
        }
        for (i = 0; i <= M-1; i++){
            for (j = 0; j <= N-1; j++){
                printf("%i ", Matriks[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
