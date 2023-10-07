#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b );
    printf("before swaping a is %d and b is %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping a is %d and b is %d",a,b);
    return 0;
}