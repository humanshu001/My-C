#include <stdio.h>
int prime(int a){
    if(a<=1)
    return 0;
    for(int i=2;i<=(a/2);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    printf("enter any number");
    scanf("%d",&a);
    if(prime(a)==1){
        printf("prime");
    }else{
        printf("not prime");
    }
    return 0;
}