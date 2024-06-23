
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
//6min
int main(int argc, char** argv) {
    // dopolnite ...
    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");

    char* line = (char*)malloc(100010*sizeof(char));
    while(fgets(line, 100010*sizeof(char), input) != NULL){
        int dolzina = strlen(line);
        for(int i = 0; i < dolzina; i++){
            if(line[i] != ' '){
                fprintf(output, "%s", (line+i));
                break;
            }
        }
    }

    return 0;
}
