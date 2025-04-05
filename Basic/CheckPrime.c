/*
File Name: CheckPrime.c
Purpose: Check if a number is prime.
*/

#include <stdio.h>

int main() {
    int num = 13, flag = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) flag = 0;
    }
    if (flag) printf("%d is prime.\n", num);
    else printf("%d is not prime.\n", num);
    return 0;
}
