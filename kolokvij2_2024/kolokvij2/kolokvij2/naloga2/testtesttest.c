#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char besede[4][7] = {"prva\0", "druga\0", "tretja\0", "cetrta\0"};
    printf("%s\n", besede[0]);
    printf("%s\n", besede[1]);
    printf("%s\n", besede[2]);
    printf("%s+++\n", besede[3]);
    for(int i = 0; i < 4; i++)
        printf("%s+++\n", besede[i]);

    printf("\nDRUGI TEST\n\n");
    
    char niz[500] = {"neki zelo kul po presledkih\n\0"};
    char noviNizi[4][101];
    int dolzina = strlen(niz), stevnikPod = 0, stevVpisa = 0;
    for(int i = 0; i < dolzina; i++){
        if(niz[i] == ' ' || niz[i] == '\n'){
            noviNizi[stevnikPod][stevVpisa] = '\0';
            stevVpisa = 0;
            stevnikPod++;
        }
        else{
            noviNizi[stevnikPod][stevVpisa] = niz[i];
            stevVpisa++;
        }
    }
    printf("%s\n", noviNizi[0]);
    printf("%s\n", noviNizi[1]);
    printf("%s\n", noviNizi[2]);
    printf("%s+++\n", noviNizi[3]);
    printf("%s+++\n", noviNizi[4]);
    for(int i = 0; i < 5; i++){//indeks i gre od 0 do 5, brez 5
        printf("%s+++\n", noviNizi[i]);
    }

    return 0;
}