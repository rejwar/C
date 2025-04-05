#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 15;
    if (a > b && a > c) printf("Largest: %d\n", a);
    else if (b > c) printf("Largest: %d\n", b);
    else printf("Largest: %d\n", c);
    return 0;
}
