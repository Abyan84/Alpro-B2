/* Nama File 	    : BubbleSort.c */
/* Deskripsi 	    : Penggunaan Fungsi Bubble Sort */
/* Pembuat   	    : Abyan Izzah Azzam Hastono - 24060121130082 */
/* Tgl Pembuatan	: Minggu, 08 Mei 2022 Pukul 09:00 WIB */

#include <stdio.h>

int main(){
	
    // Kamus
    int arr[50], num, x, y, temp;  
    
    
    // Algoritma
    printf("Masukkan berapa element yang diinginkan dalam satu array : ");
    scanf("%d", &num);   
    printf("Masukkan nilai element pada array: ");
    for(x = 0; x < num; x++)
	scanf("%d", &arr[x]);
    x = 0;

    while(x < num - 1){
        y = 0;        
        while(y < num - x - 1){
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
            y++;
        }       
        x++;
    }   
    printf("array setelah dilakukan bubble s0rt adalah: ");
    for(x = 0; x < num; x++)
	  printf("%d  ", arr[x]);

   return 0;

}
