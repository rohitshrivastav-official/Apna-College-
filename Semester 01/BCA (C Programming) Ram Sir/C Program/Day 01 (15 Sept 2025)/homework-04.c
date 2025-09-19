#include<stdio.h>

int main()
{
    int v, r;
    printf("Enter the value that you need to find the square: ");
    scanf("%d", &v);
    r = v * v;
    printf("The square of the given number is %d\n", r);
    return 0;
}