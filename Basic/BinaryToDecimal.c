/*
File Name: BinaryToDecimal.c
Purpose: Convert a binary number to decimal.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int binary = 1011, decimal = 0, base = 1;
    while (binary > 0) {
        int rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
