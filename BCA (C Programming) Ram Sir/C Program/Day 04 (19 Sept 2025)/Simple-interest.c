#include <stdio.h>

int main() {
    float p, r, t, i;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the annual interest rate: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);
    i = (p * r * t) / 100;
    printf("Simple Interest = %f\n", i);
    return 0;
}