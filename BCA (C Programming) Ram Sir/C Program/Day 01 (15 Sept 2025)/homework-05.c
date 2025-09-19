#include<stdio.h>

int main()
{
    int v, r;
    printf("Enter the value of side of square: ");
    scanf("%d", &v);
    r = v * v;
    printf("The area of the given side is %d\n", r);
    return 0;
}