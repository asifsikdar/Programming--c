
//Not the currect way
#include <stdio.h>
int main()
{
    int i,search_num,length,size;

    printf("Enter Array Size \n");
    scanf("%d",&size);
    int array[size];

    printf("Enter Array Number");

    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }


    //length= sizeof(array)/sizeof(array[0]);

    printf("Enter Search Number");
    scanf("%d",&search_num);

    for(i=0;i<size;i++)
    {
        if(search_num == array[i])
        {
            printf("Found %d = ",i);
            break;
        }
    }
    printf("Not Found");


}
 //Not the currect way
