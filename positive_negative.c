#include <stdio.h>
int main(){
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    b= (a>0)*a - (a<0)*a;
    printf("%d",b);
    return 0;
}