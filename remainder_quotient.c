#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the number you want to divide: ");
    scanf("%d", &a);
    printf("enter the number you want to divide with: ");
    scanf("%d", &b);
    c = a / b;
    printf("quotient is %d\n", c);
    c = a % b;
    printf("remainder is %d", c);
    return 0;
}