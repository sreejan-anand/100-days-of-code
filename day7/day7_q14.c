//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char word;

    printf("enter alphabet \n");

    scanf("%c",&word);

    if ((word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' ||
        word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U'))

    {
        printf("vowel\n");
    }
    else
    {
        printf("consonant\n");
    }
    return 0 ;
}