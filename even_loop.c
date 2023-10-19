#include <stdio.h>
int main(){
    int b=2;
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    while (a>b)
    {
        printf("%d\n",b);
        b=b+2;
    }
    

    return 0;
}