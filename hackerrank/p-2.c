
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,diff;
    float c,d,sum1,diff1;
    scanf("%d%d",&a,&b);


    scanf("%f%f",&c,&d);

    sum = a+b;
    if(a>b)
    {
       diff = a-b;
    }else
    {
     diff = a-b;
    }
    sum1 = c+d;

     if(c>d)
    {
       diff1 = c-d;
    }else
    {
     diff1 = c-d;
    }

    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",sum1,diff1);

    return 0;
}
