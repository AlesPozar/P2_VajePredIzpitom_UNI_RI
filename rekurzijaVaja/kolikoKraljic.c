#include <stdio.h>
#include <stdlib.h>

int maxStQ = 0;

void rekurzija(int n, int** tabela, int curPos){
    if(curPos>maxStQ){
        maxStQ = curPos;
        for(int i = 0; i < n; i++){
            for(int y = 0; y < n; y++){
                printf("%d ", tabela[i][y]);
            }
            printf("\n");
        }
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            if(tabela[i][y] == 1){
                for(int k = i; k < n; k++)//dol
                    tabela[k][y]--;
                for(int k = i; k >= 0; k--)//gor
                    tabela[k][y]--;
                for(int k = y; k < n; k++)//levo
                    tabela[i][k]--;
                for(int k = y; k >= 0; k--)//desno
                    tabela[i][k]--;
                for(int i2 = i, y2 = y; i2 < n && y2 < n; i2++, y2++)//dol desno
                    tabela[i2][y2]--;
                for(int i2 = i, y2 = y; i2 >= 0 && y2 < n; i2--, y2++)//gor desno
                    tabela[i2][y2]--;
                for(int i2 = i, y2 = y; i2 >= 0 && y2 >= 0; i2--, y2--)//gor levo
                    tabela[i2][y2]--;
                for(int i2 = i, y2 = y; i2 < n && y2 >= 0; i2++, y2--)//dol levo
                    tabela[i2][y2]--;
                rekurzija(n, tabela, curPos + 1);
                //reset kot da ga nismo postavili
                for(int k = i; k < n; k++)//dol
                    tabela[k][y]++;
                for(int k = i; k >= 0; k--)//gor
                    tabela[k][y]++;
                for(int k = y; k < n; k++)//levo
                    tabela[i][k]++;
                for(int k = y; k >= 0; k--)//desno
                    tabela[i][k]++;
                for(int i2 = i, y2 = y; i2 < n && y2 < n; i2++, y2++)//dol desno
                    tabela[i2][y2]++;
                for(int i2 = i, y2 = y; i2 >= 0 && y2 < n; i2--, y2++)//gor desno
                    tabela[i2][y2]++;
                for(int i2 = i, y2 = y; i2 >= 0 && y2 >= 0; i2--, y2--)//gor levo
                    tabela[i2][y2]++;
                for(int i2 = i, y2 = y; i2 < n && y2 >= 0; i2++, y2--)//dol levo
                    tabela[i2][y2]++;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int** tabela = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++){
        tabela[i] = (int*)malloc(n*sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++){
            tabela[i][y] = 1;
        }
    }
    rekurzija(n, tabela, 0);
    printf("%d\n", maxStQ);
    return 0;
}