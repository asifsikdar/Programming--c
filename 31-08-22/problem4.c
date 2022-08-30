#include <stdio.h>
int main()
{
    int sum=0;
    float avg;

    for (int i=1;i<=10;i++)
    {
        sum +=i;
    }
    avg = sum/10;
    printf("Sum %d average %.2f",sum,avg);
}


