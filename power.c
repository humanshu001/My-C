#include <stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    int c=1;
    for (int i = 0; i < b; i++)
    {
        c=c*a;
    }
    printf("%d",c);
    return 0;
}