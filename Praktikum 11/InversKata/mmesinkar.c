#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"mesinint.c"
#include"mesinkar.c"

int main(){
	
// Kamus

int panjang_pita;
int Pita[50];

// Algoritma
if (panjang_pita >= 50){
	printf("Maksimal karakter dalam pita sebanyak 50 termasuk titik");
}
else{
	START();
	int i = 0;
	while(!EOP()){
		Pita[i] = CC;
		ADV();
		i++;
	}
	
	for (i = 0 ; i < panjang_pita ; i++){
	}
	{
		printf("Kata sebelum di invers adalah = \n");
		printf("%c", Pita[i]);
	}
	for (i = panjang_pita ; i >= 0 ; i--){
	}
	{
		printf("Kata setelah di invers adalah = \n");
		printf("%c", Pita[i]);
	}
}
getche();
return 0;
}


