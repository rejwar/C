#include<stdio.h>
#define MAX 5

int stack[MAX];

int top = -1;

int IsEmpty() {
    return top == -1;
}

int main() {
    if (IsEmpty())
    printf("Stack is Empty \n");

    else 
        printf("Stack is not empty \n");

        return 0;
}