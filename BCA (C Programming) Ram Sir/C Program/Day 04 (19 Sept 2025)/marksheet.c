#include <stdio.h>

int main() {
    float a, b, c, d, e, avg, sum;

    printf("Enter the first subject number: ");
    scanf("%f", &a);
    printf("Enter the second subject number: ");
    scanf("%f", &b);
    printf("Enter the third subject number: ");
    scanf("%f", &c);
    printf("Enter the fourth subject number: \n");
    scanf("%f", &d);
    printf("Enter the fifth subject number: ");
    scanf("%f", &e);


    sum=a+b+c+d+e;
    avg = (a + b + c + d + e) / 5.0;
    printf("The sum of mark is: %f",sum);
    printf("The average of the five numbers is: %.f\n", avg);
    return 0;
}