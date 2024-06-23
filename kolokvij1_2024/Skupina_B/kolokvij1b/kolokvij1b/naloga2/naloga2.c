
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

//=============================================================================

// po potrebi dopolnite ...

//----------6min, 1. try
void razbohoti(char** nizi) {
    // dopolnite ...
    int dolzina = 0;
    while(nizi[dolzina] != NULL){
        dolzina++;
    }
    for(int i = 0; i < dolzina; i++){
        for(int y = i + 1; y < dolzina; y++){
            if(nizi[i] == nizi[y]){
                nizi[y] = (char*)malloc((strlen(nizi[i]) + 1)*sizeof(char));
                strcpy(nizi[y], nizi[i]);
            }
        }
    }
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <razbohoti> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin 
    // (gcc naloga2.c).
    return 0;
}

#endif
