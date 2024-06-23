
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
 *
 * Javni testni primeri:
 *
 * 01..03: n = 3, d = 1
 * 04..06: d = 1
 * 07..10: splo"sni
 * 01, 04, 07: majhni, ro"cno izdelani primeri
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// po potrebi dopolnite ...
//53min
int** zmehcaj(int** slika, int n, int m, int d) {
    // popravite / dopolnite ...
    //ce bo jokov glede zaokrozevanja mu dam double pri povprecju
    int** nova = (int**)malloc((n-2*d)*sizeof(int*));
    for(int i = 0; i < (n-2*d); i++)
        nova[i] = (int*)malloc((m-2*d)*sizeof(int));

    int povprecje = 0;
    for(int i = 0; i < (n-2*d); i++){
        for(int y = 0; y < (m-2*d); y++){
            //gremo gledat v unmu obmocju in racunamo povprecje
            for(int k1 = 0; k1 < 2*d+1; k1++){
                for(int k2 = 0; k2 < 2*d+1; k2++){
                    povprecje += slika[i+k1][y+k2];
                }
            }
            povprecje = (povprecje / ((2*d+1)*(2*d+1)));
            nova[i][y] = povprecje;
            povprecje = 0;
        }
    }

    return nova;
}

#ifndef test

int main() {
    // "Ce "zelite funkcijo <jeDrevo> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
