#include <stdio.h>
int main()
{
    int FirstNumber,SecondNumber;
    printf("Enter First Number");
    scanf("%d",&FirstNumber);
    printf("Enter Second Number");
    scanf("%d",&SecondNumber);

    if(FirstNumber>SecondNumber){
        printf("Maximum Number %d",FirstNumber);
    }else if(SecondNumber>FirstNumber){
        printf("Maximum Number %d",SecondNumber);
    }else{
        printf("Equal Number");
    }
}

