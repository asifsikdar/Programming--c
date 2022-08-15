#include<stdio.h>
int main()
{
    int year,week,day,due;
    printf("Enter Day");
    scanf("%d",&day); //2222
    year = day/365; //6
    due =day%365; //32
    week = due/7; //4
    day = due%7; //4

     printf(" Year %d week %d day %d",year,week,day);
}
