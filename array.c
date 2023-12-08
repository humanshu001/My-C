#include<stdio.h>
int main(){
    int a;
    printf("Enter the size of first array: ");
    scanf("%d", &a);
    int array1[a];
    printf("Enter the elements of first array: ");
    for(int i=0; i<a; i++){
        scanf("%d", &array1[i]);
    }

    int b;
    printf("Enter the size of the second array: ");
    scanf("%d",&b);
    int array2[b];
    for(int i=0;i<b;i++){
        scanf("%d",&array2[i]);
    }
    int final[a+b];

    for(int i=0; i<(a+b); i++){
    
        if(final[i]!=array1[i]){
            final[i]=array1[i];
        }
    }
    return 0;
    
}