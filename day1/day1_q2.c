//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int num1;
    printf("enter first number :\n");
    scanf("%d",&num1);
    int num2;
    printf("enter second number :\n");
    scanf("%d",&num2);
    printf("sum=%d\n",num1+num2);
    printf("differnce=%d\n",num1-num2);
    printf("product=%d\n",num1*num2);
    if (num2!=0)
    {
        printf("quotient=%d\n",num1/num2);
    }
    else
    {
         printf("division by 0 not possible");
    
    }
    return 0;

}
