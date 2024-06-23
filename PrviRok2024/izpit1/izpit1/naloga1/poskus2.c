#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//53 min
int main(int argc, char* argv[]){
    FILE* intput = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");

    int n, p;
    char* first = (char*)malloc(20*sizeof(char));
    fgets(first, 20*sizeof(char), intput);
    sscanf(first, "%d %d", &n, &p);
    //printf("%d %d\n", n, p);
    char* line = (char*)malloc((((2*n*n) + 5)*3)*sizeof(char));

    //nastavitev sahovnice
    int** sahovnica = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
        sahovnica[i] = (int*)malloc(n*sizeof(int));

    int v, v1, s, s1, valid;
    for(int i = 0; i < p; i++){
        v = 1000;
        v1 = 1000;
        s = 1000;
        s1 = 1000;
        valid = 1;
        for(int y = 0; y < n; y++)
            for(int k = 0; k < n; k++)
                sahovnica[y][k] = 1;

        fgets(line, (((2*n*n) + 5) * 3)*sizeof(char), intput);
        //printf("%s\n", line);
        for(int y = 0; y < strlen(line); y++){
            //printf("cur run %d\n", i);
            if(line[y] >= 'a' && line[y] <= 'i'){//stolpec
                s = s1;
                s1 = (line[y]-97);
            }
            else if(line[y] >= '1' && line[y] <= '9'){
                v = v1;
                v1 = (line[y]-49);
            }
            else if((line[y] == ' ' || line[y] == '\n') && v != 1000){
                sahovnica[v][s] = 0;
                if((abs(v1-v)*abs(s1-s) != 2) || !sahovnica[v1][s1]){//mozen skok
                    //printf("prebrane vrednosti v %c, s %c, v1 %c, s1 %c\n", v+49, s+97, v1+49, s1+97);
                    //if(!sahovnica[v1][s1])
                        //printf("mesto [%d][%d] ze zasedeno\n", v1, s1);
                    //else
                        //printf("skok ni valid\n");
                    valid = 0;
                }
                sahovnica[v1][s1] = 0;
            }
            if(!valid){
                //printf("valid goes crazy chat\n");
                break;
            }
        }
        for(int y = 0; y < n; y++)
            for(int k = 0; k < n; k++)
                if(sahovnica[y][k])
                    valid = 0;
        
        fprintf(output, "%d\n", valid);
        //printf("%d\n", valid);
    }
    return 0;
}