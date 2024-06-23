#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int steviloInKta(char* niz, int k, int* indeks){
    int steveccrk = 0;
    *indeks = -1;
    for(int i = 0; i < strlen(niz); i++){
        if(niz[i] >= 65 && niz[i] <= 90){//je velika crka
            steveccrk++;
            if(steveccrk == k)
                *indeks = i;
        }
    }
    return steveccrk;
}

void indeksi(char* niz, int** t){
    int *vrni = (int*)malloc((strlen(niz)+1)*sizeof(int));//+1 za -1, plus ce so vse velike
    printf("len %ld\n", strlen(niz)+1);
    int stev = 0;
    for(int i = strlen(niz)-1; i >= 0; i--){
        if(niz[i] >= 65 && niz[i] <= 90){//je velika crka
            vrni[stev] = i;
            stev++;
        }
    }
    vrni[stev] = -1;
    printf("stev %d\n", stev);
    for(int i = 0; i < stev+1; i++){
        printf("char na i %d\n", vrni[i]);
    }
    *t = vrni;
}

char** zadnje(char** nizi){
    int len = 0, real = 0;
    if(nizi == NULL)
        return NULL;
    if(nizi[0] == NULL)
        return NULL;
    while(1){
        if(nizi[len] == NULL){
            break;
        }
        len++;
    }
    char **vrni = (char**)malloc(len*sizeof(char*));
    for(int i = 0; i < len; i++){
        vrni[i] = NULL;
        for(int j = strlen(nizi[i]); j >= 0; j--){
            if(nizi[i][j] >= 65 && nizi[i][j] <= 90){
                vrni[i] = &nizi[i][j];
                break;
            }
        }
    }
    return vrni;
}

int main() {
    int indeks;

    // Test for steviloInKta
    int result1 = steviloInKta("Hello World", 2, &indeks);
    printf("Expected: 2, Actual: %d\n", result1);
    printf("Expected: 6, Actual: %d\n", indeks);

    result1 = steviloInKta("Hello World", 3, &indeks);
    printf("Expected: 2, Actual: %d\n", result1);
    printf("Expected: -1, Actual: %d\n", indeks);

    result1 = steviloInKta("HELLO WORLD", 5, &indeks);
    printf("Expected: 10, Actual: %d\n", result1);
    printf("Expected: 4, Actual: %d\n", indeks);

    // Test for indeksi
    int* t;
    indeksi("Hello World", &t);
    printf("Expected: 6, Actual: %d\n", t[0]);
    printf("Expected: 0, Actual: %d\n", t[1]);
    printf("Expected: -1, Actual: %d\n", t[2]);
    free(t);

    indeksi("HELLO WORLD", &t);
    printf("Expected: 10, Actual: %d\n", t[0]);
    printf("Expected: 9, Actual: %d\n", t[1]);
    printf("Expected: 8, Actual: %d\n", t[2]);
    printf("Expected: 7, Actual: %d\n", t[3]);
    printf("Expected: 6, Actual: %d\n", t[4]);
    printf("Expected: 4, Actual: %d\n", t[5]);
    printf("Expected: 3, Actual: %d\n", t[6]);
    printf("Expected: 2, Actual: %d\n", t[7]);
    printf("Expected: 1, Actual: %d\n", t[8]);
    printf("Expected: 0, Actual: %d\n", t[9]);
    printf("Expected: -1, Actual: %d\n", t[10]);
    free(t);

    // Test for zadnje
    char* nizi[] = {"Hello", "WORLD", "Test", NULL};
    char** result3 = zadnje(nizi);
    printf("Expected: H, Actual: %c\n", *result3[0]);
    printf("Expected: D, Actual: %c\n", *result3[1]);
    printf("Expected: T, Actual: %c\n", *result3[2]);
    printf("Expected: NULL, Actual: %s\n", result3[3] ? "Not NULL" : "NULL");
    free(result3);

    return 0;
}