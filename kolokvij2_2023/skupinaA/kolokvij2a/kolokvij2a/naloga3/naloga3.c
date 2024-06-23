#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
double vrnirazdaljo(int curlok, int kam, int** kamencki){
    double vektorx = kamencki[kam][1] - kamencki[curlok][1];
    double vektory = kamencki[kam][2] - kamencki[curlok][2];
    return (sqrt((vektorx*vektorx) + (vektory*vektory)));
}
void rekurzija(int n, int K, int** kamencki, int* poteze, int curSkoki, int curlok){
    poteze[curSkoki] = curlok;
    if(curlok == n-1){
        for(int i = 0; i <= curSkoki; i++){
            if(i!=0) printf("->");
            printf("%d", poteze[i]);
        }
        printf("\n");
        return;
    }
    double currazDoNas = 0, currazDoKon = 0, miDoKon = 0;
    for(int i = 0; i < n; i++){
        currazDoNas = vrnirazdaljo(curlok, i, kamencki);
        currazDoKon = vrnirazdaljo(i, n-1, kamencki);
        miDoKon = vrnirazdaljo(curlok, n-1, kamencki);
        if( i != curlok && currazDoNas <= K && currazDoKon < miDoKon)
            rekurzija(n, K, kamencki, poteze, curSkoki + 1, i);
    }
}

int main() {
    int n, K;
    scanf("%d %d", &n, &K);
    int** kamencki = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
        kamencki[i] = (int*)malloc(3*sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d %d", &kamencki[i][1], &kamencki[i][2]);
        kamencki[i][0] = i;
    }
    int poteze[n];
    rekurzija(n, K, kamencki, poteze, 0, 0);
    return 0;
}
