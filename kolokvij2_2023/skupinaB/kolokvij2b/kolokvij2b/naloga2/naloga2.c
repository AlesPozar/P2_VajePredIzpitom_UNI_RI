
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga2.c
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

// po potrebi dopolnite ...
//30min
void izlociDuplikate(Vozlisce* zacetek) {
    // dopolnite ...
    Vozlisce* novo = zacetek;
    int dolzina = 0;//st nenicelnih
    while(novo != NULL){
        dolzina++;
        novo = novo->naslednje;
    }
    novo = zacetek;
    Vozlisce* ito = zacetek;
    Vozlisce* yto = zacetek;
    for(int i = 0; i < dolzina; i++){
        yto = ito->naslednje;
        for(int y = i+1; y < dolzina && ito != NULL; y++){
            if(ito->p == yto->p)
                yto->p = NULL;
            yto = yto->naslednje;
        }
        ito = ito->naslednje;
    }
    //printf("HELLO\n");
    Vozlisce* prejsnje = NULL;
    int valid = 1;
    for(int i = 0; i < dolzina; i++){
        valid = 1;
        if(novo->p == NULL)
            valid = 0;
        if(valid){
            if(prejsnje == NULL)
                prejsnje = novo;
            else{
                prejsnje->naslednje = novo;
                prejsnje = prejsnje->naslednje;
            }
        }
        novo = novo->naslednje;
    }
    prejsnje->naslednje = NULL;//to cap it at the end

}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo izlociSkupne testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
}

#endif
