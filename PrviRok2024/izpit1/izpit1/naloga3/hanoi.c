#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) 
        return;
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

void hanoirev(int n, char from, char to, char aux, int currentDisk) {
    if (n == 0) 
        return;
    hanoirev(n - 1, from, aux, to, currentDisk + 1);
    printf("Move disk %d from %c to %c\n", currentDisk, from, to);
    hanoirev(n - 1, aux, to, from, currentDisk + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Starting Hanoi NORMAL with n = %d\n", n);
    hanoi(n, 'A', 'C', 'B');

    printf("\nStarting Hanoi REVERSED with n = %d\n", n);
    hanoirev(n, 'A', 'C', 'B', 1);

    return 0;
}