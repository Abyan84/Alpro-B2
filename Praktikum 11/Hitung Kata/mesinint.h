#ifndef MESININT_H
#define MESININT_H

unsigned int CI; /*harga pencacah*/

void RESET();
/*Pencacah disiapkan untuk dipakai, Harga bilangan bulat yang
disimpan adalah Nol.
I.S. : Sembarang
F.S. : CI = 0*/

void INC();
/*Pencacah dimajukan satu
I.S. : Harga
F.S. : Harga + 1*/

#endif // MESININT_H
