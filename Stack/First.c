#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x) {
    if (top < CAPACITY -1) {
        top = top +1;
        stack[top] = x;
        printf("Success  added item ")
    } else {
        
    }
} 