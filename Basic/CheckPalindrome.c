/*
File Name: CheckPalindrome.c
Purpose: Check if a number is a palindrome.
*/

#include <stdio.h>

int main() {
    int num = 121, rev = 0, temp = num, rem;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == num) printf("%d is a palindrome.\n", num);
    else printf("%d is not a palindrome.\n", num);
    return 0;
}
