//16. One's Digit to 0
#include <stdio.h>

int main() {
    int x;

    printf("enter 2 digit number: ");
    scanf("%d", &x);

    x = x / 10;
    x = x * 10;

    printf("result = %d", x);

    return 0;
}