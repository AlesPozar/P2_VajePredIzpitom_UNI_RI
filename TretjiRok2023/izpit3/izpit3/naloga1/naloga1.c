
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 *
 * Javni testni primeri:
 *
 * 01: iz besedila naloge
 * 02..04: a = b > 0
 * 05..07: a > b > 0
 * 01, 08..10: ni dodatnih omejitev glede a in b
 * 02, 04, 06, 08, 10: vsak bajt je bodisi 0 bodisi 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
//18 min
int main(int argc, char** argv) {
    // dopolnite ...
    FILE* inputEna = fopen(argv[1], "rb");
    FILE* inputDva = fopen(argv[2], "rb");
    FILE* output = fopen(argv[3], "wb");

    unsigned char a, b;
    int koneca = 0, konecb = 0;

    for(int i = 0; 1; i++){
        if(koneca == 0 && konecb == 0){
            if(fread(&b, 1, 1, inputDva) == 0)//ni imel nic notri
                konecb = 1;
            if(fread(&a, 1, 1, inputEna) == 0)//ni imel nic notri
                koneca = 1;
        }
        else{
            if(koneca){
                if(fread(&b, 1, 1, inputDva) == 0)//ni imel nic notri
                    konecb = 1;
            }
            if(konecb){
                if(fread(&a, 1, 1, inputEna) == 0)//ni imel nic notri
                    koneca = 1;
            }
        }
        if(koneca && konecb)
            break;
        if(koneca)
            putc(b, output);
        else if(konecb)
            putc(a, output);
        else if(a > b){
            putc(a, output);
        }
        else{
            putc(b, output);
        }
    }

    fclose(inputEna);
    fclose(inputDva);
    fclose(output);
    return 0;
}
