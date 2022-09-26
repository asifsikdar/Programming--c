#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int size,sum=0;


    scanf("%d",&size);
    int data[size];
     for(int i=0;i<size;i++)
     {
         scanf("%d",&data[i]);
         sum +=data[i];
     }

     printf("%d",sum);
    return 0;
}

