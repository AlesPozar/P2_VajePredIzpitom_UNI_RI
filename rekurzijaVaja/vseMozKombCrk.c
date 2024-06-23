#include <stdio.h>
#include <stdlib.h>

/*OPIS
Beremo niz do najvec 100 characterjev, dokler ne dobimo '\n'
za vpis npr:
ABC

izpisemo
AAA
AAB
AAC
ABA
ABB
ABC
ACA
ACB
ACC

BAA
BAB
BAC
BBA
BBB
BBC
BCA
BCB
BCC

CAA
CAB
CAC
CBA
CBB
CBC
CCA
CCB
CCC
*/

void rekurzija(int stevec, char* vsi, char* izpis, int globina){
    if(globina == stevec){//izpis
        for(int i = 0; i < stevec; i++){
            printf("%c", izpis[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 0; i < stevec; i++){
        if(globina == 0 && i != 0)
            printf("\n");
        izpis[globina] = vsi[i];
        rekurzija(stevec, vsi, izpis, globina+1);
    }

}

int main(){
    int stevec;
    char vsi[101];
    while((vsi[stevec] = getchar()) != '\n')//se prebere '\n'
        stevec++;
    vsi[stevec] = '\0';//namesto zadnjega '\n' damo terminator

    char izpis[stevec];

    rekurzija(stevec, vsi, izpis, 0);
    printf("\n");
    return 0;
}