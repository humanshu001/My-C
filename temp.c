#include <stdio.h>
int main(){
    float celcius, fahrenit;
    printf("enter temperature in celcius: ");
    scanf("%f",&celcius);
    fahrenit= ((9*celcius)/5)+32;
    printf("temperture in fahreit is %.2f", fahrenit);

    return 0;
}