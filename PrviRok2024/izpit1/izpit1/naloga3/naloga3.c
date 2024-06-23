
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
int moveCount = 0;

void hanoi(int n, char from, char to, char aux, int k) {
    if (n == 0) 
        return;
    
    printf("hanoi(%d, %c, %c, %c, %d) called - Moving %d disks from %c to %c using %c\n", n, from, to, aux, k, n-1, from, aux, to);
    hanoi(n - 1, from, aux, to, k);
    
    moveCount++;
    printf("Move %d: Move disk %d from %c to %c\n", moveCount, n, from, to);
    if(moveCount > k) {
        if (n == 1 && to == 'B') {
            printf("Move %d: Smallest disk moved to B\n", moveCount);
        }
    }

    printf("hanoi(%d, %c, %c, %c, %d) called - Moving %d disks from %c to %c using %c\n", n, from, to, aux, k, n-1, aux, to, from);
    hanoi(n - 1, aux, to, from, k);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("Starting Hanoi with n = %d, k = %d\n", n, k);
    hanoi(n, 'A', 'C', 'B', k);

    return 0;
}


/*hanoi
void hanoi(int n, char from, char to, char aux) {
    if (n == 0) 
        return;
    hanoi(n - 1, from, aux, to);
    hanoi(n - 1, aux, to, from);
}
*/