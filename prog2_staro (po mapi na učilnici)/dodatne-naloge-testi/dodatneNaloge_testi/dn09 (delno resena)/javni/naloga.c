
#include <stdio.h>
#include <stdlib.h>

int maxProd = 0;

void rekurzija(int m, int n, int** prod, int globina, int curProd, int* porInd){
    if(globina == m){
        if(curProd > maxProd)
            maxProd = curProd;
        return;
    }
    for(int i = 0; i < n; i++){
        if(porInd[i]){
            porInd[i] = 0;
            rekurzija(m, n, prod, globina + 1, curProd + prod[globina][i], porInd);
            porInd[i] = 1;
        }
        rekurzija(m, n, prod, globina + 1, curProd, porInd);
    }
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int** prod = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++) prod[i] = (int*)malloc(n*sizeof(int));
    int* porInd = (int*)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) porInd[i] = 1;
    for(int i = 0; i < m; i++)
        for(int y = 0; y < n; y++)
            scanf("%d", &prod[i][y]);
    rekurzija(m, n, prod, 0, 0, porInd);
    printf("%d\n", maxProd);
    return 0;
}