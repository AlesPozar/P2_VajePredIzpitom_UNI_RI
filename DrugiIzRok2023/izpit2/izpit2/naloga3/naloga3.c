
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga3.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Testni primeri:
 * 02, 03: h = 1
 * 04, 05, 06: preverjajo samo vsoto
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

//30 min z debugging, ce dobim double free pomeni samo to da rabim ustvart neki novga in mu un vrnt hehe
//FORA ZA TO DA JE BIL DOUBLE FREE ABORTED ON HOCE DA MU VRNEMO NOVA VOZLISCA
/*
#define _VISINA 3
#define _SIRINA 4

Vozlisce* _MATRIKA[_VISINA][_SIRINA];

const int _VSEBINA[_VISINA][_SIRINA] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
};

void _napolni() {
    for (int i = 0; i < _VISINA; i++) {
        for (int j = 0; j < _SIRINA; j++) {
            _MATRIKA[i][j] = calloc(1, sizeof(Vozlisce));
            _MATRIKA[i][j]->vsebina = _VSEBINA[i][j];
        }
    }
    for (int i = 0; i < _VISINA; i++) {
        for (int j = 0; j < _SIRINA; j++) {
            if (j < _SIRINA - 1) {
                _MATRIKA[i][j]->desno = _MATRIKA[i][j + 1];
            }
            if (i < _VISINA - 1) {
                _MATRIKA[i][j]->dol = _MATRIKA[i + 1][j];
            }
        }
    }
}

void _izpisiDiagonalo(Vozlisce* v) {
    printf("Diagonala:\n");
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        if (w != v) {
            printf(", ");
        }
        printf("%d", w->vsebina);
        w = w->desno;
    }
    printf("]\n\n");
}

void _izpisiOriginal(Vozlisce* v0) {
    printf("Originalna matrika -- po vrsticah:\n");
    Vozlisce* v = v0;
    int i = 0;
    while (v != NULL) {
        printf("%d: [", i);
        Vozlisce* w = v;
        while (w != NULL) {
            if (w != v) {
                printf(", ");
            }
            printf("%d", w->vsebina);
            w = w->desno;
        }
        printf("]\n");
        v = v->dol;
        i++;
    }

    printf("\n");
    printf("Originalna matrika -- po stolpcih:\n");
    v = v0;
    i = 0;
    while (v != NULL) {
        printf("%d: [", i);
        Vozlisce* w = v;
        while (w != NULL) {
            if (w != v) {
                printf(", ");
            }
            printf("%d", w->vsebina);
            w = w->dol;
        }
        printf("]\n");
        v = v->desno;
        i++;
    }
}

void _pocistiDiagonalo(Vozlisce* v) {
    while (v != NULL) {
        Vozlisce* temp = v->desno;
        free(v);
        v = temp;
    }
}

void _pocistiOriginal(Vozlisce* v0) {
    Vozlisce* v = v0;
    while (v != NULL) {
        Vozlisce* w = v;
        while (w != NULL) {
            Vozlisce* temp = w->desno;
            free(w);
            w = temp;
        }
        v = v->dol;
    }
}
*/
// po potrebi dopolnite ...
Vozlisce* diagonala(Vozlisce* start, int* vsota) {
    // popravite / dopolnite ...
    Vozlisce* temp = start;
    int sirina = 1; int visina = 1;
    while((temp = temp->desno) != NULL)
        sirina++;
    temp = start;
    while((temp = temp->dol) != NULL)
        visina++;
    //minimum bo st potrebnih vozlisc
    int minimum;
    if(sirina < visina)
        minimum = sirina;
    else
        minimum = visina;
    Vozlisce** povezani = (Vozlisce**)malloc(minimum*sizeof(Vozlisce*));
    for(int i = 0; i < minimum; i++){
        povezani[i] = (Vozlisce*)malloc(sizeof(Vozlisce));
    }
    int steviloObiskanih = 0;
    int skupnaVs = 0;
    //dobimo vsoto
    for(int i = 0; i < minimum; i++){
        temp = start;
        for(int y = 0; y < steviloObiskanih; y++){
            temp = temp->dol;
        }
        for(int y = 0; y < sirina - steviloObiskanih - 1; y++){
            temp = temp->desno;
        }
        //VOZLISCA NOVA
        povezani[steviloObiskanih]->vsebina = temp->vsebina;
        povezani[steviloObiskanih]->desno = NULL;
        povezani[steviloObiskanih]->dol = NULL;
        skupnaVs += temp->vsebina;
        steviloObiskanih++;
    }
    *vsota = skupnaVs;
    //povezemo dobljena vozlisca
    for(int i = 0; i < minimum; i++){
        if(i == minimum-1)
            povezani[i]->desno = NULL;
        else
            povezani[i]->desno = povezani[i+1];
    }
    return povezani[0];
}

//=============================================================================

#ifndef test

int main() {
    /*
    _napolni();
    int vsota = 0;
    Vozlisce* diag = diagonala(_MATRIKA[0][0], &vsota);

    printf("vsota = %d\n\n", vsota);

    _izpisiDiagonalo(diag);
    _izpisiOriginal(_MATRIKA[0][0]);

    _pocistiDiagonalo(diag);
    _pocistiOriginal(_MATRIKA[0][0]);
    */
    return 0;
}

#endif
