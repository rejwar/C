/*
File Name: PowerFunction.c
Purpose: Calculate the power of a number.
*/

#include <stdio.h>

int main() {
    int base = 2, exponent = 3, result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
