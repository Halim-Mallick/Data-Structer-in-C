#include<stdio.h>
//#define CAPASITY 100
//Global Variable
int stack[100];
int top=-1;
int n,choice,x,i;
//User-defined Functions
void push(){
    if(top<n-1){
        printf("Push Item: ");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
    else{
        printf("Stack is overflow\n");
    }
}
void pop(){
    if(top>=0){
       printf("Popped Item: %d\n",stack[top]);
       top=top-1;
    }
    else{
        printf("Satck is Empty\n");
    }
}
void display(){
    if(top>=0){
        printf("Stack Element is\n");
        for(i=top; i>=0; i--){
            printf("%d\n",stack[i]);
        }
    }
    else{
        printf("Stack is Empty\n");
    }
}
//Main function
int main(){
    printf("Enter The Value Max[100]: ");
    scanf("%d",&n);
    printf("\n-----Stack menu------");
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    printf("------------------------\n");
    do{
        printf("\nEnter your choice from Menu: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("Exit\n");
                break;
            }
            default:{
                printf("Wrong choice: Please Enter Valid Choice 1/2/3/4\n");
            }
        }
    }
    while(choice !=4);
    return 0;
}

