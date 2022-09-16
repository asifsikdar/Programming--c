#include <stdio.h>
int main()
{
    int n,row,col;
    printf("Enter Pattern Size");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
         for(col=1;col<=n-row;col++)
        {
            //space print
          printf(" ");
        }

        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }

        printf("\n");
    }


}


