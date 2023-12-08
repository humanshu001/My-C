#include <stdio.h>
int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d",&a);
    int arr[a+1];
    printf("Enter the elements of the array: ");
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to insert: ");
    int elem;
    scanf("%d",&elem);
    printf("Enter the index: ");
    int ind;
    scanf("%d",&ind);
    for(int i=a; i>=0; i--){
        if(i==ind){
            arr[ind]=elem;
            break;
        }else{
            arr[i]=arr[i-1];
        }
    }
    for(int i=0; i<=a; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}