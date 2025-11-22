#include<stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

int IsEmpty() {
    return top == -1;
}


int pop() {
    if (IsEmpty()) {
        printf("STACK UNDERFLOW\n      ");

        return -1;
    }

    int item = stack[top];
    top --;
    return item;
}

int main() {
    printf("Pop result = %d/n" , pop());

    top = 2;
    stack[0] =5;
    stack[1] = 6;
    stack[2] =7;

    printf("Pop result = %d \n" , pop());
    printf("Pop result is %d\n" , pop());
    return 0;
}