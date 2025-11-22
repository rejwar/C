#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;


int IsFull() {
    return top == MAX-1;
}

void push (int item) {
    if (IsFull()) {
        printf("STACK OVERFLOW \n");
        return 0;
    }

    top++;

    stack[top] = item;
    printf("Pushed %d\n" , item);
} 


int main() {
    push(10);
    push(20);
    push(300);
    push(200);
    push(40);

    return 0;
}


