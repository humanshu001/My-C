#include <stdio.h>
int main(){
// A        A 
// AB      BA
// ABC    CBA
// ABCD  DCBA
// ABCDEEDCBA
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= r; j++)
    //     {
    //         if(j<=i){
    //             printf("%c",j+64);
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     for (int j = r; j >= 1; j--)
    //     {
    //         if(j<=i){
    //             printf("%c",j+64);
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i <= r; i++)
    {
        for (int k = 0; k < (r-i); k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0;
}

