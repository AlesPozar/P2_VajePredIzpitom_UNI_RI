
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


//24 min
// po potrebi dopolnite ...
int maxSkoki = 0;

void rekurzija(int n, int k, int** tabela, int* maxVrstice, int* maxStolpci, int* curVrstice, int* curStolpci, int curSkoki, int curVrs, int curStolp){
    int DVR[] = {1, 2, 2, 1, -1, -2, -2, -1}; // vrsticni premiki
    int DST[] = {2, 1, -1, -2, -2, -1, 1, 2}; // stolpcni premik
    for(int i = 0; i < 8; i++){
        if(curVrs + DVR[i] >= 0 && curVrs + DVR[i] < n && curStolp + DST[i] >= 0 && curStolp + DST[i] < n && tabela[curVrs + DVR[i]][curStolp + DST[i]]){
            tabela[curVrs + DVR[i]][curStolp + DST[i]] = 0;
            curVrstice[curSkoki] = curVrs + DVR[i];
            curStolpci[curSkoki] = curStolp + DST[i];
            rekurzija(n, k, tabela, maxVrstice, maxStolpci, curVrstice, curStolpci, curSkoki + 1, curVrs + DVR[i], curStolp + DST[i]);
            tabela[curVrs + DVR[i]][curStolp + DST[i]] = 1;
        }
        if(curSkoki > maxSkoki){
            maxSkoki = curSkoki;
            for(int i = 0; i < maxSkoki; i++){
                maxVrstice[i] = curVrstice[i];
                maxStolpci[i] = curStolpci[i];
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int** tabela = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
        tabela[i] = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            tabela[i][y] = 1;
        }
    }
    int a, b;
    for(int i = 0; i < k; i++){
        scanf("%d %d", &a, &b);
        tabela[a][b] = 0;
    }
    int maxVrstice[n*n];
    int maxStolpci[n*n];
    int curVrstice[n*n];
    int curStolpci[n*n];
    tabela[0][0] = 0;
    rekurzija(n, k, tabela, maxVrstice, maxStolpci, curVrstice, curStolpci, 0, 0, 0);
    for(int i = 0; i < maxSkoki; i++){
        printf("%d/%d\n", maxVrstice[i], maxStolpci[i]);
    }
    return 0;
}
