#include <stdio.h>
int main()
{
    int marks;
    printf("Input Marks");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("A+");
    }else if(marks>=70){
        printf("A");
    }else if(marks>=60){
       printf("B");
    }else{
      printf("Fail");
    }
}
