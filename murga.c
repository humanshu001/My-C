#include <stdio.h>
int main(){
    int head,leg;
    printf("enter no of heads and legs:");
    scanf("%d %d",&head,&leg);
    int goats= (leg - (2*head))/2;
    int murga= head-goats;
    printf("no of Goats are %d \nno of Murgas are %d",goats,murga);
    return 0;
}
// write a c program to take temp in degree celcius from user and print it in fahrenit