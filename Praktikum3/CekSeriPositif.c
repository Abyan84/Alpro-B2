/* Nama File : CekSeriPositif*/
/* Deskripsi : Memasukkan nilai tahanan seri dan ditotalkan*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Minggu, 13-03-2022 16:45 WIB*/

# include<stdio.h>

int main(){
	
	// Kamus
	float a,b,c;
	float H;
	// Algoritma
	printf("Program untuk menambahkan nilai 3 bilangan \n");
	printf("Masukkan sebuah bilangan = \n");
	scanf("%f", &a);
	printf("Masukkan sebuah bilangan = \n");
	scanf("%f", &b);
	printf("Masukkan sebuah bilangan = \n");
	scanf("%f", &c);
	
	if ((a>0) && (b>0) && (c>0)){
		H = a + b + c;
		printf("Maka, Hasilnya adalah = %f", H);
	}
	else{
		printf("Nilai tahanan tidak boleh negatif");
	}
	
	return 0;

}
