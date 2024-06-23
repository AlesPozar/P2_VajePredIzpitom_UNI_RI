#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int** funkcija(int n){//10:45 min
    //dejansko generiramo spodnje trikotno matriko
    //a[0][-1] = 0
    //a[1][-1] = 1 a[1][0] = 0
    //...
    int** a = (int**)malloc((n+1)*sizeof(int*));//alociramo za n + 1, +1 da lahko dobimo a[n] vrednost
    a[n] = NULL;
    for(int i = 0; i < n; i++){
        a[i] = (int*)malloc(i*sizeof(int));
        a[i][-1] = i;
        for(int j = 0; j < i; j++) a[i][j] = j;
    }
    return a;
}

int main() {
    int n = 5;
    int** a = funkcija(n);
    for(int i = 0; i < n; i++) {
        printf("a[%d][-1] = %d ", i, a[i][-1]);
        for(int j = 0; j < i; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}