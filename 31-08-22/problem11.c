#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter Number");
    scanf("%d %d",&x,&y);
    x = x+y;
    y = x-y;
    x = x-y;

    printf("Result %d %d",x,y);

}
