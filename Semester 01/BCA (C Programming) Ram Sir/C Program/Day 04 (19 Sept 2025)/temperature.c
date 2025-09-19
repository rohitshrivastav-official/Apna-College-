#include<stdio.h>

int main()
{
    //variable declare
    float a,b,c,d,e;
    float f,g,h,i,j;

    //input
    printf("Temperature=");
    scanf("%f",&a);

    //1st output
    printf("\n\nIf you mean %fC (Given value in celcius) then \n",a);
    b=a*9; c=b/5; d=c+32; e=a+273.15;
    printf("Your given temperature in farenheight = %f",d);
    printf("\nYour given temperature in kelvin = %f",e);

    //2nd output
    printf("\n\nIf you mean %fF (Given value in celcius) then \n",a);
    f=a-32; g=f*5; i=g/9; j=i-273.15;
    printf("Your given temperature in Celcius = %f",i);
    printf("\nYour given temperature in kelvin = %f",j);
}