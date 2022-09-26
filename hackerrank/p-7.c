
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size,i;
   scanf("%d",&size);
   int data[size];
   for(int i=0;i<size;i++)
   {
       scanf("%d",&data[i]);

   }
    for(i=size-1;i>=0;i--){
          printf("%d ",data[i]);
       }
    return 0;
}
