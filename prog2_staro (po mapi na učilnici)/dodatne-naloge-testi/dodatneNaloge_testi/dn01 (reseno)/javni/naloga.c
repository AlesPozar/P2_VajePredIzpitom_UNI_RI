#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[100];
    char m[100];
    int stevecn = 0, stevecm = 0, endcount = 0, stevizpis = 0, vodilneNicle = 0;
    char ch;
    while(endcount < 2){
        ch = getchar();
        if(ch == ' ' || ch == '\n')
            endcount++;
        else{
            if(endcount == 0){//pisemo prvo
                n[stevecn] = ch;
                stevecn++;
            }
            else{//pisemo drugo
                m[stevecm] = ch;
                stevecm++;
            }
        }
    }
    for(int i = 0; i < stevecm; i++){
        for(int y = 0; y < (m[i]-48); y++){
            if(y == 0 && n[stevizpis] == '0'){
                vodilneNicle = 1;
                if(y == ((m[i]-48)-1)){
                    printf("0");
                }
            }
            else if(vodilneNicle && n[stevizpis] == '0'){
                if(y == ((m[i]-48)-1)){
                    printf("0");
                }
            }
            else{
                printf("%c", n[stevizpis]);
                vodilneNicle = 0;
            }
            stevizpis++;
        }
        vodilneNicle = 0;
        printf("\n");
    }
    
    return 0;
}