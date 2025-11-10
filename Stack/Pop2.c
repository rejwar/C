#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value){
    if (top == MAX -1)
    printf("Stack Over flow");
    else
    stack[++top] =value;
}

int pop() {
if (top == -1){
    printf("stack underflow");
    return -1;
}
else 
    return stack[top];
}

int isEmpty() {
    return top =-1;

}

void display() {
    if(isEmpty()) 
    printf("Stack is empty");

    else {
        printf("Stack: ");
        for (int i = top ; i>=0 ; i--)
        printf("%d", stack[i]);
        printf("\n");
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    pop();

    display();
    return 0;
}