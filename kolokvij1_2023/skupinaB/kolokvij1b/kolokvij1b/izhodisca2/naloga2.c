
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
 * -- 02, 03: dol"zina vsakega vhodnega niza je enaka ciljnaDolzina;
 * -- 04, 05, 06, 07: dol"zina vsakega vhodnega niza je enaka 1;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 04: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
//43 min, konec okoli 28min ostalo porabil za debug
//debug napaka kode
//char** nova = (char**)malloc(dolzina+1*sizeof(char*));
//char** nova = (char**)malloc((dolzina+1)*sizeof(char*));
//samo dodal ()
//=============================================================================

char** naSredino(char** nizi, int ciljnaDolzina) {
    // popravite / dopolnite ...
    int dolzina = 0, stodmik = 0;
    while(nizi[dolzina] != NULL)
        dolzina++;
    //printf("dolzina %d\n", dolzina);
    char** nova = (char**)malloc((dolzina+1)*sizeof(char*));//plus ena za null
    for(int i = 0; i <= dolzina; i++)
        nova[i] = (char*)malloc(ciljnaDolzina*sizeof(char));
    nova[dolzina] = NULL;


    for(int i = 0; i < dolzina; i++)
        for(int y = 0; y < ciljnaDolzina; y++)
            nova[i][y] = '.';
    /*for(int i = 0; i < dolzina; i++){
        for(int y = 0; y < ciljnaDolzina; y++){
            printf("%d", nova[i][y]);
        }
        printf("\n");
    }
    printf("TEST PRED\n");
    for(int i = 0; i < dolzina; i++){
        printf("%s\n", nova[i]);
    }
    printf("KONEC TEST\n");*/

    for(int i = 0; i < dolzina; i++){
        stodmik = (ciljnaDolzina-strlen(nizi[i]))/2;
        for(int y = 0; y < strlen(nizi[i]); y++)
            nova[i][y+stodmik] = nizi[i][y];
    }
    /*//zasilni print
    printf("TEST\n");
    for(int i = 0; i < dolzina; i++){
        printf("%s\n", nova[i]);
    }
    printf("KONEC TEST\n");*/
    return nova;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo naSredino testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
