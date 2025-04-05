/*
File Name: MultiplicationTable.c
Purpose: Display the multiplication table of a number.
*/

#include <stdio.h>

int main() {
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
