/* Nama File 	    : CountingSort.c */
/* Deskripsi 	    : Penggunaan Fungsi Counting Sort */
/* Pembuat   	    : Abyan Izzah Azzam Hastono - 24060121130082 */
/* Tgl Pembuatan	: Minggu, 08 Mei 2022 Pukul 09:00 WIB */

# include<stdio.h>

void counting_sort(int a[],int n,int max)
{
     int count[50]={0},i,j;
    
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;
      
     printf("\n Elemen yang sudah diurut adalah sebagai berikut :");
    
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       printf("%d ",i);
}
 
int main()
{
    int a[50],n,i,max=0;
    printf("Masukkan berapa element yang ingin dimasukkan :");
    scanf("%d",&n);
    printf("\n Masukkan angka  :");
                  
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);
     if(a[i]>max)
      max=a[i];
    }
    
    counting_sort(a,n,max);
    return 0;
}
 
