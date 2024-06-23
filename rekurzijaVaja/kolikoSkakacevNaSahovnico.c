#include <stdio.h>
#include <stdlib.h>

int maxPos = 0;
void rekurzija(int n, int** tabela, int curPost){
    if(curPost > maxPos)
        maxPos = curPost;
    int prosto = 1;
    for(int i = 0; i < curPost; i++){
        printf("    ");
    }
    printf("start: curPost: %d\n", curPost);

    for(int i = 0; i < n; i++){
        for(int y = 0; y < curPost; y++)
            printf("    ");
        for(int y = 0; y < n; y++){
            printf("%d", tabela[i][y]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            for(int k = 0; k < curPost; k++){
                printf("    ");
            }
            printf("    notranja\n");
            if(tabela[i][y] == 1){//ce je prost ga lah zasedemo oz. ne
                int DVR[] = {1, 2, 2, 1, -1, -2, -2, -1}; // vrstični premiki
                int DST[] = {2, 1, -1, -2, -2, -1, 1, 2}; // stolpčni premiki
                //ce so tudi vsi njegovi premiki prosti, ga vzamemo 
                int kateriPokritiOdPrej[] = {1,1,1,1,1,1,1,1};
                for(int k = 0; k < 8; k++){
                    if(i + DVR[k] >= 0 && i + DVR[k] < n && y + DST[k] >= 0 && y + DST[k] < n){//premik je in range od tabele
                        if(tabela[i + DVR[k]][y + DST[k]] == 0){
                            kateriPokritiOdPrej[k] = 0;
                        }
                        if(tabela[i + DVR[k]][y + DST[k]] == -1){//-1 pomeni da je tam ze skakac in ga ne moremo postaviti
                            prosto = 0;
                            kateriPokritiOdPrej[k] = 0;
                        }
                    }
                }
                if(prosto){
                    tabela[i][y] = -1;
                    for(int k = 0; k < 8; k++){
                        if(i + DVR[k] >= 0 && i + DVR[k] < n && y + DST[k] >= 0 && y + DST[k] < n){//premik je in range od tabele
                            for(int j = 0; j <= curPost; j++){
                                printf("    ");
                            }
                            printf("pokrijem: [%d,%d], z k: %d, i: %d, y: %d", i + DVR[k], y + DST[k], k, i, y);
                            printf("\n");
                            tabela[i + DVR[k]][y + DST[k]] = 0; //0 = pokrito 
                        }    
                    }
                    rekurzija(n, tabela, curPost+1);
                }
                prosto = 1;//reset za naprej
                for(int k = 0; k < 8; k++){
                    if(i + DVR[k] >= 0 && i + DVR[k] < n && y + DST[k] >= 0 && y + DST[k] < n){//premik je in range od tabele
                        if(kateriPokritiOdPrej[k])//ce je 1 pomeni da ni bil ne pokrit ne zaseden in ga resetiramo ce smo ga slucajno drugace nastavili
                            tabela[i + DVR[k]][y + DST[k]] = 1; //1 = prosto  
                    }   
                }
                tabela[i][y] = 1;
                //ce ga ne vzamemo to ne spremeni nicesam ker se naslednja rekurzija zacne iz 0 naprej in eventually pride do te pozicije
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int** tabela = (int**)malloc(n*sizeof(int*));//1 = prosto, 0 = pokrito, -1 = skakac
    for(int i = 0; i < n; i++)
        tabela[i] = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            tabela[i][y] = 1;//1 = prosto
        }
    }
    printf("NEKIIIIII\n");
    rekurzija(n, tabela, 0);
    printf("%d\n", maxPos);
}