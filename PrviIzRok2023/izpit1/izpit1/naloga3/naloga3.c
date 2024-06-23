
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
 * 04, 05, 06: mesto = 0
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

// po potrebi dopolnite ...
/*test02
#define _VISINA 1
#define _SIRINA 5

Vozlisce* _MATRIKA[_VISINA][_SIRINA];

const int _VSEBINA[_VISINA][_SIRINA] = {
    {10, 20, 30, 40, 50},
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

void _assert(bool b) {
    static bool ze = false;
    if (!b && !ze) {
        printf("\nNapaka -- izdelava kopije!\n");
        ze = true;
    }
}

void _preveri(Vozlisce* v0, int mesto) {
    if (mesto == 0) {
        Vozlisce* v = v0;
        for (int i = 0; i < _VISINA; i++) {
            _assert(v->desno == _MATRIKA[i][0]);
            v = v->dol;
        }
    } else {
        _assert(v0 == _MATRIKA[0][0]);
    }
    for (int i = 0; i < _VISINA; i++) {
        for (int j = 0; j < _SIRINA; j++) {
            _assert(_MATRIKA[i][j]->dol == ((i == _VISINA - 1) ? (NULL) : (_MATRIKA[i + 1][j])));
            if (j != mesto - 1) {
                _assert(_MATRIKA[i][j]->desno == ((j == _SIRINA - 1) ? (NULL) : (_MATRIKA[i][j + 1])));
            }
        }
    }
}

void _izpisi(Vozlisce* v0) {
    printf("Po vrsticah:\n");
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
    printf("Po stolpcih:\n");
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

void _pocisti(Vozlisce* v0) {
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
Vozlisce* vozGen(int vsebina, Vozlisce* desno, Vozlisce* dol){
    Vozlisce* novo = (Vozlisce*)malloc(sizeof(Vozlisce));
    novo->vsebina = vsebina;
    novo->desno = desno;
    novo->dol = dol;
    return novo;
}

Vozlisce* nafilajRek(Vozlisce** vozlisca, int visina, int vsebina, int trenGlob, Vozlisce* desno){
    if(trenGlob == visina-1){//zadnje vozlisce
        if(desno == NULL)
            vozlisca[trenGlob] = vozGen(vsebina, NULL, NULL);
        else
            vozlisca[trenGlob] = vozGen(vsebina, desno, NULL);
    }
    else{
        if(desno == NULL)
            vozlisca[trenGlob] = vozGen(vsebina, NULL, nafilajRek(vozlisca, visina, vsebina + 1, trenGlob + 1, NULL));
        else
            vozlisca[trenGlob] = vozGen(vsebina, desno, nafilajRek(vozlisca, visina, vsebina + 1, trenGlob + 1, desno->dol));
    }
    return vozlisca[trenGlob];
}

Vozlisce* vstaviStolpec(Vozlisce* start, int mesto, int vsebina) {
    // popravite / dopolnite ...
    Vozlisce* temp = start;
    Vozlisce* temp2 = start;
    int visina = 1, sirina = 1;
    while((temp = temp->dol) != NULL)
        visina++;
    temp = start;
    while((temp = temp->desno) != NULL)
        sirina++;
    temp = start;
    //printf("visina: %d, sirina: %d\n", visina, sirina);
    Vozlisce** vozlisca=(Vozlisce**)malloc(visina*sizeof(Vozlisce*));
    for(int i = 0; i < visina; i++){
        vozlisca[i] = (Vozlisce*)malloc(sizeof(Vozlisce));
    }
    //printf("KREIRANA\n");
    if(mesto == 0){//prvi stolpec //OK
        //rekurzivna funkcija fillanja
        vozlisca[0]->vsebina = vsebina;
        vozlisca[0]->desno = start;
        vozlisca[0]->dol = nafilajRek(vozlisca, visina, vsebina+1, 1, start->dol);
        return vozlisca[0];

    }
    else if(mesto == sirina){//na konec
        //priprava
        vozlisca[0]->vsebina = vsebina;
        vozlisca[0]->desno = NULL;
        vozlisca[0]->dol = nafilajRek(vozlisca, visina, vsebina+1, 1, NULL);

        while(temp->desno != NULL)
            temp = temp->desno;
        for(int i = 0; i < visina; i++){
            temp->desno = vozlisca[i];
            temp = temp->dol;
        }

    }
    else{
        for(int i = 0; i < mesto; i++){
            temp = temp->desno;
        }
        if(visina == 1){
            vozlisca[0]->vsebina = vsebina;
            vozlisca[0]->desno = temp;
            vozlisca[0]->dol = NULL;
        }
        else{
            vozlisca[0]->vsebina = vsebina;
            vozlisca[0]->desno = temp;
            vozlisca[0]->dol = nafilajRek(vozlisca, visina, vsebina+1, 1, temp->dol);
        }
        for(int i = 0; i < mesto-1; i++){
            temp2 = temp2->desno;
        }
        for(int i = 0; i < visina; i++){
            temp2->desno = vozlisca[i];
            temp2 = temp2->dol;
        }
    }
    return start;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <vstaviStolpec> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga3.c).


    //ustvarimo test
    /*Vozlisce* prviprvi = vozGen(1, NULL, NULL);
    Vozlisce* prvidrugi = vozGen(2, NULL, NULL);
    Vozlisce* prvitretji = vozGen(3, NULL, NULL);

    Vozlisce* drugiprvi = vozGen(4, NULL, NULL);
    Vozlisce* drugidrugi = vozGen(5, NULL, NULL);
    Vozlisce* drugitretji = vozGen(6, NULL, NULL);

    // Link nodes horizontally
    prviprvi->desno = prvidrugi;
    prvidrugi->desno = prvitretji;

    drugiprvi->desno = drugidrugi;
    drugidrugi->desno = drugitretji;

    // Link nodes vertically
    prviprvi->dol = drugiprvi;
    prvidrugi->dol = drugidrugi;
    prvitretji->dol = drugitretji;

    // Print values to check the links
    printf("INPUT\n");
    Vozlisce* start = prviprvi;
    Vozlisce* temp = (Vozlisce*)malloc(sizeof(Vozlisce));
    for (int i = 0; i < 2; i++) {
        temp = start;
        while (temp != NULL) {
            printf("%d, ", temp->vsebina);
            temp = temp->desno;
        }
        printf("\n");
        start = start->dol;
    }

    printf("OUTPUT mesto == 0, zacetek\n");
    start = vstaviStolpec(prviprvi, 0, 100);
    for (int i = 0; i < 2; i++) {
        temp = start;
        while (temp != NULL) {
            printf("%d, ", temp->vsebina);
            temp = temp->desno;
        }
        printf("\n");
        start = start->dol;
    }
    printf("\n");

    printf("OUTPUT mesto == 3, konec\n");
    start = vstaviStolpec(prviprvi, 3, 100);
    temp = start;

    for (int i = 0; i < 2; i++) {
        temp = start;
        while (temp != NULL) {
            printf("%d, ", temp->vsebina);
            temp = temp->desno;
        }
        printf("\n");
        start = start->dol;
    }
    printf("\n");

    printf("OUTPUT mesto == 2, vmes\n");
    start = vstaviStolpec(prviprvi, 2, 100);
    temp = start;

    for (int i = 0; i < 2; i++) {
        temp = start;
        while (temp != NULL) {
            printf("%d, ", temp->vsebina);
            temp = temp->desno;
        }
        printf("\n");
        start = start->dol;
    }
    printf("\n");*/
    return 0;
}

#endif
