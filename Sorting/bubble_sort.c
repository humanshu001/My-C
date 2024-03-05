/*
Bubble Sort: Bubble sort is a simple sorting algorithm that works by repeatedly stepping through the list, comparing each pair of adjacent items and swapping them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

Time Complexity: O(n^2)
Space Complexity: O(1)

Input:
5
64 34 25 12 22
Output:
12 22 25 34 64

Program:
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

Explanation:

*/