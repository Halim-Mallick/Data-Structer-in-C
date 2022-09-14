//POP, PUSH and PEEK in c
#include<stdio.h>
#define MAXSIZE 4
int stack[MAXSIZE];
int top=-1;

void push(int x){
    if(top<MAXSIZE-1){
        top=top+1;
        stack[top]=x;
        printf("Item Added Successfully %d\n",x);
    }
    else{
        printf("Stack is Overflow\n");
    }
}
int pop(){
    if(top>=0){
        int val=stack[top];
        top=top-1;
        return val;
    }
    else{
        printf("Stack is Empty");
        return -1;
    }
}
int peek(){
    if(top>=0){
        return stack[top];
    }
    else{
        printf("Stack Is Empty\n");
        return -1;
    }
}
//Main function
int main(){
    printf("\n.....Stack is Start......\n\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop Item %d\n",pop());
    push(40);
    push(50);
    printf("Top item is now %d\n",peek());
    push(60);
    push(70);
    return 0;
}
