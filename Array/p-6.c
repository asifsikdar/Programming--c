#include <stdio.h>
int main()
{
    int array[]={10, 50, 60, 40, 90, 70, 30};
    int search_num,length,i;
    int is_found = -1;

    length = sizeof(array)/sizeof(array[0]);

    printf("Enter Search Number = ");
    scanf("%d",&search_num);

    for(i=0;i<length;i++)
    {
        if(search_num == array[i])
        {
            is_found = i;
            break;
        }
    }

    if(is_found == -1)
    {
        printf("Not Found\n");
    }else
    {
        printf("Found Index = %d",is_found);
    }
}
