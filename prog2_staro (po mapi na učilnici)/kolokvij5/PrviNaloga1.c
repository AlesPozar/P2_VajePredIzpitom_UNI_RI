#include <stdio.h>
#include <stdlib.h>

int funkcija(unsigned int *tab, int len){//6:23 min
    int count = 0;
    for(int i = 0; i < len; i++){
        unsigned int num = tab[i];
        while(num > 0){
            if(num & 1)
                count++;
            num = num >> 1;
        }
    }
    return count;
}
int main(){
    unsigned int arr[] = {5, 7, 10}; 
    int result = funkcija(arr, 3);
    printf("The total number of 1 bits is: %d\n", result); 
    return 0;
}