#include <stdio.h>
int main(){
    int n, i, j, c;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (c = 0; c <= (n - i - 2); c++){

            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                c = 1;
            }
            else{
                c = c * (i - j + 1) / j;

            }
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}