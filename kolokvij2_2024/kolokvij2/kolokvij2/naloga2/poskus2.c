#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
int main(int argc, char** argv) {
    //datoteke
    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");

    int stIskParam = argc - 4;
    int vsiParam = atoi(argv[3]);
    char iskaniParam[stIskParam][101];
    for(int i = 0; i < stIskParam; i++)
        strcpy(iskaniParam[i], argv[i+4]);

    //imamo atribute
    char zacasna[101];
    int poVrstiKeri[stIskParam];
    for(int i = 0; i < vsiParam; i++){//dobimo prvo vrstico
        fscanf(input, "%101s", zacasna);
        for(int y = 0; y < stIskParam; y++){
            if(strcmp(iskaniParam[y], zacasna) == 0){
                poVrstiKeri[y] = i;
            }
        }
    }
    //imamo indekse stolpcev po vrsti izpisa
    for(int y = 0; y < stIskParam; y++){
        if(y != 0) fprintf(output, ",");
        fprintf(output, "%s", iskaniParam[y]);
    }
    fprintf(output, "\n");
    int ostanek, vsajEn = 0;
    char line[vsiParam][101];
    for(int i = 0; fscanf(input, "%101s", zacasna) != EOF; i++){
        if(i > 0 && (i % vsiParam) == 0){//banger prebrali vse parametre in izpisemo
            for(int y = 0; y < stIskParam; y++){
                if(y != 0) fprintf(output, ",");
                fprintf(output, "%s", line[poVrstiKeri[y]]);
            }
            fprintf(output, "\n");
        }
        ostanek = i%vsiParam;
        strcpy(line[ostanek], zacasna);
        vsajEn = 1;
    }
    if(vsajEn){
        for(int y = 0; y < stIskParam; y++){
            if(y != 0) fprintf(output, ",");
            fprintf(output, "%s", line[poVrstiKeri[y]]);
        }
        fprintf(output, "\n");
    }
    return 0;
}