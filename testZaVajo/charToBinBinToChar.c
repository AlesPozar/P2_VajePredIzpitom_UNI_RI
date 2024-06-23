#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void pretvoriVBin(int n){
    int velikost = 0, kopija = n;
    while(kopija > 0){
        kopija >>= 1;
        velikost++;
    }
    for(int i = (velikost-1); i >= 0; i--){
        printf("%d", n>>i & 1);
    }
    printf("\n");
}

void pretvoriVStev(char* vpis, int n){
    int velikost = 0, kopija = n, izpis = 0;
    while(kopija > 0){
        velikost++;
        kopija /= 10;
    }
    for(int i = 0; i < velikost; i++)
        if(vpis[i] == '1'){
            izpis += pow(2, (velikost-1)-i);
        }
    printf("%d\n", izpis);
}

int main(){
    int n;
    printf("Vpisi stevilo n: ");
    scanf("%d", &n);
    pretvoriVBin(n);
    printf("Binarno v st: ");
    char vpis[30];
    scanf("%s", vpis);
    n = atoi(vpis);
    pretvoriVStev(vpis, n);
    return 0;
}