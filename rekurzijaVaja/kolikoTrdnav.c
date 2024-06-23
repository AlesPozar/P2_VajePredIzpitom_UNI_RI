#include <stdio.h>
#include <stdlib.h>

int maxPost = 0;

void rekurzija(int n, int** tabela, int postavljeni){
    
    for(int g = 0; g < postavljeni; g++){
        printf("    ");
    }
    printf("Trenutna globina: %d\n", postavljeni);
    if(postavljeni > maxPost){
        maxPost = postavljeni;
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            if(tabela[i][y] == 1){//ce je prosto lahko postavimo oz. ne
                //ker so vsa polja, ki jih lahko pokrijemo z trdnjavo tudi polja ki jih lahko pokrijemo z trdnjavo v podobni vrstici/stolpcu, ni potrebno pogledati ali so vsa prosta
                //postavimo
                for(int k = i; k < n; k++)//desno
                    tabela[k][y]--;
                for(int k = i; k >= 0; k--)//levo
                    tabela[k][y]--;
                for(int k = y; k >= 0; k--)//gor
                    tabela[k][y]--;
                for(int k = y; k < n; k++)//dol
                    tabela[k][y]--;
                rekurzija(n, tabela, postavljeni + 1);
                //ne postavimo, aka samo reset
                for(int k = i; k < n; k++)//desno
                    tabela[k][y]++;
                for(int k = i; k >= 0; k--)//levo
                    tabela[k][y]++;
                for(int k = y; k >= 0; k--)//gor
                    tabela[k][y]++;
                for(int k = y; k < n; k++)//dol
                    tabela[k][y]++;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int** tabela = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n ; i++)
        tabela[i] = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            tabela[i][y] = 1;
        }
    }
    printf("DO TU\n");
    rekurzija(n, tabela, 0);
    printf("%d\n", maxPost);
    return 0;
}