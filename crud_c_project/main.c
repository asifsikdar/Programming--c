#include <stdio.h>

#define max_length 100
int main()
{
    system("cls");
    int input;
    int data[max_length];
    int length =0,value,index;
    do{
        printf("------------ MENU ------------\n\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");

        printf("------------ End MENU ------------\n\n");

        printf("Enter Input Serial Number : ");
        scanf("%d",&input);

        system("cls");
        printf("<------------ Result ------------>\n\n");
        switch(input){
          case 0:
              system("cls");
          break;
          case 1:
              //Add Operation

              printf("Please Enter Value :");
              scanf("%d",&value);
              data[length]=value;
              printf("%d inserted index %d \n",value,length);
              length++;
          break;
          case 2:
              //Insert Operation

              printf("Please Enter Inserted Value :");
              scanf("%d",&value);
              printf("Please Enter Inserted Index :");
              scanf("%d",&index);

              for(int i = length;i>index;i--){
                data[i] = data[i-1];

              }
              data[index]=value;
              length++;
              printf("Value %d =  Index %d = ",value,index);

          break;
          case 3:
              //Edit Operation
              printf("Please Enter Inserted Index between 0 - %d: ",length-1);
              scanf("%d",&index);
              printf("Please Enter Inserted Value :");
              scanf("%d",&value);

              data[index]=value;
              printf("%d Updated at index %d\n", value,index);


          break;
          case 4:
              //Delete Operation
               printf("Please Enter Inserted Index between 0 - %d: ",length-1);
               scanf("%d",&index);

               for(int i=index;i<length;i++){
                data[i]= data[i+1];
               }
               data[length]=0;
               length--;
               printf("Data Deleted ");

          break;
          case 5:
              //Display items
              if(length == 0){
                printf("There is no data\n");
              }else{
                printf("Data: ");
                for(int i=0;i<length;i++){
                printf("%d\t",data[i]);
              }
                printf("\n");
              }

          break;
          case 6:
              for(int i=0;i<length;i++){
                data[i]=0;
              }
              length =0;
              printf("Data Clear\n");
          break;
          default:
            printf("Invalid \n");
          break;
        }
        printf("<------------ End Result ------------>\n\n");
    }while(input !=0);


}
