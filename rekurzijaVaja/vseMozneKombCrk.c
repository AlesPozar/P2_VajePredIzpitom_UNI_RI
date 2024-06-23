#include <stdio.h>
#include <stdlib.h>

void delovnaFunkcija(int n, char *niz, int f){
    if(f == 0){
        for(int i = 0; i < n; i++){
            printf("%c", niz[i]);
        }
        printf("\n");
        return;
    }
    else{
        for(int i = 97; i < 123; i++){
            niz[f-1] = i;//aa, ba, ca, ...
            //niz[n-f] = i;//aa, ab, ac, ...
            delovnaFunkcija(n, niz, f-1);
        }
    }
}

void inicializacija(int n){
    char *niz = (char*)malloc(n*sizeof(char));
    delovnaFunkcija(n, niz, n);
}

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
    delovnaFunkcijaDva(n, niz, n, odKam, doKam);
}

int main(){
    //funkcija naj prejme koliko crk naj bo dolgo zaporedje npr 3, nato pa izpise vse mozne kombinacije do tega zaporedja, od aaa do pri npr dolzini 3 zzz
    inicializacija(2);
    //podobno samo z dolocenimi merami
    inicializacijaDva(3, 'x', 'z');
    return 0;
}