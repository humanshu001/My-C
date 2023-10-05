#include <stdio.h>
int main(){
    int r;
    printf("Enter the radius of Circle: ");
    scanf("%d",&r);
    float area;
    area = 3.14*r*r;
    printf("Area of circle with radius %d is %f", r, area);

    return 0;
}