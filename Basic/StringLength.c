/*
File Name: StringLength.c
Purpose: Calculate the length of a string manually.
*/

#include <stdio.h>

int main() {
    char str[] = "Programming";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
