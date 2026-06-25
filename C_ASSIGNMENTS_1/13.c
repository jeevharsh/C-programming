//13. Reverse a Two-Digit Number
#include <stdio.h>

int main() {
    int x, a, b, rev;

    printf("enter 2 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    b = x / 10;

    rev = (a * 10) + b;

    printf("reversed = %d", rev);

    return 0;
}