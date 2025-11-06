//Find the digit that occurs the most times in an integer number
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int freq[10]={0};
    while (n!=0)
    {
        int digit=n%10;
        freq[digit]++;
        n=n/10;    
    }
    int maxdigit=0;
    int maxnum;
    for (int i = 0; i < 10; i++)
    {
        if (freq[i]>maxdigit)
        {
            maxdigit=freq[i];
            maxnum=i;
        }
    }
    printf("the number that appears maximum time is %d",maxnum);    
}
