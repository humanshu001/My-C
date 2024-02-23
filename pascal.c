#include <stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            printf("  "); 
        }
        for(int j=0; j<=i; j++){
            printf("%3d ", combination(i, j));
        }
        printf("\n");
    }
    
    return 0;
}