#include<stdio.h>
int main()
{
    //sum of three number
    int a , b , c , d;

    printf("Enter 1st Number");
    scanf("%d",&a);

    printf("Enter 2nd Number");
    scanf("%d",&b);

    printf("Enter 3rd Number");
    scanf("%d",&c);

    d = a-b-c;
    printf("sum=%d",d);
    return 0;
}