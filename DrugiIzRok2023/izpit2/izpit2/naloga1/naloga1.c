
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    // dopolnite ...
    unsigned char trenutni = 0x00, prejsni = 0x00;
    FILE* input = fopen(argv[1], "rb");
    FILE* output = fopen(argv[2], "wb");
    int vpisano = 0;

    /*while(fread(&neki, sizeof(unsigned char), 1, input) != 0){
        printf("%02X ", neki);
    }
    printf("\n");*/
    //rewind(input);
    for(int i = 0; fread(&trenutni, sizeof(unsigned char), 1, input) != 0; i++){
        if(i != 0){
            if(vpisano && prejsni != trenutni){
                vpisano = 0;
            }
            else if(vpisano == 0 && prejsni == trenutni){
                fwrite(&prejsni, sizeof(unsigned char), 1, output);
                //printf("%02X ", prejsni);
                vpisano = 1;
            }
            else if(vpisano == 0){
                fwrite(&prejsni, sizeof(unsigned char), 1, output);
                //printf("%02X ", prejsni);
            }
        }
        prejsni = trenutni;
    }
    if(vpisano == 0){
        fwrite(&prejsni, sizeof(unsigned char), 1, output);
        //printf("%02X ", prejsni);
    }
    //printf("\n");
    fclose(input);
    fclose(output);
    return 0;
}
