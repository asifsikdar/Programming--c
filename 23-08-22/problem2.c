#include <stdio.h>
int main()
{
    int number1,number2;
    printf("Enter Two Number");
    scanf("%d %d",&number1,&number2);

    switch(number1>number2)
    {
      case 0:
        printf("Maximum %d",number2);
        break;

      case 1:
         printf("Maximum %d",number1);
        break;

    }

}

