#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number Number");
    scanf("%d",&number);

    switch(number%2 == 0)
    {
      case 0:
        printf("Odd %d",number);
        break;

      case 1:
         printf("Even %d",number);
        break;

    }

}


