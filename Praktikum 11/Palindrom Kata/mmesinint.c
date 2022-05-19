#include<stdio.h>
#include<conio.h>
#include"mesinint.c"
#include"mesinkar.c"

//program utama
int main(){
	//kamus
	//algoritma
	RESET();
	printf("%d\n",CI);
	while (CI < 10){
		INC();
		printf("%d\n",CI);
	}
	return 0;
}
