#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the length of Rectangle");
    scanf("%d",&a);
    printf("Enter the length of Rectangle");
    scanf("%d",&b);

    c=a*b; d=a+b; e=d*2;
    printf("The Area Of Rectangle=%d",c);
    printf("\nThe Perimiter Of Rectangle=%d",e);
}