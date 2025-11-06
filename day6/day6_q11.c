//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int a;
    printf("enter number:\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
    
}