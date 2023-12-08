#include <stdio.h>
int main(){
    // euler's  method
    int a, b, rem, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int a1 = a, b1 = b;
    while (b != 0){
        rem = b;
        b = a % b;
        a = rem;
    }
    hcf = a;
    printf("HCF = %d", hcf);

    int lcm;
    lcm = (a1 * b1) / hcf;
    printf("\nLCM = %d", lcm);

    return 0;
}