//14. Reverse a 3-Digit Number
#include <stdio.h>

int main() {
    int x, a, b, c, rev;

    printf("enter 3 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    x = x / 10;

    b = x % 10;
    x = x / 10;

    c = x % 10;

    rev = (a * 100) + (b * 10) + c;

    printf("reversed = %d", rev);

    return 0;
}