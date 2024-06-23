
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

//------------ 15min, 1. try

int main() {
    // dopolnite ...
    int v, s;
    scanf("%d %d", &v, &s);
    int matrika[v][s];
    for(int i = 0; i < v; i++){
        for(int y = 0; y < s; y++){
            scanf("%d", &matrika[i][y]);
        }
    }
    //zaporedje A
    int stevecPrintov = 0;
    for(int i = 0; i < v; i++){
        for(int y = 0; y < s; y++){
            if(matrika[i][y] != 0){
                if(stevecPrintov != 0) printf("_");
                stevecPrintov++;
                printf("%d", matrika[i][y]);
            }
        }
    }
    printf("\n");
    int stevilaB[v + 1];
    for(int i = 0; i < v + 1; i++) stevilaB[i] = 0;
    int stevecN0 = 0;
    for(int i = 0; i < v; i++){
        for(int y = 0; y < s; y++){
            if(matrika[i][y] != 0){
                stevecN0++;
            }
        }
        stevilaB[i+1] = stevilaB[i] + stevecN0++;
        stevecN0 = 0;
    }
    for(int i = 0; i < v + 1; i++){
        if(i != 0) printf("_");
        printf("%d", stevilaB[i]);
    }
    printf("\n");
    stevecPrintov = 0;
    for(int i = 0; i < v; i++){
        for(int y = 0; y < s; y++){
            if(matrika[i][y] != 0){
                if(stevecPrintov != 0) printf("_");
                stevecPrintov++;
                printf("%d", y);
            }
        }
    }
    printf("\n");
    return 0;
}
