
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
// 6min
int main() {
    // dopolnite ...
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ((a[i]-b[i])*(a[i]-b[i]));
    }
    printf("%d\n", sum);
    return 0;
}
