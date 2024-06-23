#include <stdio.h>
#include <stdlib.h>

typedef struct Vozlisce Vozlisce;

struct Vozlisce {
    int value;
    Vozlisce* naslednje;
};

Vozlisce* ustvari(Vozlisce** vsa, int globina, int stevVsehEl, int* elementi){
    if(globina == stevVsehEl-1){
        vsa[globina]->naslednje = NULL;
    }
    else
        vsa[globina]->naslednje = ustvari(vsa, globina+1, stevVsehEl, elementi);
    vsa[globina]->value = elementi[globina];
    return vsa[globina];
}
Vozlisce* prepisi(int* t){
    int dolzina = 0;
    while(t[dolzina] != 0)
        dolzina++;
    printf("dolzina tabele: %d\n", dolzina);
    if(dolzina == 0)
        return NULL;
    Vozlisce** vsa = (Vozlisce**)malloc(dolzina*sizeof(Vozlisce*));
    for(int i = 0; i < dolzina; i++)
        vsa[i] = (Vozlisce*)malloc(sizeof(Vozlisce));
    ustvari(vsa, 0, dolzina, t);
    return vsa[0];
}

int main(){
    int tab[6] = {1,2,3,4,5,0};
    Vozlisce* start = prepisi(tab);
    while(start != NULL){
        printf("%d, ", start->value);
        start = start->naslednje;
    }
    printf("\n");
    return 0;
}