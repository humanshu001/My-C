#include <stdio.h>
int main(){
    int a=0;
    int b;
    
    scanf("%d",&b);
    while (b!=0)
    {
        a=a*10 + b%10;
        b /=10;
    }
    printf("%d",a);
    return 0;
}