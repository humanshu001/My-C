#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for(int j = 1;j<=2*r-i; j++)
        {
            if(j>=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}