#include <stdio.h>

int main() {
    float a, b, c, d, e, avg;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the third number: ");
    scanf("%f", &c);
    printf("Enter the fourth number: ");
    scanf("%f", &d);
    printf("Enter the fifth number: ");
    scanf("%f", &e);
    avg = (a + b + c + d + e) / 5.0;
    printf("The average of the five numbers is: %.2f\n", avg);
    return 0;
}