//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int y;
    printf("enter the year:\n");
    scanf("%d",&y);
    if (y%4==0)
    {
        if (y%100==0)
        {
            if (y%400==0)
            {
                printf("year is leap year\n");
            }
            else
            {
                printf("year is not leap year\n");
            }    
        }
        
        else
        {
            printf("year is leap year");
        }
    }
    else
    {
        printf("year is not leap year\n");
    }
 return 0;
}