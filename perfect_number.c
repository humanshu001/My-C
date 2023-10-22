#include <stdio.h>
int main(){
    int n, i, perfect = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            perfect += i;
        }
    }
    if (perfect == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
    return 0;
}