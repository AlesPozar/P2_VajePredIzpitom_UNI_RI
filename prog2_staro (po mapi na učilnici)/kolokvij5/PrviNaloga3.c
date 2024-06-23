#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//nej bi bila rekurzija sam ce lahko funkcija kot pri navodilih prejme le niz potem tega ne znam
void prefix(char *niz){//4:10 min
    char *nizZaIzpis = (char*)malloc(strlen(niz)*sizeof(char));
    for(int i = 0; i < strlen(niz) + 1; i++){
        printf("%s\n", nizZaIzpis);
        if(i < strlen(niz))
            nizZaIzpis[i] = niz[i];
    }
}

//rekurzivno
int prefixRekur(char *niz, int i){//7:35 min
    if(i == strlen(niz) + 1)
        return 0;
    else{
        for(int j = 0; j < i; j++)
            printf("%c", niz[j]);
        printf("\n");
        prefixRekur(niz, ++i);
    }
    return 0;
}
int main(){
    char *niz = "Hello";
    prefix(niz);
    printf("REKURZIVNO\n");
    prefixRekur(niz, 0);
    return 0;
}