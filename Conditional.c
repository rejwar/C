#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive number\n");
    } else if (number < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}