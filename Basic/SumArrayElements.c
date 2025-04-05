/*
File Name: SumArrayElements.c
Purpose: Calculate the sum of elements in an array.
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
