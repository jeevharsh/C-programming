//15. Reverse a 4-Digit Number
#include <stdio.h>

int main() {
    int x, a, b, c, d, rev;

    printf("enter 4 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    x = x / 10;

    b = x % 10;
    x = x / 10;

    c = x % 10;
    x = x / 10;

    d = x % 10;

    rev = (d * 1000) + (c * 100) + (a * 10) + b;

    printf("result = %d", rev);

    return 0;
}