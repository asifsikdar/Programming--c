#include <stdio.h>
int main()
{
    float height,base,result;
    printf("Enter Height Triangle");
    scanf("%f",&height);

    printf("Enter Base of Triangle");
    scanf("%f",&base);

    result = height*base/2;
    printf("Result %.2f",result);
}
