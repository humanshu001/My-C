#include <stdio.h>
int main(){
    int vehicle, tyre, three, four;
    vehicle = 137;
    tyre=512;
    four= (tyre-3*vehicle);
    three= vehicle-four;
    printf(" Three wheeler are %d\nFour wheeler are %d", three,four);
    return 0;
}