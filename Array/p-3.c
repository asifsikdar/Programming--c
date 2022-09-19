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
    int max,max1;
    max = num_array[0];
    max1 = num_array[0];
    for(i=0;i<5;i++)
    {
        if(num_array[i]>max)
        {
           max1=max;
            max=num_array[i];
        }else if(num_array[i]>max1 && num_array[i]<max)
        {
            max1 = num_array[i];
        }

    }
    printf("Smallest %d ",max1);
}


