#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number Number");
    scanf("%d",&number);

    switch(number == 0)
    {
      case 1:
        printf("Zero %d",number);
        break;
    }
    switch(number>0)
    {
      case 0:
        printf("Negative %d",number);
        break;

      case 1:
         printf("Positive %d",number);
        break;

      default:
        printf("Zero %d",number);
        break;

    }

}



