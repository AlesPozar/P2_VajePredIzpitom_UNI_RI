#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//SKUPNO Z DEBUGGIGNG IN ROCNIM TESTIRANJEM 31:29 min
int pojavitve(char* niz, char c, int* indeks){//2:19 min (pred testiranjem)
    int prva = -1, pojavitve = 0;
    *indeks = prva;
    for(int i = 0; i < strlen(niz); i++){
        if(niz[i] == c){
            pojavitve++;
            if(prva == -1){
                *indeks = i;
                prva = 0;
            }
        }
    }
    return pojavitve;
}

void naslednjaPojavitev(char* niz, int* indeks){//4:23 min (pred testiranjem)
    char iskani = niz[*indeks];
    for(int i = *indeks + 1; i < strlen(niz); i++){
        if(niz[i] == iskani){
            *indeks = i;
            break;
        }
        *indeks = -1;
    }
}

char* kopijaPodniza(char* niz, char c, int k){//7:02 min (pred testiranjem)
    char *vrniNiz = (char*)malloc(strlen(niz)*sizeof(char));//alociramo za max mozno prostor
    int stevecKTih = 0, indeksVrniNiz = 0, prvi = 0;
    for(int i = 0; i < strlen(niz); i++){
        if(niz[i] == c){
            stevecKTih++;
            if(stevecKTih > k){//ker k + 1 je konec, in zadnjega simbola ne upostevamo
                break;
            }
            continue;
        }
        if(stevecKTih == k){
            vrniNiz[indeksVrniNiz] = niz[i];
            indeksVrniNiz++;
        }
    }
    return vrniNiz;
}

int main(){
    char test_string[] = "hello world";
    int index;

    int count = pojavitve(test_string, 'l', &index);
    if(count != 3 || index != 2) {
        printf("Test for function 'pojavitve' failed.\n");
    }

    count = pojavitve(test_string, 'z', &index);
    if(count != 0 || index != -1) {
        printf("Test for function 'pojavitve' failed.\n");
    }
    
    index = 2;
    naslednjaPojavitev(test_string, &index);
    if(index != 3) {
        printf("Test for function 'naslednjaPojavitev' failed.\n");
    }

    naslednjaPojavitev(test_string, &index);
    if(index != 9) {
        printf("Test for function 'naslednjaPojavitev' failed.\n");
    }

    char* result;

    result = kopijaPodniza(test_string, 'l', 1);
    if(strcmp(result, "") != 0) {
        printf("Test for function 'kopijaPodniza' failed.\n");
    }

    result = kopijaPodniza(test_string, 'o', 1);
    if(strcmp(result, " w") != 0) {
        printf("Test for function 'kopijaPodniza' failed.\n");
        printf("zeljen string je ' w', dobljen je '%s'\n", result);
    }

    result = kopijaPodniza("abcccbdddddbaaa", 'b', 2);
    if(strcmp(result, "ddddd") != 0) {
        printf("Test for function 'kopijaPodniza' failed.\n");
        printf("zeljen string je ' w', dobljen je '%s'\n", result);
    }

    return 0;
}