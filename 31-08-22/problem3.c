#include <stdio.h>
int main()
{
    int sum=0,n;

    printf("Enter Nutural Number");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        sum +=i;
    }
    printf("%d",sum);
}

