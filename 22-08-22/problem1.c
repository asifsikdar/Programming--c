#include <stdio.h>
int main()
{
    float x,y,count;
    printf("Enter Teddy and eddy weight");
    scanf("%f %f",&x,&y);

    count =0;
    while(x<=y)
    {
        x*=3;
        y*=2;

        count++

    }


    printf("Result A %.2f",count);
}
