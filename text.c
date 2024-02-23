#include <stdio.h>
int main(){
    int n;
    printf("Enter half size of array: ");
    scanf("%d",&n);
    int temp;
    int arr[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i = i+2)
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;   
    }


    for (int i = 0; i < 2*n; i++)
    {
        printf("%d, ",arr[i]);
    }
        
    return 0;
}