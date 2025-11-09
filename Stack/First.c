#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x) {
    if (top < CAPACITY -1) {
        top = top +1;
        stack[top] = x;
        printf("Success  added item  %d" ,x);
    } else {
        printf("Exception! No spaces?n");
    }
} 

int pop() {
    return -1;
}

int peek() {
    return -1;
}

int main() {
    printf(" Implementing my stack in C.\n");
    push(10);
    push(20);
    push(30);
    push(40);
    return 0;
}