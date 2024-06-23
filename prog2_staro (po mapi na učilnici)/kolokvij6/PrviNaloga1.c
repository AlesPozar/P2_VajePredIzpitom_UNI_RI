#include <stdio.h>
#include <stdlib.h>

int main(){
    int stev, max = 0, polovica = 10000000 / 2, trenutna;
    scanf("%d", &stev);
    int *prvapojavitev = (int*)malloc(10000000*sizeof(int));
    int *maxdolzine = (int*)malloc(10000000*sizeof(int));
    int *arr = (int*)malloc(stev*sizeof(int));
    for(int i = 0; i < 10000000; i++) prvapojavitev[i] = -1;
    for(int i = 0; i < stev; i++){//steje pojavitve
        scanf("%d", &trenutna);
        arr[i] = trenutna;
        if(prvapojavitev[polovica+trenutna] == -1)//prvi vpis
            prvapojavitev[polovica+trenutna] = i;
        else{
            maxdolzine[polovica+trenutna] = i - prvapojavitev[polovica+trenutna];
            if(maxdolzine[polovica+trenutna] > max)
                max = maxdolzine[polovica+trenutna];
        }
    }
    if(max == 0)
        printf("0\n");
    else{
        printf("%d\n", max);
        int *c = (int*)malloc(10000000*sizeof(int));
        for(int i = 0; i < stev; i++){
            if(maxdolzine[polovica+arr[i]] == max && !c[polovica+arr[i]]){
                printf("%d\n", arr[i]);
                c[polovica+arr[i]] = 1;
            }
        }
    }
    return 0;
}