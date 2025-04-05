#include <stdio.h>
int main() {
    int x = 3, y = 8, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
