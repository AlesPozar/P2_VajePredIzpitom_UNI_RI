
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
// 24 min, 8/10
//optimizacije, hranmo curSum, preskocimo blocne zaporedje elemetov kot 18 18 v primeru, premajhna optimizacija
//namesto tabeele vseh stevilk hranimo zadnje dodan element, curSum, in naslednjega, torej ob dodaji ne shiftamo vse v levo in dodamo novega, vndar curSum odstejemo zadnjega dodanega in dodamo treenutnega
// 40 min, 10/10 -----> da sem nasel in implementiral izboljsavo sem porabil dodatnih 15 min
// po potrebi dopolnite ...

void obdelaj(Vozlisce* zacetek, int k) {
    Vozlisce* trenutni = zacetek;
    Vozlisce* prejsni = NULL;
    int readBack = 1, curSum = 0;
    for(int i = 0; trenutni != NULL; i++){
        if(i >= k){
            if(curSum == trenutni->podatek){
                prejsni->naslednje = trenutni->naslednje;
                readBack = 0;
            }
            else{//vse vredi gremo naprej
                readBack = 1;
                curSum = ((curSum - zacetek->podatek) + trenutni->podatek);
                zacetek = zacetek->naslednje;
            }    
        }
        else
            curSum += trenutni->podatek;
        if(readBack)
            prejsni = trenutni;
        trenutni = trenutni->naslednje;
    }
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


/*

//STARA PREPOCASI
void obdelaj(Vozlisce* zacetek, int k) {
    // dopolnite ...
    Vozlisce* trenutni = zacetek;
    Vozlisce* prejsni = NULL;
    int stevec = 0, sum = 0, readBack = 1, curSum = 0;
    int stevila[k];
    while(trenutni != NULL){
        if(stevec == k){
            //smo dobili vseeh k mest, lahko gledamo ali je suma enaka
            if(readBack == 0 && curSum == trenutni->podatek){//preskocimo ponovno racunanje vsote, v primeru da smo presmocili prejsnjega, saj se elementi v vsoti niso spremenili, TOREJ breskakovanje blochin zaporedij enakih elementov s kriticno vsoto npr v prvem primeru 18 18
                prejsni->naslednje = trenutni->naslednje;
            }
            else{
                sum = 0;
                for(int i = 0; i < k; i++)
                    sum += stevila[i];
                curSum = sum;
                if(readBack && sum == trenutni->podatek){//we skip in prevezemo, v primeru da je to prvi preskok v trenutnih preskokih, drugace je ta pogoj brez veze in ga early teminiramo z (readBack && c), readBack pogojem tako da mu ni treba gledati sum == trenutni->podatek
                    prejsni->naslednje = trenutni->naslednje;//ce je zadnje se ze prepise null
                    readBack = 0;
                }
                else{//vse vredi gremo naprej
                    readBack = 1;
                    for(int y = 0; y < k-1; y++){//kratek reset vrednosti
                        stevila[y] = stevila[y+1];
                    }
                    stevila[k-1] = trenutni->podatek;
                }
            }
            
        }
        else
            stevila[stevec++] = trenutni->podatek;
        if(readBack)
            prejsni = trenutni;
        trenutni = trenutni->naslednje;
    }
}*/