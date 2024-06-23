
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...
//1ura 7min skupaj s prejnimo 6/10
//1ura 25min, 9/10, 1 timeout, razlog nisem pravocasno nasel enacbe za minimalni a

//kasneje z CHATGPT -> ugotovil kako dobiti najvecji mozni a, 10/10, no timeout

//na koliko nacinov lahko izpisemo vsoto posameznih delov polinoma da je skupna vsota enaka n
int nacini = 0;
void rekurzija(int n, int m, int curSum, int curMaxMul, int* as, int* bs, int stevec){
    if(curSum == n){
        nacini++;
        /*printf("%d = ", curSum);
        for(int i = 0; i < stevec; i++){
            if(i!=0) printf(" + ");
            printf("%d*%d", as[i], bs[i]);
        }
        printf("\n");*/
        return;
    }
    if(curSum > n){
        return;
    }
    for(int a = curMaxMul; a > 0; a--){//fora je da ga lahko pohitrimo da ugotovimo kateri je najmanjsi a
        for(int b = m; b <= n; b++){
            if(a < b){
                as[stevec] = a;
                bs[stevec] = b;
                rekurzija(n, m, curSum + (a*b), curMaxMul, as, bs, stevec + 1);
            }
        }
    }
}

void recCaller(int n, int m){
    //printf("called\n");
    int as[n];
    int bs[n];
    int curMaxMul = 0;//najvecji a mozni, je zadnje stevilo x kjer je x*(x+1), kot je v pogojih, manjse ali enak n
    for(int i = n; i > 0; i--){
        if(i*(i+1) <= n){
            curMaxMul = i;
            break;
        }
    }
    //for(int i = 1; i < m; i++)
        rekurzija(n, m, 0, curMaxMul, as, bs, 0);
}


int main() {
    // dopolnite ...
    int n, m;
    scanf("%d %d", &n, &m);
    recCaller(n, m);
    printf("%d\n", nacini);
    return 0;
}
