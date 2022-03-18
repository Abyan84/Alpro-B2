/* Nama File : TarifPLN.c*/
/* Deskripsi : Menghitung besar tarif listirk berdasarkan pemakaian daya listrik*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Kamis, 17-03-2022 08:45 WIB*/

# include <stdio.h>

int main(){
	
	// Kamus
	int golongan, daya;
	int tarif;
	// Algoritma
	printf("program menghitung besar tarif listrik \n");
	printf("masukkan golongan tarif anda = \n");
	scanf("%d", &golongan);
	printf("masukkan pemakaian daya listrik anda (dalam kWH) = \n");
	scanf("%d", &daya);
	
	if ((golongan < 1) || (golongan > 2)){
		printf("masukkan golongan salah");
	}
	else if (daya <= 100){
		printf("minimal daya pembayaran adalah 100 kWH");
	}
	else{
		if (daya < 1000){
			tarif = golongan * daya * 1000;
			printf("Maka, besar tarif total listrik anda adalah = %d", tarif);
		}
		else{
			tarif = golongan * daya * 1000 * 1.1;
			printf("Maka, besar tarif total listrik anda adalah = %d", tarif);
		}
	}
	
	return 0;
}
