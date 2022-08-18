#include <stdio.h>
int main()
{
    int FirstNumber,SecondNumber,ThirdNumber;
    printf("Enter First Number");
    scanf("%d",&FirstNumber);

    printf("Enter Second Number");
    scanf("%d",&SecondNumber);

    printf("Enter Third Number");
    scanf("%d",&ThirdNumber);

    if(FirstNumber>=SecondNumber && FirstNumber>=ThirdNumber){
        printf("Maximum Number %d",FirstNumber);
    }else if(SecondNumber>=FirstNumber && SecondNumber>=ThirdNumber){
        printf("Maximum Number %d",SecondNumber);
    }else if(ThirdNumber>=FirstNumber && ThirdNumber>=SecondNumber){
        printf("Maximum Number %d",ThirdNumber);
    }
}
