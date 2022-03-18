/* Nama File : TunjAnak.c*/
/* Deskripsi : menghitung besar tunjangan anak berdasarkan gaji*/
/* Pembuat : Abyan Izzah Azzam Hastono - 24060121130082*/
/* Tgl Pembuatan : Kamis, 17-03-2022 08:45 WIB*/

int main(){
	
	// Kamus
	int anak, gaji;
	int tunjangan;
	// Algoritma
	printf("program menghitung besar tunjangan anak \n");
	printf("masukkan jumlah anak yang ada = \n");
	scanf("%d", &anak);
	printf("Masukkan jumlah gaji pokok = \n");
	scanf("%d", &gaji);
	
	if (anak < 0){
		printf("Masukkan variabel anak tidak tepat");
	}
	else if ((anak >= 0) && (anak < 3)){
		tunjangan = anak * (0.1 * gaji);
		printf("maka, tunjangan yang diberikan adalah = %d", tunjangan);
	}
	else {
		tunjangan = 3 * (0.1 * gaji);
		printf("maka, tunjangan yang diberikan adalah = %d", tunjangan);
	}
	return 0;
}
