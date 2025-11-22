#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int IsFull() {
    return top = MAX -1;
}

int main() {
    top = 4;
    if (IsFull())
    printf("Stack is Full\n");

    else 
    printf("Stack NOT full \n");
    return 0;
}