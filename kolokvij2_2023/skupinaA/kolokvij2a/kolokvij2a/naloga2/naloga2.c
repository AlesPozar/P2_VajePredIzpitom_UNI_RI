
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

//46 min
// po potrebi dopolnite ...

void izlociSkupne(Vozlisce* a, Vozlisce* b, Vozlisce** noviA, Vozlisce** noviB) {
    // dopolnite ...
    Vozlisce* starta = a;
    Vozlisce* startb = b;
    int dolzinaa = 0, dolzinab = 0; //brez NULL
    while(starta != NULL){
        starta = starta->naslednje;
        dolzinaa++;
    }
    //printf("dolzina a: %d\n", dolzinaa);
    while(startb != NULL){
        startb = startb->naslednje;
        dolzinab++;
    }
    starta = a;
    startb = b;
    //printf("dolzina b: %d\n", dolzinab);
    int elementiA[dolzinaa];
    for(int i = 0; i < dolzinaa; i++){
        elementiA[i] = starta->podatek;
        starta = starta->naslednje;
    }
    int elementiB[dolzinab];
    for(int i = 0; i < dolzinab; i++){
        elementiB[i] = startb->podatek;
        startb = startb->naslednje;
    }
    int manjsaDolzina;
    if(dolzinaa < dolzinab)
        manjsaDolzina = dolzinaa;
    else
        manjsaDolzina = dolzinab;
    int skupni[manjsaDolzina], stevec = 0;
    for(int i = 0; i < dolzinaa; i++)
        for(int y = 0; y < dolzinab; y++){
            if(elementiA[i] == elementiB[y])
                skupni[stevec++] = elementiA[i];
        }
    /*for(int i = 0; i < stevec; i++)
        printf("%d ", skupni[i]);
    printf("\n");*/
    /////DELA
    starta = a;
    startb = b;
    Vozlisce* prejsnjea = NULL;
    Vozlisce* prejsnjeb = NULL;

    //Za a
    int dontwait = 1;
    for(int i = 0; starta != NULL; i++){
        dontwait = 1;
        for(int y = 0; y < stevec; y++){
            if(skupni[y] == starta->podatek){//preskocimo
                dontwait = 0;
                break;
            }
        }
        if(dontwait){
            if(prejsnjea == NULL){
                prejsnjea = starta;
                *noviA = prejsnjea;
            }  
            else{
                prejsnjea->naslednje = starta;
                prejsnjea = prejsnjea->naslednje;
            }
        }
        starta = starta->naslednje;
    }
    if(prejsnjea != NULL)
        prejsnjea->naslednje = starta;
    else
        *noviA = NULL;

    //Za b
    dontwait = 1;
    for(int i = 0; startb != NULL; i++){
        dontwait = 1;
        for(int y = 0; y < stevec; y++){
            if(skupni[y] == startb->podatek){//preskocimo
                dontwait = 0;
                break;
            }
        }
        if(dontwait){
            if(prejsnjeb == NULL){
                prejsnjeb = startb;
                *noviB = prejsnjeb;
            }  
            else{
                prejsnjeb->naslednje = startb;
                prejsnjeb = prejsnjeb->naslednje;
            }
        }
        startb = startb->naslednje;
    }
    if(prejsnjeb != NULL)
        prejsnjeb->naslednje = startb;
    else
        *noviB = NULL;

}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo izlociSkupne testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
