
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 *
 * Javni testni primeri:
 * 02..06: v vsakem podprimeru je "stevilo polj enako n^2
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
int absolutno(int n){
    if(n < 0)
        return (n*(-1));
    return n;
}
int main(int argc, char** argv) {
    // dopolnite ...
    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");
    char prvavrstica[20];
    fgets(prvavrstica, 20*sizeof(char), input);
    int n = 0, p = 0, dolzinaCur, v = 0, s = 0, v1 = 0, s1 = 0, valid = 1, pisiprvi = 1;
    for(int i = 0; i < strlen(prvavrstica)+2; i++){
        if(prvavrstica[i] == ' ')
            pisiprvi = 0;
        if(pisiprvi && prvavrstica[i] >= '0' && prvavrstica[i] <= '9')
            n = n*10 + (prvavrstica[i]-48);
        else if(prvavrstica[i] >= '0' && prvavrstica[i] <= '9')
            p = p*10 + (prvavrstica[i]-48);
    }
    char lineMax[((n*n*2)*3)+1];
    int tabela[n][n];
    for(int i = 0; i < n; i++)
        for(int y = 0; y < n; y++)
            tabela[i][y] = 1;
    for(int i = 0; i < p; i++){
        v = 0;
        v1 = 0;
        s = 0;
        s1 = 0;
        fgets(lineMax, (((n*n*2)*3)+1)*sizeof(char), input);
        dolzinaCur = strlen(lineMax);
        for(int y = 0; y < dolzinaCur; y++){
            if(lineMax[y] >= 'a' && lineMax[y] <= 'i'){//stolpec
                s = s1;
                s1 = (lineMax[y] - 96);
            }
            else if(lineMax[y] >= '1' && lineMax[y] <= '9'){
                v = v1;
                v1 = (lineMax[y] - 48);
            }
            if(lineMax[y] == ' ' || lineMax[y] == '\n'){
                if(v != 0){
                    if(absolutno(v1 - v)*absolutno(s1-s) != 2){//valid skok
                        valid = 0;
                        break;
                    }
                    else if(tabela[v1-1][s1-1] == 0){//valid polje
                        valid = 0;
                        break;
                    }
                    tabela[v1-1][s1-1] = 0;
                }
                else
                    tabela[v1-1][s1-1] = 0;
            }
            
        }
        for(int y = 0; y < n; y++)
            for(int k = 0; k < n; k++)
                if(tabela[y][k] != 0)
                    valid = 0;
        for(int y = 0; y < n; y++)
            for(int k = 0; k < n; k++)
                tabela[y][k] = 1;
        fprintf(output, "%d\n", valid);
        valid = 1;
    }
    return 0;
}