// 11. Tens Digit of a Three-Digit Number
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    x = x / 10;
    y = x % 10;

    printf("10's digit = %d", y);

    return 0;
}