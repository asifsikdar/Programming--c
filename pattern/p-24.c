
#include <stdio.h>
int main()
{
    int n,n1,i,index=0,arr[100];
    printf("Enter Number and position");
    scanf("%d%d",&n,&n1);
    for(i=1;i<=n;i++)
    {
        if(i%2 !=0)
        {
            index++;
            arr[index]=i;
        }
    }
    printf("%d",arr[n1]);

}
