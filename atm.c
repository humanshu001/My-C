#include <stdio.h>
int main(){
    int amount,tr,five,fr,one,two;
    printf("Enter amount in mulltiple of hundreds: ");
    scanf("%d", &amount);
    two= amount/2000;
    tr=amount%2000;
    five= (tr)/500;
    fr=(tr)%500;
    one=(fr)/100;
    printf("2000 notes = %d\n500 notes= %d\n100 notes = %d",two,five,one);
    return 0;
}