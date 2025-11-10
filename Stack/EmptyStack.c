#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value ){
    if (top == MAX-1)
    printf("Stack Overflow\n");
    else 
    stack[++top] =value;
}

int pop() {
    if (top == -1) 
    return -1;
     else 
     return stack[top];
}

int peek() {
    if (top ==-1)
    return -1;
    else 
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

void display() {
    
    if (isEmpty())
    printf("stack is empty\n");
    else {
        printf("stack: ");
        for(int i =top ; i>=0; i--)
        printf("%d" , stack[i]);
        printf("\n");
    }
}




int main() {
    if(isEmpty())
    printf("Stack is empty\n");
    else 
    printf("Stack is not empty\n");
    return 0;
}