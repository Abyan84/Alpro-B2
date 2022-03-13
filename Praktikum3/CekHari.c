/* Nama File : CekHari.c*/
/* Deskripsi : mencocokan nilai input dengan hari*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Minggu, 13-03-2022 11:45 WIB*/

# include<stdio.h>

int main(){
	
	// Kamus
	int H;
	// Algoritma
	printf("Program untuk mencocokan nilai input dengan hari \n");
	printf("Masukkan sebuah bilangan = \n");
	scanf("%d", &H);

		
	if (H == 1){
		printf("Senin");
    }
	else if (H == 2){
		printf("Selasa");
	}
	else if (H == 3){
		printf("Rabu");
	}
	else if (H == 4){
		printf("Kamis");
	}
	else if (H == 5){
		printf("Jumat");
	}
	else if (H == 6){
		printf("Sabtu");
	}
	else if (H == 7){
		printf("Minggu");
	}
    else{
		printf("Masukan nomor hari tidak tepat");
	} 

	return 0;
}

  
