#include <stdio.h>
#include <stdlib.h>

int main(){
    int enaLen, dvaLen, enaind = 0, dvaind = 0, mergedind = 0;
    scanf("%d\n", &enaLen);
    int *ena = (int *)malloc(enaLen*sizeof(int));
    for(int i = 0; i < enaLen; i++){//nafila ena
        scanf("%d", &ena[i]);
    }
    scanf("%d\n", &dvaLen);
    int *dva = (int *)malloc(dvaLen*sizeof(int));
    for(int i = 0; i < dvaLen; i++){//nafila dva
        scanf("%d", &dva[i]);
    }
    int *merged = (int*)malloc((enaLen+dvaLen)*sizeof(int));
    for(int i = 0; enaind < enaLen && dvaind < dvaLen; i++){//merga dokler enga do konca ne nafila
        if(ena[enaind] <= dva[dvaind]){
            merged[mergedind] = ena[enaind];
            enaind++;
            mergedind++;
        }
        else if(ena[enaind] > dva[dvaind]){
            merged[mergedind] = dva[dvaind];
            dvaind++;
            mergedind++;
        }
    }
    
    while(enaind < enaLen){//ce prvi ni do konca
        merged[mergedind] = ena[enaind];
        enaind++;
        mergedind++;
    }
    while(dvaind < dvaLen){//ce drugi ni do konca
        merged[mergedind] = dva[dvaind];
        dvaind++;
        mergedind++;
    }
    int prejsni;
    for(int i = 0; i < enaind + dvaind; i++){
        if(i == 0){
            printf("%d\n", merged[i]);
        }
        else if(i != 0 && prejsni != merged[i]){
            printf("%d\n", merged[i]);
        }
        prejsni = merged[i];
    }
    return 0;
}