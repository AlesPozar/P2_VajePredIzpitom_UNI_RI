
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

//----------17min, 3. try
int main() {
    // dopolnite ...
    int v, s, k;
    scanf("%d %d %d", &v, &s, &k);

    //zaporedje A
    int zapA[k];
    for(int i = 0; i < k; i++) scanf("%d", &zapA[i]);
    
    //zaporedje B
    int zapB[v+1];
    for(int i = 0; i <= v; i++) scanf("%d", &zapB[i]);

    int steviloElVVrstici[v];
    for(int i = 0; i < v; i++) steviloElVVrstici[i] = zapB[i+1] - zapB[i];

    //zaporedje C
    int zapC[k];
    for(int i = 0; i < k; i++) scanf("%d", &zapC[i]);

    //moramo sestaviti matriko
    int stevecElementa = 0, stevecIndeksa = 0, curStevIzVVrstici = 0;
    for(int i = 0; i < v; i++){
        for(int y = 0; y < s; y++){
            if(y != 0) printf("_");
            if(y == zapC[stevecIndeksa] && curStevIzVVrstici < steviloElVVrstici[i]){
                printf("%d", zapA[stevecElementa]);
                stevecElementa++;
                stevecIndeksa++;
                curStevIzVVrstici++;
            }
            else
                printf("0");

        }
        curStevIzVVrstici = 0;
        printf("\n");
    }
    return 0;
}
