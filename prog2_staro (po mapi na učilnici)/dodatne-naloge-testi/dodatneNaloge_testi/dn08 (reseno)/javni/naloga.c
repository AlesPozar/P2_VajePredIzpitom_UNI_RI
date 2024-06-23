#include <stdio.h>
#include <stdlib.h>

//----------13min, 7/10 primerov, ostali timed out
//----------48min, 10/10 primerov, dodana memoizacija in long long za velike stevilke
//kako lahko to pohitrimo, memoizacija?
long long mozneRazporeditve = 0;
long long rekurzija(long long***** memotable, long long l, long long d, long long c, long long prejsni, long long count, long long max){
    if(count == max){//vsi posedeni
        return 1;
    }
    if(memotable[l][d][c][prejsni][count] != -1){
        return memotable[l][d][c][prejsni][count];
    }
    long long result = 0;
    //na prvo mesto lahko postavimo vse tri
    if(prejsni == 3){//ni bilo se nobenega/centrist
        if(l > 0)
            result += rekurzija(memotable, l - 1, d, c, 1, count + 1, max);
        if(d > 0)
            result += rekurzija(memotable, l, d - 1, c, 2, count + 1, max);
        if(c > 0)
            result += rekurzija(memotable, l, d, c - 1, 3, count + 1, max);

    }
    else if(prejsni == 1){//levicar
        if(l > 0)
            result += rekurzija(memotable, l - 1, d, c, 1, count + 1, max);
        if(c > 0)
            result += rekurzija(memotable, l, d, c - 1, 3, count + 1, max);
    }
    else if(prejsni == 2){//desnicar
        if(d > 0)
            result += rekurzija(memotable, l, d - 1, c, 2, count + 1, max);
        if(c > 0)
            result += rekurzija(memotable, l, d, c - 1, 3, count + 1, max);  
    }
    //ce pride do sem, se avtomaticno vrne nazaj, pomeni pa, da je prisel do konca in najdel porazdelitev,
    //oz da gledena podane parametre ni mogel razporediti vseh udelezencev
    memotable[l][d][c][prejsni][count] = result;
    return result;
}
int main(){
    long long l, d, c;
    scanf("%lld %lld %lld", &l, &d, &c);
    long long***** memotable = (long long*****)malloc((l+1)*sizeof(long long****));
    for(long long i = 0; i < l+1; i++){
        memotable[i] = (long long****)malloc((d+1)*sizeof(long long***));
        for(long long j = 0; j < d+1; j++){
            memotable[i][j] = (long long***)malloc((c+1)*sizeof(long long**));
            for(long long k = 0; k < c+1; k++){
                memotable[i][j][k] = (long long**)malloc((4+1)*sizeof(long long*));
                for(long long m = 0; m < 4+1; m++){
                    memotable[i][j][k][m] = (long long*)malloc((l + d + c + 1)*sizeof(long long));
                    for(long long n = 0; n < (l + d + c + 1); n++){
                        memotable[i][j][k][m][n] = -1;
                    }
                }
            }
        }
    }
    
    mozneRazporeditve = rekurzija(memotable, l, d, c, 3, 0, l + d + c);
    printf("%lld\n", mozneRazporeditve);

    for(long long i = 0; i < l+1; i++){
        for(long long j = 0; j < d+1; j++){
            for(long long k = 0; k < c+1; k++){
                for(long long m = 0; m < 4+1; m++){
                    free(memotable[i][j][k][m]);
                }
                free(memotable[i][j][k]);
            }
            free(memotable[i][j]);
        }
        free(memotable[i]);
    }
    free(memotable);
    return 0;
}


