
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
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

//------------ 5min, 1. try

//=============================================================================

// po potrebi dopolnite ...

void racionaliziraj(char** nizi) {
    // dopolnite ...
    int dolzina = 0;// plus 1 = stevilo vseh kazalcev skupno z NULL
    while(nizi[dolzina] != NULL)
        dolzina++;

    for(int i = 0; i < dolzina; i++){
        for(int y = i + 1; y < dolzina; y++){//pri zadnji kjer NULL, imamo pogoj < dolzina ker i == dolzina, + 1 = seg. fault :(
            if(strcmp(nizi[i], nizi[y]) == 0){
                nizi[y] = nizi[i];
            }
        }
    }
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <racionaliziraj> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin 
    // (gcc naloga2.c).
    return 0;
}

#endif
