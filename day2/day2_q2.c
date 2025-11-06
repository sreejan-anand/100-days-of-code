//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    int radius;
    printf("enter radius :\n");
    scanf("%d",&radius);
    printf("the circumference of circle is %f\n",2*3.14*radius);
    printf("the area of circle is :%f",3.14*radius*radius);
    return 0;

}
