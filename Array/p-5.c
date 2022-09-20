#include <stdio.h>
int main()
{
    int size = 5;
    int array[size];
    int i,sum,avg,largest;

    printf("Input \n");
    for(i=0;i<size;i++)
    {
        scanf("%d \n",&array[i]);
    }
    sum=0;
    largest = array[0];

    for(i=0;i<size;i++)
    {
        sum +=array[i];
        if(largest<array[i])
        {
            largest = array[i];
        }
    }
    avg = sum/size;
    printf("Sum = %d\n",sum);
    printf("Avg = %d\n",avg);
    printf("Largest = %d\n",largest);

}
