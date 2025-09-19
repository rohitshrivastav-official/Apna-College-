#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    float f;
    float g;
    
    printf("Enter 1st number");
    scanf("%d",&a);

    printf("Enter 2nd number");
    scanf("%d",&b);
    
    c=a+b;
    printf("\n sum= %d",c);
    d=a-b;
    printf("\n difference= %d",d);
    e=a*b;
    printf("\n product= %d",e);
    f=a/b;
    printf("\n quotient= %f",f);
    g=a%b;
    printf("\n remainder= %f",g);
}