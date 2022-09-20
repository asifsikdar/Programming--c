#include <stdio.h>
int main()
{
    int array[]={60,50,20,30,80,10,15};
    int length,i,j,temp;
    length = sizeof(array)/sizeof(array[0]);

    //Sorting Logic

    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            if(array[i]> array[j]){
                temp = array[i];
                array[i]= array[j];
                array[j] = temp;
            }
        }

    }

    for(i=0;i<length;i++){
        printf("%d ",array[i]);
    }


}
