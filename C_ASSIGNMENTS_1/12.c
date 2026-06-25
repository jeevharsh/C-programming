// 12. Sum of Digits of a Three-Digit Number
#include <stdio.h>

int main() {
    int x, a, b, c, sum;

    printf("enter 3 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    x = x / 10;

    b = x % 10;
    x = x / 10;

    c = x % 10;

    sum = a + b + c;

    printf("sum = %d", sum);

    return 0;
}