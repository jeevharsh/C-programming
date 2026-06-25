//20. Subtract 5 if the Tens Digit is Odd
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    n = n - 5 * (((n / 10) % 10) % 2);

    printf("%d", n);

    return 0;
}