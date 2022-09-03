#include <stdio.h>
int main()
{
    int num,col,row,mid;
    printf("Enter Number");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(mid=row;mid<num;mid++)
        {
            printf("#");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}

