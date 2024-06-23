#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void razlike(FILE* prva, FILE* druga, FILE* izhod){
    char lineOne[1002], lineTwo[1002];
    for(int i = 0; fgets(lineOne, 1002*sizeof(char), prva) != NULL && fgets(lineTwo, 1002*sizeof(char), druga) != NULL; i++){
        if(strcmp(lineOne, lineTwo) != 0)
            fprintf(izhod, "%d\n", i+1);
    }
}

int main(int argc, char* argv[]){
    FILE* inputEna = fopen(argv[1], "r");
    FILE* inputDva = fopen(argv[2], "r");
    FILE* output = fopen(argv[3], "w");

    razlike(inputEna, inputDva, output);

    fclose(inputEna);
    fclose(inputDva);
    fclose(output);
    return 0;
}