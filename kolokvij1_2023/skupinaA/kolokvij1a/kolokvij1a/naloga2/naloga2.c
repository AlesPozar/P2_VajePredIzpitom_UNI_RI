
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
 * Javni testni primeri (po te"zavnosti):
 * -- 02, 03, 04: en sam vhodni niz;
 * -- 05, 06, 07: vsi vhodni nizi so enako dolgi;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 05: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
//tren stevec od prejsne = 28 min
//=============================================================================

char** poStolpcih(char** nizi, int stVhodnih, int* stIzhodnih) {
    // popravite / dopolnite ...
    int maxsize = 0, stevec = 0;
    char** nova = (char**)malloc(1001 * sizeof(char*));//lociramo za maksimum mozno tj. 10001
    for(int i = 0; i < 1001; i++)
        nova[i] = (char*)malloc(1001 * sizeof(char*));

    for(int i = 0; i < stVhodnih; i++){
        if(strlen(nizi[i]) > maxsize)
            maxsize = strlen(nizi[i]);
    }
    *stIzhodnih = maxsize;
    //gre cev vpisne stringe
    for(int i = 0; i < maxsize; i++){
        for(int y = 0; y < stVhodnih; y++){
            if(strlen(nizi[y])-1 >= i){//ima se dovolj charov
                nova[i][stevec++] = nizi[y][i];
            }
        }
        stevec = 0;
    }
    return nova;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo poStolpcih testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
