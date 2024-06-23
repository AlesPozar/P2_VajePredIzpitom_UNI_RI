#include <stdio.h>
#include <stdlib.h>

int fib(int i){
    if(i == 0) 
        return 0;
    if(i == 1)
        return 1;
    return fib(i-1) + fib(i-2);
}

int main(){
    printf("Fib. of 10: %d\n", fib(10));
    return 0;
}