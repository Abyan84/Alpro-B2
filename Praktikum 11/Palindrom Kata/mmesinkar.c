#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"boolean.h"
#include"mesinint.c"
#include"mesinkar.c"

boolean IsPalindrom(char kt[100]){
char ss[]={0,0};
int i, j;
char temp[100];

strcpy(temp,"");
j=strlen(kt)-1;

while(j>=0){
*ss=kt[j];
strcat(temp,ss); 
j = j-1;
}

if (strcmp(temp, kt)==0){
printf("palindrom");
return;
} 
else {
printf("bukan palindrom");
return;
}

}
int main(){
char a[100];
printf("Masukkan kalimat : \n");
 gets(a);
 IsPalindrom(a);
}




   
