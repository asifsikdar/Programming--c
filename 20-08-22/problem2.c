#include <stdio.h>
int main()
{
    int redius;
    float result;
    const float Formola_PI = 3.1416;
    printf("Enter Redius of circle");
    scanf("%d",&redius);

    result = Formola_PI*redius*redius;
    printf("Result %f",result);
}
