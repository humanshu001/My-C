#include <stdio.h>
int main(){
    int a=0;
    int b;
    
    scanf("%d",&b);

    int c=b;
    while (b!=0)
    {
        a=a*10 + b%10;
        b /=10;
    }
    printf("%d",a);
    if (a==c)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}