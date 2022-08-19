#include <stdio.h>
int main()
{
    double number1,number2,result;
    printf("Enter 1st Double Number");
    scanf("%lf",&number1);

    printf("Enter 2nd Double Number");
    scanf("%lf",&number2);

    result = number1/number2;
    printf("Result %lf",result);
}
