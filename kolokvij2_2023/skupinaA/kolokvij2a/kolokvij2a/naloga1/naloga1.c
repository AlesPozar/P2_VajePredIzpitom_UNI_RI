
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
//10 min
int main(int argc, char** argv) {
    // dopolnite ...
    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");
    char prejsni, zdejsni;
    int valid = 1;
    for(int i = 0; (zdejsni = fgetc(input)) != EOF; i++){
        if(i != 0){
            valid++;
            if(prejsni == '"' && (zdejsni == 'C' || zdejsni == 'c' || zdejsni == 'S' || zdejsni == 's' || zdejsni == 'Z' || zdejsni == 'z')){
                fputc(zdejsni, output);
                valid = -1;
            }
            else if(valid >= 1)
                fputc(prejsni, output);
        }
        prejsni = zdejsni;
    }
    if(valid == 1 || valid == 0)//ce zadnjega se nismo izpisali
        fputc(prejsni, output);
    return 0;
}
