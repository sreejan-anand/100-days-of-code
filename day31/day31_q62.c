//Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    int n,s;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i]-arr[i-n-1];
        arr[i-n-1]=temp;
    }
    
    printf("recerssed array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}