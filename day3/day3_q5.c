//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float c;
    printf("type temprature in celcius \n");
    scanf("%f",&c);
    float f;
    f=c*9/5+32;
    printf("%f",f);
    return 0;

}
