//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a;
    printf("enter a \n");
    scanf("%d",&a);
    int b;
    printf("enter b \n");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);
    return 0;


}
