#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time, n, ci;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter how many times the interest is compounded per year: ");
    scanf("%f", &n);

    printf("Enter time in years: ");
    scanf("%f", &time);
    rate= rate/100;
    ci = principle * (pow((1 + rate / n), time));

    printf("Compound Interest = %f", ci);

    return 0;
}