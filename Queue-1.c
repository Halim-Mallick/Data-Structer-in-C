// Queue implementation by array
//Programming by Halim Mallick
#include <stdio.h>
//#define MAXSIZE 2
int queue[100];
int front=0,rear=-1;
int choice,x,i,n;
 
 void insert(){
     if(rear==n-1){
         printf("Sorry! Queue is Full\n");
     }
     else{
         printf("Enter an Element: ");
         scanf("%d",&x);
         rear=rear+1;
         queue[rear]=x;
     }
 }
 
 void Delete(){
     if(front>rear){
         printf("No any deleted element in Queue");
     }
     else{
       int delfront=queue[front];
       front=front+1;
       printf("Deleted item is %d\n",delfront);
     }
 }
 
 void display(){
     if(front>rear){
         printf("Queue is Empty\n");
     }
     else{
        printf("Queue Elemnts: ");
        for(i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
     }
 }

int main() {
    printf("Enter Queue Size Max[100]: ");
    scanf("%d",&n);
    printf("--------Queue Menu--------");
    printf("\n 1.Insert\n 2.Delete \n 3.Display \n 4.Exit\n");
    printf("--------------------------------------------\n");
    
    do{
       printf("Enter your Choice: ");
       scanf("%d",&choice);
       
       switch(choice){
           case 1:{
               insert();
               break;
           }
           case 2:{
               Delete();
               break;
           }
           case 3:{
               display();
               break;
           }
           case 4:{
               printf(" Exit\n");
               break;
           }
           default:{
               printf("Wrong choice! Please Enter Valid choice 1/2/3/4\n");
           }
       }
    }
    while(choice!=4);
    return 0;
}
