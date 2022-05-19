#ifndef MESININT_C
#define MESININT_C
#include "mesinint.h"

void RESET()
/*Pencacah disiapkan untuk dipakai, Harga bilangan bulat yang
disimpan adalah Nol.
I.S. : Sembarang
F.S. : CI = 0*/
{
    /*Kamus Lokal*/
    /*Algoritma*/
    CI = 0;
}

void INC()
/*Pencacah dimajukan satu
I.S. : Harga
F.S. : Harga + 1*/
{
    CI = CI + 1;
}

#endif // MESININT_C
