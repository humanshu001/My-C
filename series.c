#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float sum=1;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum=sum+(1.0/i);
    // }
    for (int i = 1; i < n; i++)
    {
        sum=sum+(float)1/(i*2);
    }

    // for(int i=1;i<=n;i++)
    // {
    //     sum=sum+(float)(i*3)/(i*i);
    // }
    printf("%f",sum);
    return 0;
}