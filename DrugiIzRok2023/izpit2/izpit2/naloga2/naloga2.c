#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void rek(char* beseda, int a, int b, int indeks, int stSplitov, char* cur, int c, int dol){
    // printf("indeks: %d, %s\n", indeks, cur);
    if(stSplitov > b)return;
    if(indeks == dol){
        if(cur[0] != '|' && stSplitov >= a){
        for(int i=0; i<c; i++){
            printf("%c", cur[i]);
        }
        printf("\n");
        }
        return;
    }
    //dodaj splite
    if(cur[c-1] != '|'){
        cur[c]='|';
        rek(beseda, a, b, indeks, stSplitov+1, cur, c+1, dol);
    }
    //dodaj crko
    if(beseda[indeks] != '\0'){
        cur[c]=beseda[indeks];
        rek(beseda, a, b, indeks+1, stSplitov, cur, c+1, dol);
    }
}

int main() {
    int a, b;
    char* beseda=malloc(sizeof(char)*16);
    scanf("%s", beseda);
    scanf("%d %d", &a, &b);
    int c=0;
    while(beseda[c] != '\0')c++;
    char* cur=malloc(sizeof(char)*100);
    rek(beseda, a, b, 0, 1, cur, 0, c);
    return 0;
}