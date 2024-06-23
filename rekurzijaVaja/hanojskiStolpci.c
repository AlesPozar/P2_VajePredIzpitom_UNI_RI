#include <stdio.h>
#include <stdlib.h>
int poteze = 0;
void hanoi(int n, char from, char to, char vmesni){
    if(n == 0)
        return;
    hanoi(n-1, from, vmesni, to);
    poteze++;
    printf("%d | Premik iz: %c to %c, koluta premera %d\n", poteze, from, to, n);
    hanoi(n-1, vmesni, to, from);
}

int main(){
    printf("HANOJSKI STLPCI ZA n: ");
    int n;
    scanf("%d", &n);
    printf("\n");
    hanoi(n, 'A', 'C', 'B');
    return 0;
}