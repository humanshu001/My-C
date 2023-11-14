    // to take a number from user and print the largest factor of that given number except itself
#include <stdio.h>
int main(){
    int a,b,m;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        m=b;
    }
    else{
        m=a;
    }
    int great;
    for (int i = m; i <= (a*b); i++)
    {
        if(i%a==0 && i%b==0){
            great= i;
            break;
        }
    }
    printf("%d",great);
    return 0;
}
    // to take a number from user and check whether itis  a armstrom number or not
     