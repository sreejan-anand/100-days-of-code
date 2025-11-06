//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
int n,sum;
printf("enter number n");
scanf("%d",&n);
if (n>1)
{
    sum=sum+1;
}
for (int i = 2; i <= n; i++)
{   
    sum += (double)(2 * i - 1) / (2 * i);
}