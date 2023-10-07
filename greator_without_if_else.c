#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);
    c=(a<b)*b+(b<=a)*a;
    printf("the greatest number in %d and %d is %d",a,b,c);

    return 0;
}