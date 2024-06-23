#include <stdio.h>
#include <stdlib.h>

//ukaz 1
int stevVoz = 1;
void steviloVozliscVPoddrevesu(int** tabelaOtrok, int* stevOtrok, int trenVoz){
    if(stevOtrok[trenVoz-1] == 0)
        return;
    stevVoz += stevOtrok[trenVoz-1];
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        steviloVozliscVPoddrevesu(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i]);
    }
}

//ukaz 2
int najvecjaStev(int** tabelaOtrok, int* stevOtrok, int trenVoz){
    if(stevOtrok[trenVoz-1] == 0)
        return trenVoz;
    int trenMax = trenVoz, trenRet;
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        trenRet = najvecjaStev(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i]);//tu za optimizacijo, da dvakrat ne klicemo enake funkcije
        if(trenMax < trenRet)
            trenMax = trenRet; 
    }
    return trenMax;
}

//ukaz 3
int maxGlobina(int** tabelaOtrok, int* stevOtrok, int trenVoz, int globina){
    if(stevOtrok[trenVoz-1] == 0)
        return globina;
    int trenMax = globina, trenRet;
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        trenRet = maxGlobina(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i], globina + 1);
        if(trenMax < trenRet)
            trenMax = trenRet; 
    }
    return trenMax;
}

//ukaz 4
int stVozNaGlobH = 0;
void steviloVozliscNaH(int** tabelaOtrok, int* stevOtrok, int trenVoz, int globina, int H){
    if(globina == H){
        stVozNaGlobH++;
        return;
    }   
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        steviloVozliscNaH(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i], globina + 1, H);
    }
}

//ukaz 5
void izpisEna(int** tabelaOtrok, int* stevOtrok, int trenVoz){
    if(stevOtrok[trenVoz-1] == 0)
        return;
    printf("[");
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        if(i != 0) printf(", ");
        printf("%d", tabelaOtrok[trenVoz-1][i]);
        izpisEna(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i]);
    }
    printf("]");
}

//ukaz 6
void izpisDva(int** tabelaOtrok, int* stevOtrok, int trenVoz, int globina, int* izpis){
    if(stevOtrok[trenVoz-1] == 0)
        return;
    for(int i = 0; i < stevOtrok[trenVoz-1]; i++){
        //ce je zadnji pisemo presledke drugace pa crtico
        for(int i = 0; i < globina; i++){
            if(izpis[i] == 0)//presledek
                printf("    ");
            else//crtica
                printf("|   ");
        }
        printf("+-- %d\n", tabelaOtrok[trenVoz-1][i]);
        if(i == stevOtrok[trenVoz-1] - 1){
            izpis[globina] = 0;
        }
        izpisDva(tabelaOtrok, stevOtrok, tabelaOtrok[trenVoz-1][i], globina + 1, izpis);
    }
    izpis[globina] = 1;
}

int main(){
    int n, k;
    scanf("%d", &n);
    int** tabelaOtrok = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) tabelaOtrok[i] = (int*)malloc(n*sizeof(int));
    int stevOtrok[n];
    for(int i = 0; i < n; i++){
        for(int y = 0; y < n; y++)
            tabelaOtrok[i][y] = -1;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &stevOtrok[i]);
        for(int y = 0; y < stevOtrok[i]; y++)
            scanf("%d", &tabelaOtrok[i][y]);
    }
    scanf("%d", &k);
    int ukaz, parameter;
    for(int i = 0; i < k; i++){
        scanf("%d %d", &ukaz, &parameter);

        //ukaz 1: stevilo vozlisc poddrevesa
        if(ukaz == 1){
            //neka rekurzija
            stevVoz = 1;
            steviloVozliscVPoddrevesu(tabelaOtrok, stevOtrok, parameter);
            printf("%d\n", stevVoz);
        }

        //ukaz 2: vozlisce z najvecjo stevilko v poddrevesu
        if(ukaz == 2){
            printf("%d\n", najvecjaStev(tabelaOtrok, stevOtrok, parameter));
        }

        //ukaz 3: maksimalna globina "visina" poddrevesa
        if(ukaz == 3){
            printf("%d\n", maxGlobina(tabelaOtrok, stevOtrok, parameter, 0));
        }

        //ukaz 4: stevilo vozlisc na nivoju h v podanem poddrevesu, kjer je h visina drevesa
        if(ukaz == 4){
            stVozNaGlobH = 0;
            steviloVozliscNaH(tabelaOtrok, stevOtrok, parameter, 0, maxGlobina(tabelaOtrok, stevOtrok, parameter, 0));
            printf("%d\n", stVozNaGlobH);
        }

        //ukaz 5: izpis dreveas z []
        if(ukaz == 5){
            printf("%d", parameter);
            izpisEna(tabelaOtrok, stevOtrok, parameter);
            printf("\n");
        }

        //ukaz 6: izpis dreveas z globino
        if(ukaz == 6){
            int vel = maxGlobina(tabelaOtrok, stevOtrok, parameter, 0);
            int izpis[vel];
            for(int i = 0; i < vel; i++) izpis[i] = 1;
            printf("%d\n", parameter);
            izpisDva(tabelaOtrok, stevOtrok, parameter, 0, izpis);
        }

    }
}