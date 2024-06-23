
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -Dtest testXY.c naloga2.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Javni testni primeri:
 *
 * 02..03: n <= 2000, k = 1, D >= 2
 * 04..05: n <= 2000, D >= k + 1
 * 01, 06..08: n <= 2000
 * 09..10: n <= 100000
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"
//=============================================================================
//45 min :(
void obdelaj(Vozlisce* zacetek, int k) {
    Vozlisce* trenutni = zacetek;
    Vozlisce* prejsni = zacetek;
    Vozlisce* zadnjiDodan = zacetek;
    //printf("K: %d\n", k);
    int sum = 0, valid = 1;
    for(int i = 0; trenutni != NULL; i++){
        //printf("trenutni->podatek %d\n", trenutni->podatek);
        if(i >= k){
            valid = 1;
            //printf("curSUM %d\n", sum);
            if(trenutni->podatek == sum){//prevezemo
                valid = 0;
                //printf("VALLLID\n");
            }
        }
        else{
            sum += trenutni->podatek;
        }
        if(valid && i != 0){
            prejsni->naslednje = trenutni;
            prejsni = prejsni->naslednje;
            if(i >= k){
                sum = (sum-zadnjiDodan->podatek)+trenutni->podatek;
                zadnjiDodan = zadnjiDodan->naslednje;
            }
        }
        trenutni = (trenutni->naslednje);
    }
    if(!valid)
        prejsni->naslednje = NULL;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <obdelaj> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin 
    // (gcc naloga2.c).
    return 0;
}

#endif