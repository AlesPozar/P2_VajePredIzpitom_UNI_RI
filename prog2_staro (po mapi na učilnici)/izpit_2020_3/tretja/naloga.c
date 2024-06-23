#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxArg = 0;
int rekurzija(char* niz, int dolzina, int index){
    int trenArg = 0;
    while(index < dolzina){
        if(niz[index] == '(')
            index = rekurzija(niz, dolzina, index + 1);
        else if(niz[index] == ')')
            break;
        else if(niz[index] == ',')
            trenArg++;
        index++;
    }
    if(maxArg < trenArg)
        maxArg = trenArg;
    return index;
}

int main(){
    char niz[1001];
    scanf("%s", niz);
    rekurzija(niz, strlen(niz), 0);
    printf("%d\n", maxArg+1);
    return 0;
}