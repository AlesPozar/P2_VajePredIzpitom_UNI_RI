#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Klub{
    char ImeKluba[21];
    int stClanov;
    char** Clani;
} Klub;

Klub* izdelaj(){
    Klub* neki = (Klub*)malloc(sizeof(Klub));
    scanf("%s %d", neki->ImeKluba, &(neki->stClanov));
    neki->Clani = (char**)malloc(neki->stClanov*sizeof(char*));
    for(int i = 0; i < neki->stClanov; i++){
        neki->Clani[i] = (char*)malloc(21*sizeof(char));
        scanf("%s", neki->Clani[i]);
    }
    return neki;
}

int main(){
    Klub* klubEna = izdelaj();

    printf("Ime kluba: %s\n", klubEna->ImeKluba);
    printf("Število članov: %d\n", klubEna->stClanov);
    for (int i = 0; i < klubEna->stClanov; i++) {
        printf("Član %d: %s\n", i + 1, klubEna->Clani[i]);
        free(klubEna->Clani[i]); 
    }
    free(klubEna->Clani);
    free(klubEna);
}