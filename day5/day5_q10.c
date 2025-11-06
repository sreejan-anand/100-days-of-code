//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int t;
    printf("enter seconds :\n");
    scanf("%d",&t);
    int h,m,s;
    h=t/3600;
    m=t%3600/60;
    s=m*60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}
