
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Javni testni primeri:
 *
 * 01: iz besedila naloge
 * 02..04: znaki v nizu so padajo"ce urejeni
 * 01, 05..10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int zamik = 0;
// po potrebi dopolnite ...

//1ura 35min
void rekurzija(char* niz, char last,  int dolzina, int globina){
    char najvecji = 0;
    int doKam = 0;
    if(dolzina == 1){
        if(last != ' '){
            for(int i = 0; i < zamik; i++){
                printf(" ");
            }
            zamik++;
            printf("%c\n", last);
        }
        else{
            for(int i = 0; i < zamik; i++){
                printf(" ");
            }
            zamik++;
            printf("%s\n", niz);
        }
        return;
    }
    else{
        //printf("globina: %d\n", globina);
        for(int i = 0; i < zamik; i++){
            printf(" ");
        }
        printf("%s\n", niz);
        if(dolzina == 1)
            zamik++;
        for(int i = 0; i < dolzina; i++){//najdemo najvecjega
            if(najvecji < niz[i]){
                doKam = i;
                najvecji = niz[i];
            }
        }
        if(doKam != 0){
            char* noviNiz = (char*)malloc(doKam*sizeof(char));
            for(int i = 0; i < doKam; i++)
                noviNiz[i] = niz[i];
            noviNiz[doKam] = '\0';
            rekurzija(noviNiz, ' ',  strlen(noviNiz), globina + 1);
        }
        rekurzija(" ", niz[doKam], 1, globina + 1);
        if(doKam != dolzina-1){
            int stevec = 0;
            char* ostalo = (char*)malloc((((dolzina - doKam) - 1))*sizeof(char));
            for(int i = doKam+1; i < dolzina; i++)
                ostalo[stevec++] = niz[i];
            ostalo[((dolzina - doKam) - 1)] = '\0';
            rekurzija(ostalo, ' ', strlen(ostalo), globina + 1);
        }
    }
}
int main() {
    char niz[201];
    scanf("%s", niz);
    int dolzina = strlen(niz);
    //printf("herreee\n");
    // dopolnite ...
    rekurzija(niz, ' ',  dolzina, 0);
    return 0;
}
