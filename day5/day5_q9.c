//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    printf("enter principal: \n");
    scanf("%f",&p);
    printf("enter rate :\n");
    scanf("%f",&r);
    printf("enter time :\n");
    scanf("%f",&t);
    float si=p*r*t/100;
    printf("simple interst :%f\n",si);
    float ci=p*pow((1+r/100),t)-p;
    printf("compound interst :%f",ci);
    return 0 ;
}