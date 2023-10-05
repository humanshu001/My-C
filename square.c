#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Integer: ");
    scanf("%d",&a);
    b= a*a;
    c=b*a;
    printf("Square of %d is %d \n Cube of %d is %d",a,b,a,c);
    return 0;
}