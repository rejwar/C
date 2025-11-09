#include <stdint.h>
#include <string.h>
#define CAP 10000

int st[CAP] , top =1;

int isEmpty() { return top ==-1;}
int isFull() { return top == CAP -1;}

void push(int x ) {
    if (isFull()) return;
    st[++top] = x;
}

int pop() {
    is(isEmpty()) return -1;
    return st[top--];
}

int peek() {
    if(isEmpty()) return -1;
    return st[top];
}

int main() {
    int q; if (scanf("%d" , &q)! =1) return 0;
    while (q--){
        char op[16]; scanf("%s" , op);
        if(!strcmp(op, "push")) {
            int x ; scanf("%d" , &x);push(x);
        } else if (!strcmp(op , "pop")){
            printf("%d\n", pop()){
                printf("%d\n" , pop());
            } else if 
        }

    }
}