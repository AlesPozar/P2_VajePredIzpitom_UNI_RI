
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
//8min
int moveCount = 0;

void hanoi(int n, char from, char to, char aux, int k) {
    if (n == 0) 
        return;
    hanoi(n - 1, from, aux, to, k);
    moveCount++;
    if(moveCount > k && n == 1 && to == 'B')
        printf("%d\n", moveCount);
    hanoi(n - 1, aux, to, from, k);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    hanoi(n, 'A', 'C', 'B', k);

    return 0;
}


/*hanoi

*/