/*
File Name: GenerateFibonacci.c
Purpose: Generate Fibonacci sequence up to N terms.
*/

#include <stdio.h>

int main() {
    int n = 10, a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
