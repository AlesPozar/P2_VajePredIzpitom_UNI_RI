#include <stdio.h>
#include <stdlib.h>

void rekurzija(int* set, int n, int* izpis, int index){
    if(index == n){//izpisemo
        int steviz = 0;
        printf("{");
        for(int i = 0; i < n; i++)
            if(izpis[i]){
                if(steviz!=0) printf(", ");
                steviz++;
                printf("%d", set[i]);
            }
        printf("}\n");
        return;
    }
    rekurzija(set, n, izpis, index + 1);//exclusivni
    izpis[index] = 1;//set
    rekurzija(set, n, izpis, index + 1);//inclusivni
    izpis[index] = 0;//reset
}

int main() {
    int n;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &set[i]);
    int izpis[n];
    for(int i = 0; i < n; i++)
        izpis[i] = 0;
    rekurzija(set, n, izpis, 0);
    return 0;
}