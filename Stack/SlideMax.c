#define MAX 5

int stack[MAX];
int top = -1;

void push(int item ) {
    top ++;
    stack[top] = item;
}

int pop() {
    int value = stack[top];
    top--;
    return value;
}