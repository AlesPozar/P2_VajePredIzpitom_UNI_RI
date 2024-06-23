#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    //prebere poljubno dolg string do 20 in ga loci po ' ', med dvema presledkoma je vsaj en znak, izpisi tudi najveckrat ponovljeno besedo ter kolikokrat se je pojavila
    char* vhod = (char*)malloc(20*sizeof(char));
    fgets(vhod, 20, stdin);
    vhod[strcspn(vhod, "\n")] = '\0';//enter na koncu ze spremenimo
    int stevec = 0;
    int indeksiZacetkov[strlen(vhod)];

    indeksiZacetkov[stevec] = 0;
    int dolzina = strlen(vhod);
    for(int i = 0; i < dolzina; i++){
        if(vhod[i] == ' '){
            vhod[i] = '\0';
            stevec++;
            indeksiZacetkov[stevec] = i+1;
        }
    }
    printf("Stevec %d\n", stevec);
    if(stevec){
        int steviloPojavitev = 1, maxPojavitev = 0;
        char* najveckratPonovljena = (char*)malloc(20*sizeof(char));
        for(int i = 0; i <= stevec; i++){
            printf("%s\n", vhod + indeksiZacetkov[i]);
            steviloPojavitev = 1;
            for(int y = i + 1; y <= stevec; y++){
                if(strcmp(vhod + indeksiZacetkov[i], vhod + indeksiZacetkov[y]) == 0){
                    steviloPojavitev++;
                    if(steviloPojavitev > maxPojavitev){
                        strcpy(najveckratPonovljena, vhod + indeksiZacetkov[i]);
                        maxPojavitev = steviloPojavitev;
                    }
                }
            }
        }
        if(maxPojavitev != 0)
            printf("najveckrat ponovljena beseda je: %s, ponovila se je %d-krat\n", vhod, maxPojavitev);
        else
            printf("nobena beseda se ni ponovila\n");
    }
    else{
        printf("%s\n", vhod);
        printf("nobena beseda se ni ponovila\n");
    }
    return 0;
}