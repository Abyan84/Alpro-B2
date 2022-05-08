/* Nama File 	    : InsertionSort.c */
/* Deskripsi 	    : Penggunaan Fungsi Insertion Sort */
/* Pembuat   	    : Abyan Izzah Azzam Hastono - 24060121130082 */
/* Tgl Pembuatan	: Minggu, 08 Mei 2022 Pukul 09:00 WIB */

#include<stdio.h>
int main(){
	// Kamus
	int i, j, count, temp, number[100];
 
    // Algoritma
   printf("Masukkan berapa angka yang ingin dimasukkan : ");
   scanf("%d",&count);
   printf("Masukkan element berupa angka : ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Angka yang sudah diurutkam adalah sebagai berikut :");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
