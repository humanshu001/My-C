#include <stdio.h>
int main(){
    int a,b;
    printf("Enter how many tables you want to print: ");
    scanf("%d",&b);
    for (int j = 1; j <= b; j++)
    {
        printf("****************** Table %d ******************\n",j);
        printf("Enter the number whose table you want to print: ");
        scanf("%d",&a);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n",a,i,a*i);
        }
    }
    return 0;
}