#include <stdio.h>
int fibonacci(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int s = fibonacci(n-1) + fibonacci(n-2);
    return s;
}               
int main(){

    int n = fibonacci(5);
    printf("%d", n);
    
    return 0;
}