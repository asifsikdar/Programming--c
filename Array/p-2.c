#include <stdio.h>
int main()
{
    //find sum
    int num_array[5]={50,70,40,80,60};
    int i,sum=0;

    for(i=0;i<5;i++)
    {
        sum+=num_array[i];
    }
    printf("Sum %d\n ",sum);

    //find Average
    printf("Average %d\n ",sum/5);

    //find Largest
    int min;
    min = num_array[0];
    for(i=0;i<5;i++)
    {
        if(num_array[i]<min)
        {
            min = num_array[i];
        }

    }
    printf("Smallest %d ",min);
}

