
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
    FILE* input = fopen(argv[1], "rb");
    FILE* output = fopen(argv[2], "wb");

    unsigned char prejsni = 0x00;
    unsigned char zdejsni = 0x00;

    int countSkip = 0;

    for(int i = 0; fread(&zdejsni, 1, 1, input) != 0; i++){
        if(i != 0){
            if(prejsni == 0x1B && zdejsni == 0xC9){
                printf("%02X ", zdejsni);
                fputc(zdejsni, output);
                countSkip = 1;
            }
            else if(countSkip == 0){
                printf("%02X ", prejsni);
                fputc(prejsni, output);
            }
            else
                countSkip--;

        }
        prejsni = zdejsni;
    }
    if(countSkip == 0){
        printf("%02X ", prejsni);
        fputc(prejsni, output);
    }
    printf("\n");
    fclose(input);
    fclose(output);

    return 0;
}
