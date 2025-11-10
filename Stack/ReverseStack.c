#include<stdio.h>
#define MAX 100

int stack[MAX];
int top =-1;


void push(int value) {
    if (top == MAX -1)
    printf("Stack overflow");
    else 
    stack[++top] =value;

}

int pop() {
    if(top ==-1) {
    printf("Stack underflow");
    return -1;
    }
    else
    return stack[top--];
}


int peek () {
    if (top ==-1)
    return -1;
    
    else 
    return stack[top];

}


int isEmpty() {
    return top ==-1;
}

void display() {
    if (isEmpty())
    printf("Stack is empty\n");
     else {
        printf("stack : ");
        for (int i=top; i>=0 ; i--) 
        printf("%d", stack[i]);
        printf("\n");

        
     }
}


int main() {
    int arr[] = {1,2,3,4,5,6,7} , n =5;
    for(int i = 0; i<n; i++)
    push(arr[i]);

    printf("Reveresed array");
    while (!isEmpty())
    {
        printf("%d" , pop());
    }
    
}