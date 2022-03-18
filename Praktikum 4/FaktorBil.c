/* Nama File : FaktorBil.c*/
/* Deskripsi : menentukan faktor-faktor bilangan dari bilangan integer sembarang*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Kamis, 17-03-2022 08:45 WIB*/

# include <stdio.h>

int main(){
	
	// Kamus
	int N;
	int i;
	// Algoritma
	printf("Program untuk menentukan faktor2 bilangan \n");
	printf("Masukkan bilangan integer = \n");
	scanf("%d", &N);
	
	if (N <= 0){
		printf("Masukkan N harus positif");
	}
	else{
		for (i = 1 ; i<=N ; i++){
			if (N % i == 0){
				printf("|%d", i);
			}
		}
	}
	
	return 0;
}
