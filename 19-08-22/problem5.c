#include <stdio.h>
int main()
{
    int Number,even,odd;
    printf("Enter Number");
    scanf("%d",&Number);

    if(Number%2 == 0){
        printf("Even Number");
    }else if(Number%2 == !0){
        printf("Odd Number");
    }
}

