#include <stdio.h>
int main()
{
    int math,eng,bang,phy,che,bio,total;
    float avg;
    printf("Enter English Reult");
    scanf("%d",&eng);
     printf("Enter Math Reult");
    scanf("%d",&math);
     printf("Enter Bangla Reult");
    scanf("%d",&bang);
     printf("Enter Physics Reult");
    scanf("%d",&phy);
     printf("Enter Chemistry Reult");
    scanf("%d",&che);
     printf("Enter Biology Reult");
    scanf("%d",&bio);


    total = math+eng+bang+phy+che+bio;

     printf("Total Marks %d \n",total);
    avg = total/6;

     printf("Avarage Marks %f",avg);

}
