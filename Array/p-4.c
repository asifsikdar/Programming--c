#include <stdio.h>
int main()
{
    int my_array[]={10, 20, 50, 40, 80, 70};
    int length = sizeof(my_array)/sizeof(my_array[0]);
    printf("%d",length);

}
