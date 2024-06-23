#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//1h 3min

void rekurzija(int n, int m, int K, int** povezave, int** sosedi, int* stevecSos, int* obiskani, int* curPot, int curVoz, int curStev, int curK){
    obiskani[curVoz] = 0;
    curPot[curStev] = curVoz;
    if(curK > K){
        obiskani[curVoz] = 1;
        return;
    }
    if(curVoz == n-1){
        for(int i = 0; i <= curStev; i++){
            if(i!=0) printf("->");
            printf("%d", curPot[i]);
        }
        printf("\n");
        obiskani[curVoz] = 1;
        return;
    }
    for(int i = 0; i < stevecSos[curVoz]; i++){
        int curKOdVoz = 0;
        if(obiskani[sosedi[curVoz][i]]){
            for(int y = 0; y < m; y++)
                if(povezave[y][0] == curVoz && povezave[y][1] == sosedi[curVoz][i])
                    curKOdVoz = povezave[y][2];
            rekurzija(n, m, K, povezave, sosedi, stevecSos, obiskani, curPot, sosedi[curVoz][i], curStev + 1, curK + curKOdVoz);
        }
    }
    obiskani[curVoz] = 1;
}

int main() {
    int n, m, K;
    scanf("%d %d %d", &n, &m, &K);
    int** povezave = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++)
        povezave[i] = (int*)malloc(3*sizeof(int));
    for(int i = 0; i < m; i++)
        scanf("%d %d %d", &povezave[i][0], &povezave[i][1], &povezave[i][2]);
    int** sosedi = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
        sosedi[i] = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
        for(int y = 0; y < n; y++)
            sosedi[i][y] = -1;
    int stevecSos[n];
    for(int i = 0; i < n; i++)
        stevecSos[i] = 0;
    for(int i = 0; i < m; i++)
        sosedi[povezave[i][0]][stevecSos[povezave[i][0]]++] = povezave[i][1];
    int obiskani[n];
    for(int i = 0; i < n; i++)
        obiskani[i] = 1;
    int curPot[n];
    rekurzija(n, m, K, povezave, sosedi, stevecSos, obiskani, curPot, 0, 0, 0);
    return 0;
}