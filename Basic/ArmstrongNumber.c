/*
File Name: ArmstrongNumber.c
Purpose: Check if a number is an Armstrong number.
*/

#include <stdio.h>

int main() {
    int num = 153, sum = 0, temp = num, rem;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == num) printf("%d is an Armstrong number.\n", num);
    else printf("%d is not an Armstrong number.\n", num);
    return 0;
}
