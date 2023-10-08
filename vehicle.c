#include <stdio.h>
int main(){
    int vehicle, tyre, three, four;
    vehicle = 137;
    tyre=512;
    four= (tyre-3*vehicle);
    three= vehicle-four;
    printf(" three wheeler are %d\nfour wheeler are %d", three,four);
    return 0;
}