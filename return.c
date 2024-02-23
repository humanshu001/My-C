#include <stdio.h>
int main(){
    int a[5]={2,5,6,3,8};
    int b=8;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==b){
            printf("found at %d",i);
            return 0;
        }
    }
    printf("not found");
    return 0;
}