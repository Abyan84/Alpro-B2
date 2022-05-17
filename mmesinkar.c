#include<stdio.h>
#include<conio.h>
#include"mesinint.c"
#include"mesinkar.c"

void IGNORE_BLANK() {
while (CC ==' ') {
ADV();
}
}

int main(){
START();
RESET();
IGNORE_BLANK();

while (CC != '.'){
if (CC ==' ') {
INC();
IGNORE_BLANK();
}
else {
ADV();
}
}

/* banyak kata = banyak spasi + 1 */
INC();
printf("Banyak kata = %d \n",CI);
getche();
return 0;
}
