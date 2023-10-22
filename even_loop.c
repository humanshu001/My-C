#include <stdio.h>
int main(){
    // int b=2;
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    // while (a>b)
    // {
    //     printf("%d\n",b);
    //     b=b+2;
    // }
    // if (a%2==0)
    // {
    //     while (a>=2)
    //     {
    //         printf("%d\n",a);
    //         a=a-2;
    //     }
        
    // }


    // for (int i = 0; (i <= a); i++)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }
    

    int b=0;
    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            printf("%d\n",i);

            b++;
        }
     
    }
    
    if (b==0)
    {
        printf("Prime");
    }
    else{
        printf("Composite");
    }
    return 0;
}