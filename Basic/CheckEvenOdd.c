/*
File Name: CheckEvenOdd.c
Purpose: Check if a number is even or odd.
*/

#include <stdio.h>

int main() {
    int num = 7;
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}
