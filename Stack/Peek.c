#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty() {
    return top == -1;
}

int peek() {
    if (isEmpty()) {
        printf("STACK Empty \n");
        return -1;
    }
    return stack[top];
}


int main() {
    printf("Peek resutlt = %d\n" , peek());

    top = 1;
    stack[0] = 10;
    stack[1] = 20;
}


