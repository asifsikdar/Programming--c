#include <stdio.h>
int main()
{
    int number,i,n1=0,n2=1,n3;
    printf("Enter number");
    scanf("%d",&number);

    for(i=2;i<number;++i)
    {
        n3 = n1+n2;

        printf("%d",n3);
        n1 = n2;
        n2= n3;
    }
}
