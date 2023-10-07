// to take two characteres from user and print their ascii value
#include <stdio.h>
int main(){
    char a,b;
    printf("Enter any two characters: ");
    scanf("%c\n%c",&a,&b);
    printf("%c = %d \n %c = %d",a,a,b,b);
    return 0;
}
// to make atm machine logic in which user enters amount and you have to print notes of 2000 500 and 100 