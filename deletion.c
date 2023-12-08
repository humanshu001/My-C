#include <stdio.h>
#include <limits.h>
int main()
{
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min =arr[i];
        }
    }
    int secondmax=INT_MIN;
    for (int i = 0; i < a; i++)
    {
        if(secondmax<arr[i] && arr[i]<max ){
            secondmax= arr[i];
        }
    }
    printf("second maximum is %d",secondmax);
    int secondmin=INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if(secondmin>arr[i] && arr[i]>min ){
            secondmin= arr[i];
        }
    }
    printf("second minimum is %d",secondmin);
    
    
    

    return 0;
}