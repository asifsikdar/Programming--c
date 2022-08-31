#include <stdio.h>
int main()
{
   int j,dev;
   float sum = 0.0,i=1.0;
   printf("Input number : ");
   scanf("%d",&dev);

	for(j=1;j<=dev;j++)

    {

        sum +=i/j;

	}
	 printf("%f",sum);


}

