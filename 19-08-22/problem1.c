#include <stdio.h>
int main()
{
    int time,hour,minutes,seconds,due;
    printf("Enter Integer type time");
    scanf("%d",&time);

    hour = time/60;
    minutes = time%60;
    seconds = minutes/60;
    due = seconds%60;
    printf("Result Total hour %d Total minutes %d Total seconds %d",hour,minutes,due);
}
