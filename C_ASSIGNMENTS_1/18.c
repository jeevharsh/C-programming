// 18. Convert the One's Digit of a 3-Digit Number to 2
#include <stdio.h>

int main() {
    int x, a, b, c, result;

    printf("enter 3 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    x = x / 10;

    b = x % 10;
    x = x / 10;

    c = x % 10;

    result = (c * 100) + (b * 10) + 2;

    printf("result = %d", result);

    return 0;
}