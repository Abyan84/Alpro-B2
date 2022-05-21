// Nama File      : DeretPrima.c
// Deskripsi      : Membuat program deret prima 
// Pembuat        : Abyan Izzah Azzam Hastono - 24060121130082
// Tgl Pembuatan  : Senin, 04-04-2022 18:45 WIB

# include <stdio.h>

int main(){
	
	// Kamus
	int N,i,j;
	int BykFktr;
	
	// Algoritma
	printf("Program deret prima \n");
	printf("Masukkan bilangan integer sembarang = \n");
	scanf("%i", &N);
	
	if (N <= 0){
		printf("Masukkan N harus positif");
	}
	else{
		for(i = 1 ; i <= N ; i++){
			BykFktr = 0;
			for(j = 1 ; j <= i ; j++){
				if ((i % j == 0)){
					BykFktr = BykFktr + 1;
				}
			}
			if (BykFktr == 2){
				printf(" %i", i);
			}
		}
	}
	return 0;
}
