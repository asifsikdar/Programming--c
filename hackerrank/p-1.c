
#include <stdio.h>





int main()
{
    int n,n1,i;
    scanf("%d%d",&n,&n1);
    for(i=n;i<=n1;i++){
        if(i ==1 ){
            printf("one\n");
        }else if(i==2){
            printf("two\n");
        }else if(i==3){
            printf("three\n");
        }else if(i==4){
            printf("four\n");
        }else if(i==5){
            printf("five\n");
        }else if(i==6){
            printf("six\n");
        }else if(i==7){
            printf("seven\n");
        }else if(i==8){
            printf("eight\n");
        }else if(i==9){
            printf("nine\n");
        }



    }


          if(n1>= 10){
    for(i=10;i<=n1;i++){
        if(i%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
}



}
