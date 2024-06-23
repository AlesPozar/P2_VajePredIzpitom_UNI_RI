#include <stdio.h>
#include <stdlib.h>

void delovnaFunkcijaDva(int n, char *niz, int f, char odKam, char doKam){
    if(f == 0){
        for(int i = 0; i < n; i++){
            printf("%c", niz[i]);
        }
        printf("\n");
        return;
    }
    else{
        for(int i = odKam; i < doKam+1; i++){
            niz[f-1] = i;//aaa, baa, caa, ...
            //niz[n-f] = i;//aaa, aab, aac, ...
            delovnaFunkcijaDva(n, niz, f-1, odKam, doKam);
        }
    }
}

void inicializacijaDva(int n, char odKam, char doKam){
    char *niz = (char*)malloc(n*sizeof(char));
    for(int i = 0; i < n; i++){
        delovnaFunkcijaDva(i+1, niz, i+1, odKam, doKam);
    }
}

int main(){
    //funkcija naj prejme koliko crk naj bo dolgo zaporedje npr 3, nato pa izpise vse mozne kombinacije do tega zaporedja, od aaa do pri npr dolzini 3 zzz
    inicializacijaDva(3, 'x', 'z');
    return 0;
}