#include <stdio.h>

int main() {
    float km, m, cm;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = km * 100000;
    printf("\nGiven distance in kilometers = %.2f km\n", km);
    printf("The distance in meters = %.2f m\n", m);
    printf("The distance in centimeters = %.2f cm\n", cm);
    return 0;
}