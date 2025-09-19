#include<stdio.h>
int main()
{
    //sum of three number
    int a , b , c , d ;
    float e;

    printf("Enter 1st Number");
    scanf("%d",&a);

    printf("Enter 2nd Number");
    scanf("%d",&b);

    printf("Enter 3rd Number");
    scanf("%d",&c);

    d=a+b+c;
    printf("The sum of these no. are %d",d);

    e=d/3;
    printf("\nNow the average of the given value is %f",e);

    return 0;
}