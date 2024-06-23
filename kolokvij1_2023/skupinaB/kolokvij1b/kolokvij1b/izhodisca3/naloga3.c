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
//1ura 14min (skupno z ostalimi nalogami iz tega kolokvija) 3/10 prov, ostali timeout
//pospesitev da
//for(int a = 1; a < n/curSum; a++)
//for(int a = 1; a < m; a++)
int nacini = 0;

void rekurzija(int n, int m, int curSum, int* uporabljeni, int globina, int* izpisa, int* izpisb, int steveca, int stevecb){
    if(curSum == n){
        nacini++;
        /*printf("CURSUM: %d, globina: %d\n", curSum, globina);
        for(int i = 0; i < steveca; i++){
            printf("(%d + %d)", izpisa[i], izpisb[i]);
        }
        printf("\n");*/
        return;
    }
    for(int a = 1; a < n/curSum; a++){
        for(int b = 1; b < a; b++){
            if(a + b <= m && uporabljeni[a] && uporabljeni[b]){//pogoj da je vredu
                uporabljeni[a] = 0;
                uporabljeni[b] = 0;
                izpisa[steveca] = a;
                izpisb[stevecb] = b;
                if(curSum * (a + b) <= n)
                    rekurzija(n, m, curSum * (a + b), uporabljeni, globina + 1, izpisa, izpisb, steveca+1, stevecb+1);
                uporabljeni[a] = 1;
                uporabljeni[b] = 1;
            }
        }
    }
}

int main() {
    // dopolnite ...
    int n, m;
    scanf("%d %d", &n, &m);
    int uporabljeni[n];
    int izpisa[n];
    int izpisb[n];
    for(int i = 0; i < n; i++)
        uporabljeni[i] = 1;
    rekurzija(n, m, 1, uporabljeni, 0, izpisa, izpisb, 0, 0);
    printf("%d\n", nacini);
    return 0;
}
/*int n,m;
int count=0;
int memo[5000];


void rekurzija(int vsota){

    for(int a=1;a<n/vsota;a++){
        if(memo[a]==0){
            memo[a]=1;
            for(int b=1; b<a; b++){
                if(memo[b]==0){
                    memo[b]=1;
                    if(a+b <= m && vsota*(a+b)<=n){
                        if(vsota*(a+b)==n){
                            count++;
                            memo[b]=0;
                            break;
                        }
                        if(vsota*(a+b)<n){
                            rekurzija(vsota*(a+b));
                            memo[b]=0;
                        }
                    }
                    memo[b]=0;
                }
            }
            memo[a]=0;
        }
    }
}



int main() {
    
   
    scanf("%d %d",&n,&m);
    rekurzija(1);
    printf("%d", count);

    return 0;
}*/