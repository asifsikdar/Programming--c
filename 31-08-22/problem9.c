#include <stdio.h>
int main()
{
    int number,i,s=0,r;
    printf("Enter number");
    scanf("%d",&number);

    for(i=number;i>0;)
    {
        r = i%10;
        s = s*10+r;
        i = i/10;
    }

    if(s==number)
    {
        printf("Palindrome Number %d",number);
    }else
    {
        printf(" Not Palindrome Number %d",number);
    }
}
