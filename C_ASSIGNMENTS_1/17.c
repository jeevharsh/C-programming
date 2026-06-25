// 17. Convert tens's Digit to one
#include <stdio.h>

int main() {
    int x, a, result;

    printf("enter 2 digit number: ");
    scanf("%d", &x);

    a = x % 10;
    result = 10 + a;

    printf("result = %d", result);

    return 0;
}