//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    int lenghth;
    printf("enter length :\n");
    scanf("%d",&lenghth);
    int breadth;
    printf("enter breadth:\n");
    scanf("%d",&breadth);
    printf("the perimeter of rectangle is %d\n",2*(lenghth+breadth));
    printf("the area of rectangle is :%d",lenghth*breadth);
    return 0;

}