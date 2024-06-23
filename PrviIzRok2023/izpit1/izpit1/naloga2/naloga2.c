
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Testni primeri:
 * 02--06: a = 1, b = n
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
//od prve resitve potrebno pohitriti, glede na vhodne parametre se in potek operacij, se iste funkcije ne racunajo veckrat (memoizacija ni primerna), potrebni dodatni pogoji
void rekurzija(int sum, int a, int b, int* max, int stevec, int curSum, int curStev){
    /*if(curSum > sum)//prvi pogoj, ko je cursum vecji se vrne (v vecini primerov okoli polovico hitrejsi od zacetnega programa), z umestitvijo pred klicom nove globine se hitrejsi, primeri klicev ter stevilo operacij te pospesitve navedeni spodaj pod komentarji
            return;*/
    if(curSum == sum){
        if(stevec >= a && stevec <= b){
            for(int i = 0; i < stevec; i++){
                if(i != 0) printf("+");
                printf("%d", max[i]);
            }
            printf("\n");
        }
        return;
    }
    else if(stevec == b)
        return;
    for(int y = curStev; y <= sum; y++){//kle gremo vse stevilke skos
        if(curSum + y > sum)//prvi pogoj, ko je cursum vecji se vrne (v vecini primerov okoli polovico hitrejsi od zacetnega programa), z umestitvijo pred klicom nove globine se hitrejsi, primeri klicev ter stevilo operacij te pospesitve navedeni spodaj pod komentarji
            return;
        max[stevec] = y;
        /*printf("GLEDAMO: ");//koda za testiranje
        for(int i = 0; i < stevec+1; i++){
            if(i != 0) printf("+");
            printf("%d", max[i]);
        }
        printf("\n");*/
        rekurzija(sum, a, b, max, stevec + 1, curSum + y, y);
    }
}

int main() {
    int sum, a, b;
    scanf("%d %d %d", &sum, &a, &b);
    int max[sum];
    rekurzija(sum, a, b, max, 0, 0, 1);
    // dopolnite ...

    return 0;
}



/*PRVA RESITEV, prepocasi
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

void rekurzija(int sum, int a, int b, int* max, int stevec, int curSum, int curStev){
    if(curSum == sum){
        if(stevec >= a && stevec <= b){
            for(int i = 0; i < stevec; i++){
                if(i != 0) printf("+");
                printf("%d", max[i]);
            }
            printf("\n");
        }
        return;
    }
    else if(stevec == b)
        return;
    for(int y = curStev; y <= sum; y++){//kle gremo vse stevilke skos
        max[stevec] = y;
        rekurzija(sum, a, b, max, stevec + 1, curSum + y, y);
    }
}

int main() {
    int sum, a, b;
    scanf("%d %d %d", &sum, &a, &b);
    int max[sum];
    rekurzija(sum, a, b, max, 0, 0, 1);
    // dopolnite ...

    return 0;
}*/



/*
BREZ DODATNEGA POGOJA
4 2 3
GLEDAMO: 1
GLEDAMO: 1+1
GLEDAMO: 1+1+1
GLEDAMO: 1+1+2
1+1+2
GLEDAMO: 1+1+3
GLEDAMO: 1+1+4
GLEDAMO: 1+2
GLEDAMO: 1+2+2
GLEDAMO: 1+2+3
GLEDAMO: 1+2+4
GLEDAMO: 1+3
1+3
GLEDAMO: 1+4
GLEDAMO: 1+4+4
GLEDAMO: 2
GLEDAMO: 2+2
2+2
GLEDAMO: 2+3
GLEDAMO: 2+3+3
GLEDAMO: 2+3+4
GLEDAMO: 2+4
GLEDAMO: 2+4+4
GLEDAMO: 3
GLEDAMO: 3+3
GLEDAMO: 3+3+3
GLEDAMO: 3+3+4
GLEDAMO: 3+4
GLEDAMO: 3+4+4
GLEDAMO: 4

DODATNI POGOJ IZVEN FOR LOOPA, KOT PRVI POGOJ V REKURZIJI
4 2 3
GLEDAMO: 1
GLEDAMO: 1+1
GLEDAMO: 1+1+1
GLEDAMO: 1+1+2
1+1+2
GLEDAMO: 1+1+3
GLEDAMO: 1+1+4
GLEDAMO: 1+2
GLEDAMO: 1+2+2
GLEDAMO: 1+2+3
GLEDAMO: 1+2+4
GLEDAMO: 1+3
1+3
GLEDAMO: 1+4
GLEDAMO: 2
GLEDAMO: 2+2
2+2
GLEDAMO: 2+3
GLEDAMO: 2+4
GLEDAMO: 3
GLEDAMO: 3+3
GLEDAMO: 3+4
GLEDAMO: 4

DODATNI POGOJ V FOR LOOPU (razlika od prejsne implementacije izven for loopa je le ta, da tu ze v naprej predvidemo vsoto in se izognemo nepotrebnim klicem rekurzije, primerjav je enako)
4 2 3
GLEDAMO: 1
GLEDAMO: 1+1
GLEDAMO: 1+1+1
GLEDAMO: 1+1+2
1+1+2
GLEDAMO: 1+2
GLEDAMO: 1+3
1+3
GLEDAMO: 2
GLEDAMO: 2+2
2+2
GLEDAMO: 3
GLEDAMO: 4

ze samo s temi izboljsavami je program dovolj hiter, mozna izboljsava je se da ce je trenutna globina manjsa od a, presmocimo vse zgornje if stavke in se izognemo parim primerjavam,
lahko pa implementiramo nekaksen greedy algoritem ki, bi v primeru velikega a zelo pospesil izvajanje programa, deloval bi tako, da bi tabelo max(izpis) do a ze naprej dopolnili z minimalnimi entry-ji in se tako v prejsnih primerih izognili naslednjim primerjavam
GLEDAMO: 1
GLEDAMO: 2
GLEDAMO: 4
seveda bi v manjsih primerih ta implementacija najvrjetneje porabila celo vec casa, do bistvenih sprememb bi prislo sele v vecjih a-jih
*/