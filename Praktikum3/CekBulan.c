/* Nama File : CekBulan.c*/
/* Deskripsi : mencocokan nilai input dengan bulan*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Minggu, 13-03-2022 11:45 WIB*/

# include<stdio.h>

int main(){
	
	// Kamus
	int B;
	// Algoritma
	printf("Program untuk mencocokan nilai input dengan bulan \n");
	printf("Masukkan sebuah bilangan = \n");
	scanf("%d", &B);

		
	if (B == 1){
		printf("Januari");
    }
	else if (B == 2){
		printf("Februari");
	}
	else if (B == 3){
		printf("Maret");
	}
	else if (B == 4){
		printf("April");
	}
	else if (B == 5){
		printf("Mei");
	}
	else if (B == 6){
		printf("Juni");
	}
	else if (B == 7){
		printf("Juli");
	}
	else if (B == 8){
		printf("Agustus");
	}
	else if (B == 9){
		printf("September");
	}
	else if (B == 10){
		printf("Oktober");
	}
	else if (B == 11){
		printf("November");
	}
	else if (B == 12){
		printf("Desember");
	}
    else{
		printf("Masukan nomor Bulan tidak tepat");
	} 

	return 0;
}
