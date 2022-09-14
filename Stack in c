#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top < CAPACITY - 1){
        top = top + 1;
        stack[top]= x;
        printf("Succesfully added item: %d\n", x);
    }else{
        printf("Stack is Overflow\n");
    }
}

int pop(){
    if(top >= 0){
        int val = stack[top];
        top = top - 1;
        return val;
    }
    printf("Stack Is Empty\n");
    return -1;
}

int peek(){
    if(top >= 0){
        return stack[top];
    }
    printf("Stack Is Empty\n");
    return -1;
}
int main(){
    printf("Start From here.\n\n");
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Pop item: %d\n", pop());
    push(40);
    printf("Top of Stack: %d\n",peek());
    push(100);
    return 0;
}
