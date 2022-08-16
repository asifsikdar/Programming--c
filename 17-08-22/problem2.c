#include <stdio.h>
int main()
{
    int id,hour,rate_hour;
    float salary_count;

    printf("Employee Id");
    scanf("%d",&id);
   //input id
    printf("Employee Work hour");
    scanf("%d",&hour);
   //input total hour
    printf("Employee Hourly Rate");
    scanf("%d",&rate_hour);
   //input given rate ammount per hour
    salary_count = hour*rate_hour;
   //total working hour and total rate ammount per hour

    printf("Employee Id %d Salary %.2f",id,salary_count);
   //output
}
