/* Nama File 	    : SelectionSort.c */
/* Deskripsi 	    : Penggunaan Fungsi Selection Sort */
/* Pembuat   	    : Abyan Izzah Azzam Hastono - 24060121130082 */
/* Tgl Pembuatan	: Minggu, 08 Mei 2022 Pukul 09:00 WIB */

#include <stdio.h>
int main() {
	
   // Kamus
   int arr[100], i, j, position, swap, count;
   
   // Algoritma
   printf("Masukkan berapa angka yang ingin dimasukkan : ");
   scanf("%d",&count);
   printf("Masukkan element berupa angka : ", count);
   for(i=0;i<count;i++)
      scanf("%d",&arr[i]);
   
   for (i = 0; i < count ; i++) {
      position = i;
      for (j = i + 1; j < count ; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   printf("array setelah dilakukan Selection s0rt adalah: ");
   for (i = 0; i < count ; i++)
      printf(" %d ", arr[i]);
   return 0;
}
