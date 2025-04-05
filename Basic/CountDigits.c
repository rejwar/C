/*
File Name: CountDigits.c
Purpose: Count the number of digits in a given number.
*/

#include <stdio.h>

int main() {
    int num = 12345, count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
