
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
//14 min
int main() {
    // dopolnite ...
    int n, valid = 1, sum = 0;
    scanf("%d", &n);
    int zaporedje[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &zaporedje[i]);
        sum += zaporedje[i];
    }
    for(int i = 0, k = (n-1); i < (n/2); i++, k--){
        if(zaporedje[i] != zaporedje[k])
            valid = 0;
    }
    if(valid)
        printf("DA\n");
    else
        printf("NE\n");
    printf("%d\n", sum);
    return 0;
}
