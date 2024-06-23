
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
int main(int argc, char** argv) {
    //datoteke
    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");

    int stIskAtr = argc - 4, stVsehAtr = atoi(argv[3]);
    char** iskaniAtr = (char**)malloc(stIskAtr*sizeof(char*));
    for(int i = 0; i < stIskAtr; i++){
        iskaniAtr[i] = (char*)malloc(103*sizeof(char));
        iskaniAtr[i] = argv[4+i];
    }
    //dela

    //beremo line
    char* line = (char*)malloc(104*stVsehAtr*sizeof(char));
    fgets(line, 104*stVsehAtr*sizeof(char), input);
    int indeksiCharov[stVsehAtr];
    int indexTren = 0;
    indeksiCharov[indexTren++] = 0;
    int dolzina = strlen(line);
    line[dolzina - 2] = '\0';//pomembno
    for(int i = 0; i < dolzina; i++){
        if(line[i] == ' '){
            line[i] = '\0';
            indeksiCharov[indexTren++] = i+1;
        }
        if(line[i] == '\n'){
            line[i] = '\0';
        }
    }
    //dela
    
    int indeksiIskStolp[stIskAtr];//dobimo kere stolpce iscemo
    for(int i = 0; i < stVsehAtr; i++){
        for(int y = 0; y < stIskAtr; y++){
            if(strcmp(line + indeksiCharov[i], iskaniAtr[y]) == 0)
                indeksiIskStolp[y] = i;
        }
    }
    //dela
    /*printf("VPISNI PODATKI\n");
    for(int i = 0; i < stIskAtr; i++){
        printf("%s\n", iskaniAtr[i]);
    }
    printf("\n");*/
    //izpis atributov
    for(int i = 0; i < stIskAtr; i++){
        if(i != 0) fprintf(output, ",");
        fprintf(output, "%s", iskaniAtr[i]);
    }
    fprintf(output, "\n");
    //izpis preostalih vrstic
    int prvi;
    for(int i = 0; fgets(line, 104*stVsehAtr*sizeof(char), input) != NULL; i++){
        indexTren = 0;
        indeksiCharov[indexTren++] = 0;
        prvi = 0;
        dolzina = strlen(line);
        line[dolzina - 2] = '\0';//pomembno
        for(int y = 0; y < dolzina; y++){
            if(line[y] == ' '){
                line[y] = '\0';
                indeksiCharov[indexTren++] = y+1;
            }
            if(line[y] == '\n'){
                line[y] = '\0';
            }
        }
        //izpis
        for(int y = 0; y < stIskAtr; y++){
            for(int k = 0; k < stVsehAtr; k++){
                if(k == indeksiIskStolp[y]){
                    if(prvi++ != 0) fprintf(output, ",");
                    fprintf(output, "%s", line + indeksiCharov[k]);
                }
            }
        }
        fprintf(output, "\n");
    }
    return 0;
}
