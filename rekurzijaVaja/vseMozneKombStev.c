#include <stdio.h>
#include <stdlib.h>

void vseMozneKomb(int *a, int k, int n, int f){
    if(f == 0){
        for(int i = 0; i < n; i++){
            printf("%d", a[i]);
        }
        printf("\n");
        return;
    }
    else {
        for(int j = 0; j < k; j++){
            a[n-f] = j;
            vseMozneKomb(a, k, n, f-1);
        }
    }
}

int main(){
    int *c = (int*)malloc(100*sizeof(int));
    vseMozneKomb(c, 3, 5, 3);
    return 0;
}